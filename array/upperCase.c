#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    char userText[20];

    printf("Before:");
    scanf("%19s", userText);
    printf("After: ");
    //if lowercase
    for (int i = 0, n = strlen(userText); i < n; i++)
    {
        if (userText[i] >= 'a' && userText[i] <= 'z')
        {
            printf("%c", toupper(userText[i]));
        }
    }
    printf("\n");
    return 0;
}