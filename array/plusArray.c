#include <stdio.h>
#include <string.h>

int main(int argv, char* argc[])
{
    int nuList[5] = {1, 2, 3, 4, 5};
    int count = sizeof(nuList) / sizeof(*nuList);
    printf("Elementos do Array ");
    for (int i = 0; i < count; i++)
    {
        printf("%d ", nuList[i]);
    }
    printf("\n");
    return 0;
}