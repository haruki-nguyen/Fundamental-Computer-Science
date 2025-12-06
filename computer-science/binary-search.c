#include <stdio.h>

int binarySearch(int arr[], int left, int right, int key)
{
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (arr[mid] == key)
            return mid;
        if (arr[mid] < key)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1;
}

int main()
{
    int arr[] = {1, 2, 3, 5, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 5;
    int result = binarySearch(arr, 0, n - 1, key);
    if (result != -1)
        printf("Found at index %d\n", result);
    else
        printf("Not found\n");
    return 0;
}