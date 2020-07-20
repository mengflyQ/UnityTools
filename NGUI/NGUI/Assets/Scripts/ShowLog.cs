using UnityEngine;

public class ShowLog : MonoBehaviour
{
    public void Print()
    {
        Debug.Log(this.gameObject.name);
    }
}