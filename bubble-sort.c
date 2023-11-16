#include <stdio.h>

void bubbleSort(int arr[], int size);

int main(void)
{
    int numElements;
    printf("Type how many elements the array will have: ");
    scanf("%i", &numElements);
    
    printf("\n");
    
    int unsortedArray[numElements];
    for (int i = 0; i < numElements; i++)
    {
        printf("Type the value %i: ", (i + 1));
        scanf("%i", &unsortedArray[i]);
    }
    
    bubbleSort(unsortedArray, numElements);
    
    printf("\nSorted array:\n");
    for (int i = 0; i < numElements; i++)
    {
        printf("%i", unsortedArray[i]);
        if (i < (numElements - 1))
        {
            printf(" ");
        }
    }
    printf("\n");
}

void bubbleSort(int arr[], int size)
{
    for (int i = 0; i < (size - 1); i++)
    {
        for (int j = 0; j < (size - i - 1); j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
}
