using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;
using FPLibrary;

public static class UFEScreenExtensions{
	#region public class definitions
	public class ActionCallback{
		public delegate void ActionDelegate(AudioClip sound);
		public ActionDelegate Action{get; set;}
		public AudioClip Sound{get; set;}

		public ActionCallback(ActionDelegate action = null, AudioClip sound = null){
			this.Action = action;
			this.Sound = sound;
		}
	}

	public class MoveCursorCallback{
		public delegate void ActionDelegate(
			Fix64 horizontalAxis,
			Fix64 verticalAxis,
			bool horizontalAxisDown,
			bool verticalAxisDown,
			bool confirmButtonDown,
			bool cancelButtonDown,
			AudioClip sound
		);


		public ActionDelegate Action{get; set;}
		public AudioClip Sound{get; set;}
		
		public MoveCursorCallback(ActionDelegate action = null, AudioClip sound = null){
			this.Action = action;
			this.Sound = sound;
		}
	}
	#endregion

	#region public class properties
	public static float NormalizedSliderSpeed = 0.1f;
	#endregion

	#region public class methods
	public static bool DefaultNavigationSystem(
		this UFEScreen screen, 
		IDictionary<InputReferences, InputEvents> player1PreviousInputs,
		IDictionary<InputReferences, InputEvents> player1CurrentInputs,
		IDictionary<InputReferences, InputEvents> player2PreviousInputs,
		IDictionary<InputReferences, InputEvents> player2CurrentInputs,
		AudioClip moveCursorSound = null,
		AudioClip confirmSound = null,
		AudioClip cancelSound = null,
		Action cancelAction = null
	){
		return
			screen.DefaultNavigationSystem(
				player1PreviousInputs,
				player1CurrentInputs, 
				moveCursorSound, 
				confirmSound, 
				cancelSound, 
				cancelAction
			) 
			||
			screen.DefaultNavigationSystem(
				player2PreviousInputs,
				player2CurrentInputs, 
				moveCursorSound, 
				confirmSound, 
				cancelSound, 
				cancelAction
			);
	}

	public static bool DefaultNavigationSystem(
		this UFEScreen screen, 
		IDictionary<InputReferences, InputEvents> previousInputs,
		IDictionary<InputReferences, InputEvents> currentInputs,
		AudioClip moveCursorSound = null,
		AudioClip confirmSound = null,
		AudioClip cancelSound = null,
		Action cancelAction = null
	){
		if (UFE.eventSystem != null && UFE.eventSystem.isActiveAndEnabled){
			//---------------------------------------------------------------------------------------------------------
			// First, check if the current Selectable Object is an Input Field, because it's a special case...
			//---------------------------------------------------------------------------------------------------------
			GameObject currentGameObject = UFE.eventSystem.currentSelectedGameObject;
			InputField inputField = currentGameObject != null ? currentGameObject.GetComponent<InputField>() : null;

			if (inputField != null){
				//-----------------------------------------------------------------------------------------------------
				// If it's an Input Field, check if the user wants to write a text
				// or if he wants to move the caret or exit from the Input Field...
				//-----------------------------------------------------------------------------------------------------
				Vector3 direction = 
					(Input.GetKeyDown(KeyCode.UpArrow) ? Vector3.up : Vector3.zero) + 
					(Input.GetKeyDown(KeyCode.DownArrow) ? Vector3.down : Vector3.zero);

				if(
					direction != Vector3.zero ||
					Input.GetKeyDown(KeyCode.Tab) || 
					Input.GetKeyDown(KeyCode.Return) || 
					Input.GetKeyDown(KeyCode.KeypadEnter)
				){
					Selectable previousSelectable = inputField;
					Selectable nextSelectable = null;

					if (direction != Vector3.zero){
						nextSelectable = currentGameObject.FindSelectable(direction, false);
					}

					if (nextSelectable == null || previousSelectable == nextSelectable){
						nextSelectable = currentGameObject.FindSelectable(Vector3.right, false);

						if (nextSelectable == null || previousSelectable == nextSelectable){
							nextSelectable = currentGameObject.FindSelectable(Vector3.down, false);

							if (nextSelectable == null || previousSelectable == nextSelectable){
								nextSelectable = currentGameObject.FindSelectable(Vector3.left, false);

								if (nextSelectable == null || previousSelectable == nextSelectable){
									nextSelectable = currentGameObject.FindSelectable(Vector3.up, false);
								}
							}
						}
					}

					screen.HighlightOption(nextSelectable);
				}else{
					inputField.OnUpdateSelected(new AxisEventData(UFE.eventSystem));
				}
				return true;
			}else{
				//-----------------------------------------------------------------------------------------------------
				// Otherwise, invoke the "Special Navigation System" with the default functions
				//-----------------------------------------------------------------------------------------------------
				return screen.SpecialNavigationSystem(
					previousInputs,
					currentInputs,
					new MoveCursorCallback(screen.DefaultMoveCursorAction, moveCursorSound),
					new ActionCallback(UFE.eventSystem.currentSelectedGameObject.DefaultConfirmAction, confirmSound),
					new ActionCallback(cancelAction.DefaultCancelAction, cancelSound)
				);
			}
		}
		return false;
	}

