#include <stdio.h>
#include <string.h>

int main()
{
    char userText[20];
    printf("Before:\n");
    scanf("%s", userText);
    printf("After: ");
    for (int i = 0, n = strlen(userText); i < n; i++)
    {
        if (userText[i] >= 'a' && userText[i] <= 'z')
        {
            printf("%c", userText[i] - 32);
        } else {
            printf("%c", userText[i]);
        }
        /*if (userText <= 'A' && userText >= 'z')
        {
            printf("%c", userText[i] - 32);
        }*/
    }
    printf("\n");

    return 0;
}