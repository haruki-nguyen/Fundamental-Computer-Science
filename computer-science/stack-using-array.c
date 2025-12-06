#include <stdio.h>

#define MAX_SIZE 500 /* number */

int stack[MAX_SIZE];
int top = -1;

void push(int value)
{
    /* check overflow */
    /* top++ */
    /* stack[top] = value */
    if (top == (MAX_SIZE - 1))
    {
        printf("Stack overflow!\n");
        return;
    }

    top++;
    stack[top] = value;
}

int pop()
{
    /* check underflow */
    /* return stack[top--] */
    if (top == -1)
    {
        printf("Stack underflow!\n");
        // return -1 because pop() need a fallback value of int
        return -1;
    }

    return stack[top--];
}

int main()
{
    /* call push(...) */
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    push(6);
    /* call pop(...) */
    for (size_t i = 0; i < 2; i++)
    {
        printf("Popped a value: %d\n", pop());
    }

    return 0;
}