#include <stdio.h>

int main(void)
{
    int numbers[100];
    int count = sizeof(numbers) / 4;
    
    for (int i = 0; i < count; i++)
    {
        numbers[i] = i;
        printf("%d \n", numbers[i]);
    }

    return 0;
}