	public static Selectable FindFirstSelectable(this UFEScreen screen){
		Selectable[] selectables = Selectable.allSelectablesArray;
		Transform firstSelectableTransform = null;
		Selectable firstSelectable = null;
		
		for (int i = 0; i < selectables.Length; ++i){
			Selectable currentSelectable = selectables[i];
			
			if(
				currentSelectable != null && 
				currentSelectable.gameObject.activeInHierarchy && 
				currentSelectable.IsInteractable() &&
				screen.HasSelectable(currentSelectable)
			){
				Transform currentTransform = currentSelectable.transform;
				
				if (screen.firstSelectableGameObject != null){
					if (currentSelectable.gameObject == screen.firstSelectableGameObject){
						return currentSelectable;
					}
				}else if(
					firstSelectable == null ||
					firstSelectableTransform == null ||
					currentTransform.position.y > firstSelectableTransform.position.y ||
					(
					currentTransform.position.y == firstSelectableTransform.position.y &&
					currentTransform.position.x < firstSelectableTransform.position.x
					)
					){
					firstSelectable = currentSelectable;
					firstSelectableTransform = currentTransform;
				}
			}
		}
		
		return firstSelectable;
	}
	
	public static GameObject FindFirstSelectableGameObject(this UFEScreen screen){
		Selectable selectable = screen.FindFirstSelectable();
		return selectable != null ? selectable.gameObject : null;
	}

	public static Selectable FindSelectable(this UFEScreen screen, Vector3 direction){
		GameObject currentGameObject = UFE.eventSystem.currentSelectedGameObject;
		if (currentGameObject == null){
			return screen.FindFirstSelectable();
		}else{
			return currentGameObject.FindSelectable(direction, screen.wrapInput) ?? screen.FindFirstSelectable();
		}
	}
	
