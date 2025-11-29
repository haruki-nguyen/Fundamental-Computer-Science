#include <stdio.h>

int main()
{
    int a, b;
    char op;

    /* ask user to input: a operator b */
    /* read the input */
    printf("Enter a, operator, b: ");
    scanf("%d %c %d", &a, &op, &b);

    /* if op == '+' → print a + b */
    /* else if op == '-' → print a - b */
    /* else if op == '*' → print a * b */
    /* else if op == '/' → print a / b */
    /* else → print "Unknown operator" */
    if (op == '+')
    {
        printf("Result: %d", a + b);
    }
    else if (op == '-')
    {
        printf("Result: %d", a - b);
    }
    else if (op == '*')
    {
        printf("Result: %d", a * b);
    }
    else if (op == '/')
    {
        printf("Approximate result: %d", a / b);
    }
    else
    {
        printf("Unknown operator");
    }

    return 0;
}