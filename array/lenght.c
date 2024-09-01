#include <stdio.h>
#include <string.h>

int stringLenght();

int main(void)
{
    char name[5];
    int lenght;
    printf("Name: \n");
    scanf("%4s", &name);
    lenght = stringLenght(name[5]);
    printf("Number of charters %d\n", lenght);
    return 0;
}

int stringLenght(char name[5])
{
    int i;
    while (name[i] != '\0')
    {
        i++;
    }
    return i;
}