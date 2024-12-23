#include <stdio.h>
#include <stdlib.h>

int deskArray(int count, int arrayMain[]);

int banarySrc(int arrayMain[], int user_choice, int length, int *times);

//int getArrSize(int arrayMain[], int arraySize[], int user_choice);

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
    //int arraySize[10];
    //getArrSize(arrayMain, arraySize, user_choice);
    int arrayRight[10], arrayLeft[10];
    int middle = (length / 2);
    
    if (user_choice == arrayMain[middle])
    {
        printf("Founded %d !/n after 1 attempts\n", user_choice);
    } else if(user_choice < middle)
    {
        for (int i = 0; i < middle; i++)
        {
            arrayLeft[i] = arrayMain[i];    
        }
    } else if (user_choice > middle)
    {
        for (int i = length; i > middle; i--)
        {
            arrayRight[i] = arrayMain[i];
        }

    }

    /*for (int i = middle; i < 0; i--)
    {
        if (arrayLeft[i] == user_choice)
        {
            printf("Founded %d!\n", user_choice);
            return 0;
        }
        
    }*/

    return 0;
}

/*int getArrSize(int arrayMain[], int arraySize[], int user_choice)