	public static Selectable FindSelectable(
		this GameObject currentGameObject, 
		Vector3 direction, 
		bool wrapInput,
		IList<Selectable> whiteList = null
	){
		if (currentGameObject == null || !currentGameObject.activeInHierarchy){
			// If no GameObject is selected, search the first Selectable GameObject in the screen
			return null;
		}else{
			// If a GameObject is selected, check if it has a Selectable component and if it's interactable...
			Selectable currentSelectableObject = currentGameObject.GetComponent<Selectable>();
			if (currentSelectableObject == null || !currentSelectableObject.IsInteractable()){
				// If the selected GameObject isn't Selectable and Interactable, 
				// search the first Selectable GameObject in the screen
				return null;
			}else{
				// Otherwise, check which Navigation Mode is defined for the current Selectable Object
				// and try to find the next Selectable Object in the specified direction...
				if (currentSelectableObject.navigation.mode == Navigation.Mode.Automatic){
					//-------------------------------------------------------------------------------------------------
					// "AUTOMATIC" Navigation Mode
					//-------------------------------------------------------------------------------------------------
					Selectable nextSelectableObject = UFEScreenExtensions.FindSelectable(currentSelectableObject, direction, whiteList);
					if (nextSelectableObject != null){
						return nextSelectableObject;
					}else if (wrapInput){
						// If we couldn't find any selectable GameObject but we want to wrap 
						// the input in the current screen, we search the first selectable 
						// GameObject in the opposite part of the screen.
						Vector3 oppositeDirection = -direction;
						nextSelectableObject = currentSelectableObject;
						Selectable temp = UFEScreenExtensions.FindSelectable(nextSelectableObject, oppositeDirection, whiteList);

						while (temp != null){
							nextSelectableObject = temp;
							temp = UFEScreenExtensions.FindSelectable(temp, oppositeDirection, whiteList);
						}
						
						return nextSelectableObject ?? currentSelectableObject;
					}else{
						// If we couldn't find any selectable GameObject and we don't want to wrap the input 
						// in the current screen, then we return the current selectable object (if any).
						return currentSelectableObject;
					}
				}else if (currentSelectableObject.navigation.mode == Navigation.Mode.Explicit){
					//-------------------------------------------------------------------------------------------------
					// "EXPLICIT" Navigation Mode
					//-------------------------------------------------------------------------------------------------
					if (direction.x == 0f){
						if (direction.y > 0f){
							return currentSelectableObject.navigation.selectOnUp;
						}else if (direction.y < 0f){
							return currentSelectableObject.navigation.selectOnDown;
						}else{
							return currentSelectableObject;
						}
					}else if (direction.x < 0f){
						return currentSelectableObject.navigation.selectOnLeft;
					}else if (direction.x > 0f){
						return currentSelectableObject.navigation.selectOnRight;
					}else{
						return currentSelectableObject;
					}
				}else if (currentSelectableObject.navigation.mode == Navigation.Mode.Horizontal){
					//-------------------------------------------------------------------------------------------------
					// "HORIZONTAL" Navigation Mode
					//-------------------------------------------------------------------------------------------------
					Vector3 currentSelectablePosition = currentSelectableObject.transform.position;
                    Selectable[] selectables = Selectable.allSelectablesArray;
                    Selectable first = null;
					Selectable last = null;
					Selectable previous = null;
					Selectable next = null;

					for (int i = 0; i < selectables.Length; ++i){
						Selectable current = selectables[i];

						if (current!=null && (whiteList==null || whiteList.Count==0 || whiteList.Contains(current))){
							Transform currentTransform = current.transform;

							if(
								first == null
								|| 
								currentTransform.position.x < first.transform.position.x
								||
								currentTransform.position.x == first.transform.position.x &&
								currentTransform.position.y > first.transform.position.y
							){
								first = current;
							}

							if(
								last == null
								|| 
								currentTransform.position.x > last.transform.position.x
								||
								currentTransform.position.x == last.transform.position.x &&
								currentTransform.position.y < last.transform.position.y
							){
								last = current;
							}

							if(
								(
									previous == null 
									||
									currentTransform.position.x > previous.transform.position.x 
									||
									currentTransform.position.x == previous.transform.position.x &&
									currentTransform.position.y < previous.transform.position.y
								)
								&&
								(
									currentTransform.position.x < currentSelectablePosition.x
									||
									currentTransform.position.x == currentSelectablePosition.x &&
									currentTransform.position.y > currentSelectablePosition.y
								)
							){
								previous = current;
							}

							if(
								(
									next == null 
									||
									currentTransform.position.x < next.transform.position.x 
									||
									currentTransform.position.x == next.transform.position.x &&
									currentTransform.position.y > next.transform.position.y
								)
								&&
								(
									currentTransform.position.x > currentSelectablePosition.x
									||
									currentTransform.position.x == currentSelectablePosition.x &&
									currentTransform.position.y < currentSelectablePosition.y
								)
							){
								next = current;
							}
						}
					}

					if (direction.x < 0f){
						return previous ?? (wrapInput ? last : currentSelectableObject);
					}else if (direction.x > 0f){
						return next ?? (wrapInput ? first : currentSelectableObject);
					}else{
						return currentSelectableObject;
					}
				}else if (currentSelectableObject.navigation.mode == Navigation.Mode.Vertical){
					//-------------------------------------------------------------------------------------------------
					// "VERTICAL" Navigation Mode
					//-------------------------------------------------------------------------------------------------
					Vector3 currentSelectablePosition = currentSelectableObject.transform.position;
                    Selectable[] selectables = Selectable.allSelectablesArray;
                    Selectable first = null;
					Selectable last = null;
					Selectable previous = null;
					Selectable next = null;
					
					for (int i = 0; i < selectables.Length; ++i){
						Selectable current = selectables[i];
						
						if (current!=null && (whiteList==null || whiteList.Count==0 || whiteList.Contains(current))){
							Transform currentTransform = current.transform;
							
							if(
								first == null
								|| 
								currentTransform.position.y > first.transform.position.y
								||
								currentTransform.position.y == first.transform.position.y &&
								currentTransform.position.x < first.transform.position.x
							){
								first = current;
							}
							
							if(
								last == null
								||
								currentTransform.position.y < last.transform.position.y
								||
								currentTransform.position.y == last.transform.position.y &&
								currentTransform.position.x > last.transform.position.x
							){
								last = current;
							}
							
							if(
								(
									previous == null 
									||
									currentTransform.position.y < previous.transform.position.y
									||
									currentTransform.position.y == previous.transform.position.y &&
									currentTransform.position.x > previous.transform.position.x
								)
								&&
								(
									currentTransform.position.y > currentSelectablePosition.y
									||
									currentTransform.position.y == currentSelectablePosition.y &&
									currentTransform.position.x < currentSelectablePosition.x
								)
							){
								previous = current;
							}
							
							if(
								(
									next == null 
									|| 
									currentTransform.position.y > next.transform.position.y
									||
									currentTransform.position.y == next.transform.position.y &&
									currentTransform.position.x < next.transform.position.x
								)
								&&
								(
									currentTransform.position.y < currentSelectablePosition.y
									||
									currentTransform.position.y == currentSelectablePosition.y &&
									currentTransform.position.x > currentSelectablePosition.x
								)
							){
								next = current;
							}
						}
					}

					if (direction.y < 0f){
						return next ?? (wrapInput ? first : currentSelectableObject);
					}else if (direction.y > 0f){
						return previous ?? (wrapInput ? last : currentSelectableObject);
					}else{
						return currentSelectableObject;
					}
				}else{
					//-------------------------------------------------------------------------------------------------
					// "NONE" Navigation Mode
					//-------------------------------------------------------------------------------------------------
					return currentSelectableObject;
				}
			}
		}
	}
	
