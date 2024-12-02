#include <stdio.h>
#include <stdlib.h>

int fun_search(int num[], int count, int user_num, int *times, int *founded);

int main(void)
{
    char user_input[4];
    int num[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int user_num, founded, times = 0;

    printf("Insert the num for searching:\n");
    scanf("%2s", user_input);
    user_num = atoi(user_input);

    int count = sizeof(num)/sizeof(num[0]);
    fun_search(num, count, user_num, &times, &founded);

    if(founded == 0)
    {
        printf("The value %d was founded after %d attemps\n", user_num, times);
        
    }else{
        printf("The value %d wasn't founded\n", user_num);
        printf("We tried for %d times.\n", times);
    }

    return 0;
}

int fun_search(int num[], int count, int user_num, int *times, int *founded)
{
    for (int i = 0; i < count; i++)
    {
        (*times)++;
        if (num[i] == user_num)
        {
            printf("Founded! \n");
            (*founded) = 0;
            return 0;
        }
    }
    (*founded) = 1;
    return 0;
}
