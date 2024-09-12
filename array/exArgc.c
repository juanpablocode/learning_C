#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main (int argc, char* argv[])
{
    if (argc != 2)
    {
        printf("Usando ./exArgc.c\n");
        return 1;
    }
    
    int height = atoi(argv[1]);
    return 0;
}