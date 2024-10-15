#include <stdio.h>
#include <string.h>

int main(void) {
    char word_list[6][12] = {"cat", "word", "charmander", "cellphone", "school", "pride"};
    int count = sizeof(word_list) / sizeof(word_list[0]);

    for (int i = 0; i < count; i++) {
        if (strchr(word_list[i], 's') != NULL) {
            printf("Founded\n");
            return 0;
        }
    }
    return 0;
}
