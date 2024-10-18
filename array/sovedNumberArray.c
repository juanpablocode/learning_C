#include <stdio.h>
#include <string.h>

int main(void)
{
    int ramdom_num[10] = {10, 8, 7, 4, 1, 3, 2, 6, 9, 5};
    int solved_num[10];
    int count = sizeof(ramdom_num) / 4;
    
    for (int i = 0; i < count; i++)
    {
        printf("Working %d\n", i);
    }

    for (int i = 0; i < count; i++)
    {
        printf("%d, ", solved_num[i]);
    }
    
    
    return 0;
}