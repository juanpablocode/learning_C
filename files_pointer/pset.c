#include <stdio.h>

int main(void)
{
    int Score = 0;
    int* pScore = &Score;
    int Heart = 3;
    int* pHeart = &Heart;
    int endGame, n1 = 1;

    while (*pHeart >= 0 || endGame <= 1)
    {
        printf("How much is 50 + 50 ?\n");
        scanf("%i", &n1);
        if (n1 == (50 + 50))
        {
            *pScore += 10;
            printf("Correct!\n");
        }else{
            printf("Incorrect!\n");
            *pScore -= 10;
            *pHeart -= 1;
        }
        
        printf("How much is 13 + 5 ?\n");
        scanf("%i", &n1);
        if (n1 == (13 + 5))
        {
            *pScore += 10;
            printf("Correct!\n");
        }else{
            printf("Incorrect!\n");
            *pScore -= 10;
            *pHeart -= 1;
        }

        printf("How much is 55 + 5 ?\n");
        scanf("%i", &n1);
        if (n1 == (55 + 5))
        {
            *pScore += 10;
            printf("Correct!\n");
        }else{
            printf("Incorrect!\n");
            *pScore -= 10;
            *pHeart += 1;
        }

        printf("Would you like to try again? \n");
        printf("1 - No; 2 - Yes; \n");
        scanf("%d", &endGame);
        
    }
    printf("Endgame!\n");
    printf("Your final score was %d \n", *pScore);
    printf("Hearts left: %d\n", *pHeart);
    
}
