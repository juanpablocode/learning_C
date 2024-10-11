#include <stdio.h>

void add_int();
void add_array();

int main()
{
    int a = 10;
    int b[4] = {0, 1, 2, 3};
    
    add_int(a);
    add_array(b);

    printf("%d, %d \n", a, b[0]);
    return 0;
}

void add_int (int *x)
{
    x = 22;
}

void add_array(int array[4])
{
    array[0] = 22;
}