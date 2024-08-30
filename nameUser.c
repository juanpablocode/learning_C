#include <stdio.h>
#include <string.h>

int main() {
    char userName[2][5];
    strcpy(userName[0], "Hi !");
    strcpy(userName[1], "Bye");

    //printf("What's Your Name?\n");
    //scanf("%s", userName);
    //printf("Your name is %i%i%i%i !\n", userName[0], userName[2], userName[3], userName[4]);
    printf("Your Name: %s\n", userName[0][0]);
    printf("Your Name: %s\n %s", userName[0][1]);
    printf("%d \n", userName[0][2]);
    return 0;
}