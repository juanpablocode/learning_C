#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    /*char answer[15];
    printf("Input:\n");
    scanf("%s", answer);*/
    for (int i = 0; i < argc; i++)
    {
        printf("print %s \n", argv[i]);
    }

    return 0;
}