	public static GameObject FindSelectableGameObject(this UFEScreen screen, Vector3 direction){
		Selectable selectable = screen.FindSelectable(direction);
		return selectable != null ? selectable.gameObject : null;
	}
	
	public static GameObject FindSelectableGameObject(
		this GameObject currentGameObject, 
		Vector3 direction, 
		bool wrapInput,
		IList<Selectable> whiteList = null
	){
		Selectable selectable = currentGameObject.FindSelectable(direction, wrapInput, whiteList);
		return selectable != null ? selectable.gameObject : null;
	}

	public static void HighlightOption(this UFEScreen screen, Selectable option, BaseEventData pointer = null){
		screen.HighlightOption(option != null ? option.gameObject : null, pointer);
	}

	public static void HighlightOption(this UFEScreen screen, GameObject option, BaseEventData pointer = null){
		UFE.eventSystem.SetSelectedGameObject(option, pointer);

		InputField nextInputField = option != null ? option.GetComponent<InputField>() : null;
		if (nextInputField != null){
			nextInputField.OnPointerClick(new PointerEventData(UFE.eventSystem));
			nextInputField.selectionAnchorPosition = 0;
			nextInputField.selectionFocusPosition = 0;
			nextInputField.ActivateInputField();
			nextInputField.Select();
		}
	}

