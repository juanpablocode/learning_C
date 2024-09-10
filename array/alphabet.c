#include <stdio.h>
#include <string.h>

int main (int argv, char* argc)
{
    char alphabet[11] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', '\0'};
    int count;
  
  //printf("Insert the alphabet: \n");
  //scanf("%s", alphabet);
    count = strlen(alphabet);
    printf("Alphabet Verificator");
    for (int i = 0; i < count; i++)
        {
            if (alphabet[i] >= "A" && alphabet[i] <="Z" )
                {
                    printf("%c ", alphabet[i]);
                } else {
                    printf(", (%C)This is not a valid character, ", alphabet[i]);
                }
        }
  
  return 0;
}