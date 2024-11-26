#include <stdio.h>
#include <stdlib.h>

int fun_looking(int user_num, int num[], int *times, int count);

int main(void)
{
    char user_input[8];
    int num[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int user_num, founded = 0, times = 0;

    printf("Insert a input for looking:\n");
    scanf("%2s", user_input);
    user_num = atoi(user_input);

    int count = sizeof(num) / sizeof(num[0]);
    founded = fun_looking(user_num, num, &times, count);

    if (founded == 0)
    {
        printf("The value %d was founded after %d attemps\n", user_num, times);
    }else {
        printf("The value %d wasn't founded\n", user_num);
        printf("Tried for %d times\n", times);
        return 1;
    }
    
    return 0;
}

int fun_looking(int user_num, int num[], int *times, int count)
{
    for (int i = 0; i < count; i++)
    {
        if (num[i] == user_num)
        {
            printf("Founded!\n");
            return 0;
        } else{
            (*times)++;
        }
    }
    return 1;
}
