#include <stdio.h>
#include <string.h>

int stringLenght(char* s);

int main(void)
{
    char name[5];
    int lenght;
    printf("Name: \n");
    scanf("%4s", &name);
    lenght = stringLenght(name);
    printf("Number of charters %d\n", lenght);
    return 0;
}

int stringLenght(char* s)
{
    int i;
    while (s[i] != '\0')
    {
        i++;
    }
    return i;
}