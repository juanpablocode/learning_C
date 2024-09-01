#include <stdio.h>
#include <string.h>

int main()
{
    char name[5];
    int i;
    printf("Name: \n");
    scanf("%s", &name);

    while (name[i] != "\0")
    {
        i++;
    }
    
    return 0;
}