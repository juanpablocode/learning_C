#include <stdio.h>
#include <string.h>

int main()
{
    char userName[15];
    printf("Insert a name: ");
    scanf("%14s", userName);
    int height = strlen(userName);
    for (int i = 0; i < strlen(userName); i++)
    {
        printf("%c", userName[i]);
    }
    printf("\n");
    return 0;
}
