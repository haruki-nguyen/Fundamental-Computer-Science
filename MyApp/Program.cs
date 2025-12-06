using System;

class Program
{
    static void Main()
    {
        // Use TaskManager
        TaskManager tm = new TaskManager();
        tm.OnTaskAdded += Console.WriteLine;
        tm.AddTask("Task 1");
        tm.AddTask("Task 2");

        Console.WriteLine("All Tasks:");
        foreach (var t in tm.Tasks)
            Console.WriteLine(t);

        // Use StudentManager
        StudentManager sm = new StudentManager();
        sm.AddStudent("One", 1);
        sm.AddStudent("Two", 2);
        sm.UpdateGrade("Two", 22);

        Console.WriteLine("All Students:");
        sm.DisplayAll();
    }
}
