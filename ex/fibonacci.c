#include <stdio.h>

int sequence(int *n, int *times);

int main(void)
{   
    int *times, *n = 0;

    sequence(&n, &times);

    return 0;
}

int sequence(int *n, int *times)
{   
    (*n = n + n++;)
    if (times < 15)
    {
        return 0;
    }
    sequence(*n, *times )
}
