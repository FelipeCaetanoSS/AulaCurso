#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Ler 5 nomes (strings de até 20 caracteres) e exibir os nomes na ordem inversa.

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char nomes[5][20];

    printf("Digite 5 nomes:\n");
    for (int i = 0; i < 5; i++) {
        printf("Nome %d: ", i + 1);
        scanf("%19s", nomes[i]);
    }

    printf("\nNomes na ordem inversa:\n");
    for (int i = 4; i >= 0; i--) {
        printf("Nome %d: %s\n",i + 1, nomes[i]);
    }

    return 0;
}
