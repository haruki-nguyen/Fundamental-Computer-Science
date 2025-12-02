#include <stdio.h>

#define MAX_SIZE 500 /* number */

int queue[MAX_SIZE];
int front = 0;
int rear = 0;

void enqueue(int value)
{
    /* check overflow */
    /* queue[rear] = value */
    /* update rear */
    if (rear == MAX_SIZE)
    {
        printf("Queue overflow!");
        return;
    }
    queue[rear] = value;
    rear++;
}

int dequeue()
{
    /* check underflow */
    /* return queue[front] */
    /* update front */
    if (front == rear)
    {
        printf("Queue underflow!");
        return -1;
    }
    return queue[front++];
}

int main()
{
    /* call enqueue(...) */
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    enqueue(5);
    enqueue(6);
    /* call dequeue(...) */
    for (size_t i = 0; i < 2; i++)
    {
        printf("Dequeue a value: %d\n", dequeue());
    }
    return 0;
}