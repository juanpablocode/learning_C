#include <stdio.h>
#include <string.h>

typedef struct 
{
  char name[3][25];
  char party[3][10];
  int votes[3][3];
}
candidate;

int main (void)
{
    int count = 3;
    candidate president;

    for (int i = 0; i < count; i++)
    {
        printf("Candidate Name: \n");
        scanf("%24s ", president.name[i]);

        printf("Candidate's party: \n");
        scanf("%9s ", president.party[i]);
        
        printf("Candidate's Votes: \n");
        scanf("%8d", president.votes[i]);

    }
    for(int i = 0; i < count; i++)
    {
        printf("%s, %s has %d votes\n", president.name[i], president.party[i], president.votes[i]);
    }
    if(president.votes[0] < president.votes[1] && president.votes[1] > president.votes[2])
        {
          printf("Candidate %s won!\n", president.name[1]);
          printf("With %d votes\n", president.votes[1]);
        }
    if(president.votes[2] < president.votes[0] && president.votes[0] > president.votes[1])
        {
          printf("Candidate %s won!\n", president.name[0]);
          printf("With %d votes\n", president.votes[0]);
        }
    if(president.votes[1] < president.votes[2] && president.votes[2] > president.votes[0])
        {
          printf("Candidate %s won!\n", president.name[2]);
          printf("With %d votes\n", president.votes[2]);
        }
  return 0;
