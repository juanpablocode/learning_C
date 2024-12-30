#include <stdio.h>
#include <stdlib.h>

void describle(int arrMain[], int size);
int bubbleSort (int arrMain[], int *times);

int main(void)
{
    int arrMain[10]= {5, 7, 3, 1, 9, 4, 2, 6, 0, 8};
    int times = 0;

    int size = sizeof(arrMain) / sizeof(arrMain[0]);

    printf("Before:\n");
    describle(arrMain, size);

    printf("After: \n");
    int OnOff = bubbleSort(arrMain, &times);
    return 0;
}

void describle(int arrMain[], int size)
{
    printf("( ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arrMain[i]);
    }
    printf(")\n");
}

int bubbleSort (int arrMain[], int *times)
{
    
    return 0;
}