	public static void MoveCursor(this UFEScreen screen, Vector3 direction, AudioClip moveCursorSound = null){
		GameObject currentGameObject = UFE.eventSystem.currentSelectedGameObject;
		GameObject nextGameObject = screen.FindSelectableGameObject(direction);
		
		if (nextGameObject == null){
			nextGameObject = currentGameObject;
		}
		
		if (currentGameObject != nextGameObject){
			if (moveCursorSound != null){
				UFE.PlaySound(moveCursorSound);
			}

			screen.HighlightOption(nextGameObject);
		}
	}

	public static bool SpecialNavigationSystem(
		this UFEScreen screen, 
		IDictionary<InputReferences, InputEvents> player1PreviousInputs,
		IDictionary<InputReferences, InputEvents> player1CurrentInputs,
		IDictionary<InputReferences, InputEvents> player2PreviousInputs,
		IDictionary<InputReferences, InputEvents> player2CurrentInputs,
		MoveCursorCallback moveCursorCallback = null,
		ActionCallback confirmCallback = null,
		ActionCallback cancelCallback = null
	){
		return
			screen.SpecialNavigationSystem(
				player1PreviousInputs,
				player1CurrentInputs, 
				moveCursorCallback, 
				confirmCallback, 
				cancelCallback
			) 
			||
			screen.SpecialNavigationSystem(
				player2PreviousInputs,
				player2PreviousInputs, 
				moveCursorCallback, 
				confirmCallback, 
				cancelCallback
			);
	}

	public static bool SpecialNavigationSystem(
		this UFEScreen screen, 
		IDictionary<InputReferences, InputEvents> previousInputs,
		IDictionary<InputReferences, InputEvents> currentInputs,
		MoveCursorCallback moveCursorCallback,
		ActionCallback confirmCallback,
		ActionCallback cancelCallback
	){
		Fix64 currentHorizontalAxis = 0f;
		Fix64 currentVerticalAxis = 0f;

		bool currentHorizontalButton = false;
		bool currentVerticalButton = false;
		bool currentConfirmButton = false;
		bool currentCancelButton = false;

		foreach (KeyValuePair<InputReferences, InputEvents> pair in currentInputs){
			if (pair.Key.inputType == InputType.HorizontalAxis){
				currentHorizontalAxis = pair.Value.axisRaw;
				currentHorizontalButton = pair.Value.button;
			}else if (pair.Key.inputType == InputType.VerticalAxis){
				currentVerticalAxis = pair.Value.axisRaw;
				currentVerticalButton = pair.Value.button;
			}else{
				if (pair.Key.engineRelatedButton == UFE.config.inputOptions.confirmButton){
					currentConfirmButton = pair.Value.button;
				}
				if (pair.Key.engineRelatedButton == UFE.config.inputOptions.cancelButton){
					currentCancelButton = pair.Value.button;
				}
			}
		}


		bool previousHorizontalButton = false;
		bool previousVerticalButton = false;
		bool previousConfirmButton = false;
		bool previousCancelButton = false;

		foreach (KeyValuePair<InputReferences, InputEvents> pair in previousInputs){
			if (pair.Key.inputType == InputType.HorizontalAxis){
				previousHorizontalButton = pair.Value.button;
			}else if (pair.Key.inputType == InputType.VerticalAxis){
				previousVerticalButton = pair.Value.button;
			}else{
				if (pair.Key.engineRelatedButton == UFE.config.inputOptions.confirmButton){
					previousConfirmButton = pair.Value.button;
				}
				if (pair.Key.engineRelatedButton == UFE.config.inputOptions.cancelButton){
					previousCancelButton = pair.Value.button;
				}
			}
		}

		bool horizontalAxisDown = currentHorizontalButton && !previousHorizontalButton;
		bool verticalAxisDown = currentVerticalButton && !previousVerticalButton;
		bool confirmButtonDown = currentConfirmButton && !previousConfirmButton;
		bool cancelButtonDown = currentCancelButton && !previousCancelButton;

//		UnityEngine.Debug.Log(
//			UFE.currentFrame + " | " + 
//			previousHorizontalButton + " > " + currentHorizontalButton + " | " +
//			previousVerticalButton + " > " + currentVerticalButton
//		);

		if (moveCursorCallback != null && moveCursorCallback.Action != null){
			moveCursorCallback.Action(
				currentHorizontalAxis,
				currentVerticalAxis,
				horizontalAxisDown,
				verticalAxisDown,
				confirmButtonDown,
				cancelButtonDown,
				moveCursorCallback.Sound
			);
		}

		if (confirmButtonDown){
			if (confirmCallback != null && confirmCallback.Action != null){
				confirmCallback.Action(confirmCallback.Sound);
			}
			return true;
		}else if (cancelButtonDown){
			if (cancelCallback != null && cancelCallback.Action != null){
				cancelCallback.Action(cancelCallback.Sound);
			}
			return true;
		}
		return false;
	}

