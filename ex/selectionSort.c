#include <stdio.h>
#include <stdlib.h>

int describleArray(int arrMain[], int arrSize);
int selectionSort(int arrMain[], int arrSize);

int main(void)
{
    int arrMain[10] = {5, 3, 2, 7, 1, 8, 9, 0, 4, 6};
    int times = 0;
    int arrSize = sizeof(arrMain) / sizeof(arrMain[0]);

    printf("Before: \n");
    describleArray(arrMain, arrSize);
    
    printf("After: \n");
    selectionSort(arrMain, arrSize);
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

int selectionSort(int arrMain[], int arrSize)
{
    int trade = 0;
    for (int i = 0; i < arrSize -1 ; i++)
    {
        for (int j = 0; i < arrSize - 1 - i; i++)
        {
            if (arrMain[j] < arrMain[j + 1])
            {
                trade = arrMain[j];
            }
            if(arrMain[i] < trade)
            {
                arrMain[i] = trade;
            }
            
        }
        
    }
    
    return 0;
}
