#include <stdio.h>

struct Student
{
    char name[20];
    int score;
};

void addBonus(struct Student *s)
{
    // increase score by 5
    s->score += 5;
}

struct Student *findTopStudent(struct Student *arr, int size)
{
    // return pointer to the student with highest score
    struct Student *top = arr;

    for (size_t i = 0; i < size; i++)
    {
        if (arr[i].score > top->score)
        {
            top = &arr[i];
        }
    }

    return top;
}

int main()
{
    struct Student students[3] = {
        {"Alice", 70},
        {"Bob", 65},
        {"Carol", 80}};

    struct Student *p = students; // Create a pointer p that points to the first struct in the array

    // use pointers to loop through the array
    for (size_t i = 0; i < 3; i++)
    {
        // call addBonus for each student
        printf("Old results: %s %d\n", students[i].name, students[i].score);
        addBonus(p);
        p++;
    }

    // call findTopStudent and store the result
    struct Student *topStudent = findTopStudent(students, 3);
    printf("Top student: %s %d\n", topStudent->name, topStudent->score);

    // print updated results
    for (size_t i = 0; i < 3; i++)
    {
        printf("Updated results: %s %d\n", students[i].name, students[i].score);
    }

    return 0;
}