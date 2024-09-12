#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[])
{

    for (int i = 0, count = strlen(argv); i < count; i++)
    {
        printf("argv[%i] is %s \n", argv[i]);
    }
    return 0;
}