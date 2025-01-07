#include <stdio.h>
#include <stdlib.h>

int describleArray(int arrMain[], int arrSize);
int selectionSort(int arrMain[], int *times, int arrSize);

int main(void)
{
    int arrMain[10] = {5, 3, 2, 7, 1, 8, 9, 0, 4, 6};
    int times = 0;
    int arrSize = sizeof(arrMain) / sizeof(arrMain[0]);

    printf("Before: \n");
    describleArray(arrMain, arrSize);
    
    printf("After: \n");
    selectionSort(arrMain, &times, arrSize);
    describleArray(arrMain, arrSize);
    return 0;
}

int describleArray(int arrMain[], int arrSize)
{
    printf("(");
    for (int i = 0; i < arrSize; i++)
    {
        printf("%d ", arrMain[i]);
    }
    printf(")\n");
    
    return 0;
}
int selectionSort(int arrMain[], int *times, int arrSize)
{
    for (int i = 0; i < arrSize - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < arrSize; j++)
        {
            if (arrMain[j] < arrMain[minIndex])
            {
                minIndex = j;
            }
        }
        // Swap the found minimum element with the first element
        int temp = arrMain[minIndex];
        arrMain[minIndex] = arrMain[i];
        arrMain[i] = temp;
    }
    
    return 0;
}
