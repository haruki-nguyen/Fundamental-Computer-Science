#include <stdio.h>

/* write a function that returns a + b */
/* return_type functionName(parameters) {
       ...
   }
*/
int doSum(int a, int b)
{
    return a + b;
}

/* write a function that prints "Even" or "Odd" */
/* it takes an integer as input */
void evenOrOdd(int a)
{
    if (a % 2 == 0)
    {
        printf("%d is even\n", a);
    }
    else
    {
        printf("%d is odd\n", a);
    }
}

int main()
{
    int x, y;

    /* ask user for x and y */
    /* read input */
    printf("Enter x and y: ");
    scanf("%d %d", &x, &y);

    /* call your add function */
    /* print the result */
    int result = doSum(x, y);
    printf("Sum is: %d\n", result);

    /* call your even/odd check function using x */
    /* call it again using y */
    evenOrOdd(x);
    evenOrOdd(y);

    return 0;
}