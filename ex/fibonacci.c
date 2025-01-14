#include <stdio.h>

int fibonacci(int lenght);

int main(void)
{
    int n = 0;
    
    printf("How many numbers would you like to view?\n");
    scanf("%2d", &n);
    
    fibonacci(n);

    return 0;
}

int fibonacci(int lenght)
{
    int j = 0;
    printf("( 0 ");
    for (int i = 0; i < lenght; i++)
    {
        printf("%d ", (j + j++));
    }
    printf(") ");
    
    return 0;
}
