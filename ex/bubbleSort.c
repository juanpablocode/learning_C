#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int arrMain[10]= {5, 7, 3, 1, 9, 4, 2, 6, 0, 8};
    int userChoice, times = 0;

    printf("Before:\n");
    descible(arrMain);

    printf("After: \n");
    int OnOff = bubbleShort(arrMain, &times);

    
    return 0;
}
