#include <stdio.h>
#include <stdlib.h>

/* ----------------------------
   IntArray
   ---------------------------- */

struct IntArray
{
    int *data;
    int size;
    int capacity;
};

void initArray(struct IntArray *arr, int capacity)
{
    arr->data = malloc(sizeof(int) * capacity); // Allocate memory
    arr->size = 0;                              // No elements yet
    arr->capacity = capacity;
    printf("Array initialized.\n");
}

void push(struct IntArray *arr, int value)
{
    if (arr->size == arr->capacity)
    {
        // Allocate more space
        int newCapacity = arr->capacity * 2;
        arr->data = realloc(arr->data, sizeof(int) * newCapacity);
        arr->capacity = newCapacity;
        printf("Allocated more memory.\n");
    }

    arr->data[arr->size] = value;
    arr->size += 1;
}

void printArray(struct IntArray *arr)
{
    for (size_t i = 0; i < arr->size; i++)
    {
        printf("Array's data: %d\n", arr->data[i]);
    }
}

/* ----------------------------
   Vector2
   ---------------------------- */

struct Vector2
{
    float x;
    float y;
};

struct Vector2 addVec(struct Vector2 a, struct Vector2 b)
{
    struct Vector2 result;

    result.x = a.x + b.x;
    result.y = a.y + b.y;

    return result;
}

void scaleVec(struct Vector2 *v, float s)
{
    v->x *= s;
    v->y *= s;
}

/* ----------------------------
   Main
   ---------------------------- */

int main()
{
    // Test IntArray
    struct IntArray arr;
    initArray(&arr, 3);

    push(&arr, 1);
    push(&arr, 2);
    push(&arr, 3);
    push(&arr, 4);

    printArray(&arr);

    // Test Vector2
    struct Vector2 a;
    struct Vector2 b;

    a.x = 1.0f;
    a.y = 1.0f;

    b.x = 2.0f;
    b.y = 2.0f;

    struct Vector2 c;
    c = addVec(a, b);

    printf("Additional vector: %2.0f %2.0f\n", c.x, c.y);

    scaleVec(&c, 2);
    printf("Scaled vector: %2.0f %2.0f\n", c.x, c.y);

    return 0;
}