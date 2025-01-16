#include <stdio.h>

void show(int n[], int lenght);
void mergeSort(int arrMain, int lenght);

int main(void)
{
    int arrMain[10] = {9, 8, 5, 7, 6, 4, 3, 0, 2, 1};
    int lenght = sizeof(arrMain) / sizeof(arrMain[0]);

    printf("After: \n");
    show(arrMain, lenght);

    printf("Before: \n");
    mergeSort(arrMain, lenght);

    return 0;
}

void show(int n[], int lenght)
{
    printf("( ");
    for (int i = 0; i < lenght; i++)
    {
        printf("%d ", n[i]);
    }
    printf(")\n");
}

void mergeSort(int arrMain, int lenght)
{
    for (int i = 0; i < lenght; i++)
    {
        /* code */
    }
    
}
