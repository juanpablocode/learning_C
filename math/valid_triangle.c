#include <stdio.h>

int triangle_verificator(int x, int y, int z);
int main()
{
    int x, y, z;
    printf("Insert the First side of the tryangle: \n");
    scanf("%5d", &x);
    printf("Insert the second side: \n");
    scanf("%5d", &y);
    printf("Insert the third side");   
    scanf("%5d", &z);
    printf("It's a valid triangle, and its area is %d \n", (x+y+z));
    return 0;
}