#include <stdio.h>
#include <stlib.h>

int binarySrc();

int main(void)
{
    char user_input[3];
    int user_choice, count, times = 0;
    int arrayMain[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int arrayRight[10], arrayLeft[10];
  
    count = sizeof(arrayMain)/sizeof(arrayMain[0]);
    
    deskArray(count);
    
    scanf("%2s", user_input);
    printf("What number you are looking for\n");
    user_choice = atoi(user_input);
  
    return 0;
}

int deskArray()
{
    printf("Your List\n");
    printf("( \n");
    for(i = 0; i < count; i++);
        {
          printf("%d "arrayMain[i]);
        }
    printf(" )\n");
  
    return 0;
}

int binarySrc()
{
  
  return 0;
}
