#include <stdio.h>
#include <string.h>

int main(void)
{
    char Num_list[3][15] = {"Juan", "Sabrina", "Carlos"};
    char pho_list[3][18] = {"(98) 98332-6826", "(24) 98822-3812", "(11) 98969-1817"};

    char search_var [20];

    printf("Digite o Contato Desejado: \n");
    printf("Juan - Sabrina - Carlos\n ");
    scanf("%s", search_var);
    for (int i = 0; i < 3; i++)
    {
        if (strcmp(Num_list[i], search_var) == 0)
        {
            printf("Encontrado! Seu Numero %s\n", pho_list[i]);
            return 0;
        }
        printf("Wait\n");
    }
    
    printf("Voce digitou %s\n", search_var);

    return 0;
}