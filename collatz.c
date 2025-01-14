#include <stdio.h>
#include <stdlib.h>

int sequence(int n);

int main(void)
{   
    int n = 0;
    char input[3];

    printf("Enter a positive integer:\n ");
    scanf("%d", &n);
    //user_input = atoi(input);

    if (n > 0)
    {
        int steps = sequence(n);
        printf("\n Number of steps %d \n", steps);
    }else{
        printf("Please, enter with positive numbers. \n");
    }
    
    return 0;
}

int sequence(int n)
{   
    if ( n == 1)
    {
        return 0;
    }else if((n % 2) == 0)
    {
        printf("%d, ", n);
        return 1 + sequence(n/2);
    }else {
        printf("%d", n);
        return 1 + sequence(3*n + 1);
    }

}
