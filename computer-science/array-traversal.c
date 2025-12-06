#include <stdio.h>

int main()
{
    /* fill arr[...] with some values */
    int arr[6 /* size */] = {1, 2, 3, 4, 5, 6};

    for (int i = 0; i < 6 /* size */; i++)
    {
        printf("%d\n", arr[i]);
    }

    return 0;
}