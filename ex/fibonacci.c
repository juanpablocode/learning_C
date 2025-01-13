#include <stdio.h>

int sequence(int n);

int main(void)
{   
    int times, n = 0;

    sequence(n);

    return 0;
}

int sequence(int n)
{   
    if ( n == 1)
    {
        return 0;
    }else if((n % 2) == 0)
    {
        return 1 + sequence(n/2);
    }else {
        return 1 + sequence(3*n + 1);
    }

}
