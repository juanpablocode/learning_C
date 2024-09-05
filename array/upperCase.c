#include <stdio.h>
#include <string.h>

int main(void)
{
    char userText[20];

    printf("Before:");
    scanf("%19s", userText);
    printf("After: ");

    for (int i = 0, n = strlen(userText); i < n; i++)
    {
        if (userText[i] >= 'a' && userText[i] <= 'z')
        {
            printf("%c", userText[i] - 32);
            
        } else {
            printf("%c", userText[i]);
        }
    }
    printf("\n");
    return 0;
}