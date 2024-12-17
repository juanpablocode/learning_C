#include <stdio.h>
#include <stdlib.h>

int deskArray(int count, int arrayMain[]);

int binarySrc();

int main(void)
{
    char user_input[3];
    int user_choice, count, times = 0;
    int arrayMain[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int arrayRight[10], arrayLeft[10];
  
    count = sizeof(arrayMain)/sizeof(arrayMain[0]);
    
    deskArray(count, arrayMain);
    
    printf("What number you are looking for\n");
    scanf("%2s", user_input);
    user_choice = atoi(user_input);
  
    
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

int binarySrc()
{
  
  return 0;
}
