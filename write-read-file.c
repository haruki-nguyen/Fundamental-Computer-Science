#include <stdio.h>

int main()
{
    /* --------------------
       Write to file
       -------------------- */
    FILE *fw = fopen("output.txt", "w");
    if (fw == NULL)
    {
        // Handle error
        return 1;
    }

    // Write name and age to file
    fputs("My name is Duy, I'm 22 years old.", fw);

    fclose(fw);

    /* --------------------
       Read from file
       -------------------- */
    FILE *fr = fopen("output.txt", "r");
    if (fr == NULL)
    {
        // Handle error
        return 1;
    }

    // Read file content and print it
    char line[100];
    fgets(line, 100, fr);
    printf("Read file: %s", line);

    fclose(fr);

    return 0;
}