#include <stdio.h>

int main(int argc, char* argv[])
{
    int fac_num, count = 0;
    fac_num = argv[1];
    count = fac_num;
    int num_size[count];

    if(argv[1] == 0)
    {
        printf("Factorial of 0! = 1\n");
    }else if(argv[1] == 1)
    {
        printf("Factorial of 1! = 1\n");
    }

    for(int i = count; i < 0; i--)
        {
            num_size[i] = fac_num - i;
        }

    printf("Factorial of %d! = ");
    for(int i = 0; i < count; i++)
        {
            printf("%d ", num_size[i]);
            if( i + 1 < count)
            { 
                printf(".\n");
            }else{
                printf("x ");
            }
        }
    return 0;
}