	#endregion

	#region private static methods
	private static void DefaultMoveCursorAction(
		this UFEScreen screen,
		Fix64 horizontalAxis,
		Fix64 verticalAxis,
		bool horizontalAxisDown,
		bool verticalAxisDown,
		bool confirmButtonDown,
		bool cancelButtonDown,
		AudioClip sound
	){
		bool axisDown = horizontalAxisDown || verticalAxisDown;

		//---------------------------------------------------------------------------------------------------------
		// Retrieve the current selected GameObject.
		// If no GameObject is selected and the player press any button, select the first GameObject at the screen.
		//---------------------------------------------------------------------------------------------------------
		GameObject currentGameObject = UFE.eventSystem.currentSelectedGameObject;
		if (currentGameObject == null && axisDown || confirmButtonDown || cancelButtonDown){
			currentGameObject = screen.FindFirstSelectableGameObject();
		}

		//---------------------------------------------------------------------------------------------------------
		// Check if the current Selectable Object is a Slider
		//---------------------------------------------------------------------------------------------------------
		Slider slider = currentGameObject != null ? currentGameObject.GetComponent<Slider>() : null;

		//-----------------------------------------------------------------------------------------------------
		// If the current Selectable Object is a Slider, check if the user has pressed a button
		// in the same direction (horizontal / vertical) than the slider, change the slider value.
		//
		// If the current Selectable Object is not an Slider or if the user hasn't pressed a button
		// in the same direction (horizontal / vertical) than the slider, move the cursor
		//-----------------------------------------------------------------------------------------------------
		if (slider != null){
			if (horizontalAxisDown && slider.direction == Slider.Direction.LeftToRight){
				if (slider.wholeNumbers){
					slider.value += FPMath.Sign(horizontalAxis);
				}else{
					slider.normalizedValue += FPMath.Sign(horizontalAxis)*UFEScreenExtensions.NormalizedSliderSpeed;
				}
			}else if (horizontalAxisDown && slider.direction == Slider.Direction.RightToLeft){
				if (slider.wholeNumbers){
					slider.value -= FPMath.Sign(horizontalAxis);
				}else{
					slider.normalizedValue -= FPMath.Sign(horizontalAxis)*UFEScreenExtensions.NormalizedSliderSpeed;
				}
			}else if (verticalAxisDown && slider.direction == Slider.Direction.BottomToTop){
				if (slider.wholeNumbers){
					slider.value += FPMath.Sign(verticalAxis);
				}else{
					slider.normalizedValue += FPMath.Sign(verticalAxis) * UFEScreenExtensions.NormalizedSliderSpeed;
				}
			}else if (verticalAxisDown && slider.direction==Slider.Direction.TopToBottom){
				if (slider.wholeNumbers){
					slider.value -= FPMath.Sign(verticalAxis);
				}else{
					slider.normalizedValue -= FPMath.Sign(verticalAxis) * UFEScreenExtensions.NormalizedSliderSpeed;
				}
			}else if (axisDown){
				screen.MoveCursor(new Vector3((float)horizontalAxis, (float)verticalAxis), sound);
			}
		}else if (axisDown){
			screen.MoveCursor(new Vector3((float)horizontalAxis, (float)verticalAxis), sound);
		}
	}

