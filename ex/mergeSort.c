#include <stdio.h>

void show(int n[], int lenght);
void sort(int arrMain[], int left, int right);
void merge(int arrMain[], int left, int mid, int right);

int main(void)
{
    int arrMain[10] = {9, 8, 5, 7, 6, 4, 3, 0, 2, 1};
    int lenght = sizeof(arrMain) / sizeof(arrMain[0]);

    printf("After: \n");
    show(arrMain, lenght);

    printf("Before: \n");
    sort(arrMain, 0, lenght -1);
    show(arrMain, lenght);

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

void sort(int arrMain[], int left, int right)
{
    if (left < right)
    {
        int mid = left + (right - left) / 2;
        sort(arrMain, left, mid);
        sort(arrMain, mid + 1, right);

        merge(arrMain, left, mid, right);
    }

}

void merge(int arrMain[], int left, int mid, int right)
{
    int n1 = mid - left + 1;
    int n2 = right - mid;

    int L[n1], R[n2];

    for (int i = 0; i < n1; i++)
    {
        L[i] = arrMain[left + i];
    }
    for (int j = 0; j < n2; j++)
    {
        R[j] = arrMain[mid + 1 + j];
    }
    int i = 0, j = 0, k = left;

    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arrMain[k] = L[i];
            i++;
        } else {
            arrMain[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1)
    {
        arrMain[k] = L[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        arrMain[k] = R[j];
        j++;
        k++;
    }
        
}
