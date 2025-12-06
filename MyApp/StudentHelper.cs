using System;
using System.Collections.Generic;

class Student
{
    public string name;
    public int grade;
}

class StudentManager
{
    public List<Student> Students = new List<Student>();

    public void AddStudent(string name, int grade)
    {
        Students.Add(new Student { name = name, grade = grade });
    }

    public void UpdateGrade(string name, int newGrade)
    {
        foreach (var student in Students)
        {
            if (student.name == name) student.grade = newGrade;
        }
    }

    public void DisplayAll()
    {
        foreach (var student in Students)
        {
            Console.WriteLine($"Name: {student.name}, Grade: {student.grade}");
        }
    }
}
