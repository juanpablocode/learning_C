#include <stdio.h>

int triangle_verificator(int x, int y, int z);
int main()
{
    int x, y, z, aws;
    printf("Insert the First side of the tryangle: \n");
    scanf("%5d", &x);
    printf("Insert the second side: \n");
    scanf("%5d", &y);
    printf("Insert the third side\n");   
    scanf("%5d", &z);
    
    aws = triangle_verificator(x, y, z);

    if (aws > 0)
    {
        printf("This is a valid triangle, its sides are %d %d %d \n", x, y, z);
    } else{
        printf("This is not a valid tringle, its sides are %d %d %d\n", x, y, z);
    }
    return 0;
}

int triangle_verificator(int x, int y, int z)
{
    if (x + y  > z && x + z = y && z + y = x)
    {
        return 0;
    } else{
        return 1;
    }
}