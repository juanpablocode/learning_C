#include <stdio.h>
#include <string.h>

int main(void)
{
    char word_list[6][12] = {"cat", "word", "charmander", "cellphone", "school", "pride"};
    int count = sizeof(word_list); 
    for (int i = 0; i < count; i++)
    {
        printf("%c\n", word_list[i]);
    }
    

    return 0;
}
