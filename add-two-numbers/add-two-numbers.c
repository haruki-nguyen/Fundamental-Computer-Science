#include <stdio.h> // Needed for input/output

int main()
{
    // 1. Declare two integer variables
    int num1, num2;

    // 2. Ask the user to enter the first number
    printf("Enter the first number: ");
    scanf("%d", &num1); // Store the input in num1

    // 3. Ask the user to enter the second number
    printf("Enter the second number: ");
    scanf("%d", &num2); // Store the input in num2

    // 4. Calculate the sum (fill this part)
    int sum = num1 + num2; // <-- replace 0 with calculation

    // 5. Print the result
    printf("The sum is: %d\n", sum);

    return 0; // Program ends
}
