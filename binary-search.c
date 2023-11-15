#include <stdio.h>

int binarySearch(int target, int middle, int arr[]);

int main(void)
{
    int target;
    printf("Type a value to be searched: ");
    scanf("%i", &target);
    
    int sortedArray[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30};
    int arraySize = sizeof(sortedArray) / sizeof(int);
    
    if (target < sortedArray[0] || target > sortedArray[arraySize - 1])
    {
        printf("The value %i is not contained in the array\n", target);
    }
    else
    {
        int middle = arraySize / 2;
        int result = binarySearch(target, middle, sortedArray);
        
        if (result == 0)
        {
            printf("The value %i is contained in the array\n", target);
        }
    }
}

int binarySearch(int middle, int target, int arr[])
{
    static int x = 0;
    
    x /= 2;
    if (target == arr[middle])
    {
        return 0;
    }
    else if (target > arr[middle])
    {
        if (x < 1)
        {
            x = 1;
        }
        middle += x;
        return binarySearch(target, middle, arr);
    }
    else if (target < arr[middle])
    {
        middle /= 2;
        return binarySearch(target, middle, arr);
    }

    return 1;
}
