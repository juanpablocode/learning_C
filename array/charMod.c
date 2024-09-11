#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[])
{
    char show_userText[20];

    printf("Insert a Phase:\n");
    scanf("%20s", show_userText);
    printf("Your phase: ");
    for (int i = 0, count = strlen(show_userText); i < count; i++)
    {
        printf("%c", show_userText[i]);
    }
    printf("\n");
    return 0;
}