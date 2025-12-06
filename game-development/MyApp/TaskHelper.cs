using System;
using System.Collections.Generic;

delegate void Notify(string message);

class TaskManager
{
    public event Notify? OnTaskAdded;
    public List<string> Tasks = new List<string>();

    public void AddTask(string task)
    {
        Tasks.Add(task);
        OnTaskAdded?.Invoke("Task added: " + task);
    }
}
