#include <stdio.h>
#include <stdlib.h>

void describe(int arrMain[], int size);
int bubbleSort (int arrMain[], int *times, int size);

int main(void)
{
    int arrMain[10]= {5, 7, 3, 1, 9, 4, 2, 6, 0, 8};
    int times = 0;

    int size = sizeof(arrMain) / sizeof(arrMain[0]);

    printf("Before:\n");
    describe(arrMain, size);

    printf("After: \n");
    bubbleSort(arrMain, &times, size);
    describe(arrMain, size);

    printf("Number of iterctions %d\n", times);
    return 0;
}

void describe(int arrMain[], int size)
{
    printf("( ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arrMain[i]);
    }
    printf(")\n");
}

int bubbleSort (int arrMain[], int *times, int size)
{   
    int trade = 1;

    for (int i = 0; i < size -1; i++)
    {
        trade = 0;

        for (int j = 0; j < size - 1 - i; j++)
        {
            if (arrMain[j] > arrMain[j + 1])
            {
                int temp = arrMain[j];
                arrMain[j] = arrMain[j+1];
                arrMain[j+1] = temp;
                trade = 1;
            }
            
        }
        
        (*times)++;
        if (trade == 0)
        {
            break;
        }
        
    }
    return 0;
}
