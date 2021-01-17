using UnityEngine;
using System.Collections;

public class GridStageSelectionScreen : StageSelectionScreen {
	#region public instance properties
	public int numberOfRows{
		get{
			int totalStages = UFE.config.stages.Length;
			int rows = totalStages / this.stagesPerRow;
			
			if (totalStages % this.stagesPerRow != 0){
				++rows;
			}
			
			return rows;
		}
	}
	#endregion

	#region public instance properties
	public AudioClip moveCursorSound;
	public int stagesPerRow = 4;
	#endregion

	#region public instance methods
	public virtual void MoveCursorDown(){
		// Retrieve the row and column of the stage
		int currentRow = this.stageHoverIndex / this.stagesPerRow;
		int currentColumn = this.stageHoverIndex % this.stagesPerRow;
		
		// Move the cursor to the left
		currentRow = (currentRow + 1) % this.numberOfRows;
		
		// Finally, update the position of the cursor
		this.MoveCursor(currentRow * this.stagesPerRow + currentColumn);
	}
	
	public virtual void MoveCursorLeft(){
		// Retrieve the row and column of the stage
		int currentRow = this.stageHoverIndex / this.stagesPerRow;
		int currentColumn = this.stageHoverIndex % this.stagesPerRow;
		
		// Move the cursor to the left
		currentColumn = (currentColumn + this.stagesPerRow - 1) % this.stagesPerRow;
		
		// Finally, update the position of the cursor
		this.MoveCursor(currentRow * this.stagesPerRow + currentColumn);
	}
	
	public virtual void MoveCursorRight(){
		// Retrieve the row and column of the stage
		int currentRow = this.stageHoverIndex / this.stagesPerRow;
		int currentColumn = this.stageHoverIndex % this.stagesPerRow;
		
		// Move the cursor to the left
		currentColumn = (currentColumn + 1) % this.stagesPerRow;
		
		// Finally, update the position of the cursor
		this.MoveCursor(currentRow * this.stagesPerRow + currentColumn);
	}
	
	public virtual void MoveCursorUp(){
		// Retrieve the row and column of the stage
		int currentRow = this.stageHoverIndex / this.stagesPerRow;
		int currentColumn = this.stageHoverIndex % this.stagesPerRow;
		
		// Move the cursor to the left
		currentRow = (currentRow + this.numberOfRows - 1) % this.numberOfRows;
		
		// Finally, update the position of the cursor
		this.MoveCursor(currentRow * this.stagesPerRow + currentColumn);
	}
	#endregion
	
	#region protected instance methods
	protected virtual void MoveCursor(int characterIndex){
		if (this.moveCursorSound != null) UFE.PlaySound(this.moveCursorSound);
		this.stageHoverIndex = characterIndex;
	}
	#endregion
}
