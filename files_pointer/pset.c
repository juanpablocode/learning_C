#include <stdio.h>

int main(void)
{
    int Score = 0;
    int* pScore = &Score;
    int Heart = 5;
    int* pHeart = &Heart;
    int choice, n1 = 1;

    while (*pHeart < 0)
    {
        printf("How much is 50 + 50 ?\n");
        scanf("%i", &n1);
        if (n1 = (50 + 50))
        {
            *pScore = 10;
        }else{
            *pScore = -10;
            *pHeart = -1;
        }
        
        printf("How much is 13 + 5 ?\n");
        scanf("%i", &n1);
        if (n1 = (13 + 5))
        {
            *pScore = 10;
            printf("Correct!\n");
        }else{
            *pScore = -10;
            *pHeart = -1;
        }
    }
    
    

}