	private static void DefaultCancelAction(this Action action, AudioClip sound){
		if (sound != null){
			UFE.PlaySound(sound);
		}
		
		if (action != null){
			action();
		}
	}

	private static void DefaultConfirmAction(this GameObject gameObject, AudioClip sound){
		// Check if the GameObject is defined...
		if (gameObject != null){
			// Check if it's a button...
			Button currentButton = gameObject.GetComponent<Button>();
			if (currentButton != null){
				// In that case, raise the "On Click" event
				if (sound != null){
					UFE.PlaySound(sound);
				}

				if (currentButton.onClick != null){
					currentButton.onClick.Invoke();
				}
			}else{
				// Otherwise, check if it's a toggle...
				Toggle currentToggle = gameObject.GetComponent<Toggle>();
				if (currentToggle != null){
					// In that case, change the state of the toggle...
					if (sound != null){
						UFE.PlaySound(sound);
					}

					currentToggle.isOn = !currentToggle.isOn;
				}
			}
		}
	}

	private static bool HasSelectable(this UFEScreen screen, Selectable selectable){
		if (selectable != null){
			Transform t = selectable.transform;
			UFEScreen s;

			while (t != null){
				s = t.GetComponent<UFEScreen>();

				if (s == screen){
					return true;
				}

				t = t.parent;
			}
		}
		return false;
	}

	private static Selectable FindSelectable(Selectable s, Vector3 dir, IList<Selectable> whiteList){
		if (whiteList == null || whiteList.Count == 0){
			return s.FindSelectable(dir);
		}else{
			dir = dir.normalized;
			Vector3 vector = Quaternion.Inverse (s.transform.rotation) * dir;
			Vector3 vector2 = s.transform.TransformPoint (GetPointOnRectEdge(s.transform as RectTransform, vector));
			float num = float.NegativeInfinity;
			Selectable result = null;

			for (int i = 0; i < Selectable.allSelectablesArray.Length; i++) {
				Selectable selectable = Selectable.allSelectablesArray[i];
				if (selectable != s && selectable != null && whiteList.Contains(selectable)) {
					if (selectable.IsInteractable () && selectable.navigation.mode != Navigation.Mode.None) {
						RectTransform rectTransform = selectable.transform as RectTransform;
						Vector3 vector3 = (!(rectTransform != null)) ? Vector3.zero : new Vector3(rectTransform.rect.center.x, rectTransform.rect.center.y, 0f);
						Vector3 vector4 = selectable.transform.TransformPoint (vector3) - vector2;
						float num2 = Vector3.Dot (dir, vector4);
						if (num2 > 0) {
							float num3 = num2 / vector4.sqrMagnitude;
							if (num3 > num) {
								num = num3;
								result = selectable;
							}
						}
					}
				}
			}
			return result;
		}
	}


	private static Vector3 GetPointOnRectEdge(RectTransform rect, Vector2 dir)
	{
		if (rect == null) {
			return Vector3.zero;
		}
		if (dir != Vector2.zero) {
			dir /= Mathf.Max (Mathf.Abs (dir.x), Mathf.Abs (dir.y));
		}
		dir = rect.rect.center + Vector2.Scale (rect.rect.size, dir * 0.5f);
		return dir;
	}
	#endregion
}
