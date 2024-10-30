#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    if(argc < 2)
    {
        printf("Usage %s <number>\n", argv[0]);
        return 1;
    }
    
    int fac_num = atoi(argv[1]);
    int count = fac_num;
    int num_size[count];

    if(fac_num == 0)
    {
        printf("Factorial of 0! = 1\n");
        return 0;
    }else if(fac_num == 1)
    {
        printf("Factorial of 1! = 1\n");
        return 0;
    }
    
    for(int i = 0; i < count; i++)
    {
        if (i >= 1)
        {
            num_size[i] = fac_num - i;
        }else{
            num_size[i] = 0;
        }
    }

    printf("Factorial of %d! = ");
    for(int i = 0; i < count; i++)
        {
            if (i >= 1)
            {
                printf("%d! ", num_size[i]);
                if( i + 1 < count)
                { 
                    printf(", ");
                }else{
                    printf("\n");
                }
            }
        }
    return 0;
}
