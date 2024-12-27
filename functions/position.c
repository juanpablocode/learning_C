#include <stdio.h>

int modify(int **array[]);

int main(void)
{
    int array[7] = {0, 1, 2, 100, 4, 5};
    int t = 3;
    modify(array);

    printf("%d", array[t]);

    return 0;
}

int modify(int **array[])
{
    int userInput;
    printf("For Witch number you whant to trade for ?\n");
    scanf("%2d", userInput);

    **array[0] = userInput;

    printf("indice atual = %d\n", array[0]);

    return 0;
}
