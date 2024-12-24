#include <stdio.h>
#include <stdlib.h>

int deskArray(int count, int arrayMain[]);
int banarySrc(int arrayMain[], int user_choice, int length, int *times);

int main(void)    
{
    char user_input[3];   
    int user_choice, length, times = 0;
    int arrayMain[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    length = sizeof(arrayMain)/sizeof(arrayMain[0]);
    
    deskArray(length, arrayMain);
    
    printf("What number you are looking for?\n");
    scanf("%2s", user_input);
    user_choice = atoi(user_input);
    
    banarySrc(arrayMain, user_choice, length, &times);
    
    return 0;
}

int deskArray(int count, int arrayMain[])    
{
    printf("Your List\n");   
    printf("( ");
    
    for(int i = 0; i < count; i++)
    {
            printf("%d ", arrayMain[i]);
    }
    
    printf(" )\n");
    
    return 0;
}

int banarySrc(int arrayMain[], int user_choice, int length, int *times)    
{
    int middle;
    
    while (length > 0)   
    {
        middle = (length / 2);
        (*times)++;
    
        if (arrayMain[middle] == user_choice)
        {
            printf("Founded %d !/n after %d attempts\n", user_choice, *times);
            return 0;
            
        }else if(arrayMain[middle] < user_choice)
        {
            arrayMain = arrayMain + middle +1;
            length = length + middle +1;
        }else
        {
            length = middle;
        }
    }
printf("Not founded!\n After %d attempts\n", *times);
return 1;
}
