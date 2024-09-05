#include <stdio.h>
#include <string.h>

int main()
{
    char userText[20];
    printf("Digite um texto: ");
    scanf("%s", userText);

    printf("Texto transformado: ");
    for (int i = 0, n = strlen(userText); i < n; i++)
    {
        if (userText[i] >= 'a' && userText[i] <= 'z')
        {
            // Se for minúscula, subtraia 32 para obter a letra maiúscula correspondente
            printf("%c", userText[i] - 32);
        }
        else
        {
            // Mantenha outros caracteres inalterados
            printf("%c", userText[i]);
        }
    }
    printf("\n");

    return 0;
}
