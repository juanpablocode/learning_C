#include <stdio.h>
#include <string.h>

int main(void)
{
    int ramdom_num[10] = {8, 10, 7, 4, 1, 3, 2, 6, 9, 5};
    int solved_num[10] = {0};
    int count = sizeof(ramdom_num) / 4;
    int holder, place, p, j = 0;
    while (j < count)
    {
    
        for (int i = 0; i < count; i++)
        {
            if (i == 0)
            {
                holder = ramdom_num[j];
            }
            if (holder < ramdom_num[i])
            {
                p++;
            }

        }
        place = (count - p) - 1;
        solved_num[place] = holder;
        p = 0;
        j++;

    }
    
    for (int i = 0; i < count; i++)
    {
        printf("%d ", solved_num[i]);
    }
    printf("\n");
    
    
    return 0;
}