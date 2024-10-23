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

  return 0;
