#include <stdio.h>

int main(int argc, char* argv[])
{
    int x, y;
    printf("Insert a value for X: \n");
    scanf("%5d", &x);
    printf("Insert a value for Y: \n");
    scanf("%5d", &y);
    printf("The sum of %d + %d is iguals to %d \n", x, y, (x+y));
    return 0;
}