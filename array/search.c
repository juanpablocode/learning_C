#include <stdio.h>

int main(void)
{
    int notes[6] = {10, 20, 30, 40, 50, 60};
    int count = sizeof(notes) / 4;



    for (int i = 0; i < count; i++)
    {
        if (notes[i] == 50)
        {
            printf("\n%d Founded! after %d attempts\n", notes[i], i+1);
            return 0;
        }else{
            printf("%d ", notes[i]);
        }
    }
    
    return 0;
}