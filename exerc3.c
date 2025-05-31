#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int idade;
    char nome[40];

    printf("Digite seu nome: ");
    scanf("%s", nome);
    printf("\nDigite sua idade: ");
    scanf("%d", &idade);

    if (idade <= 12) {
        printf("\n%s é criança", nome);
    }
    else if (idade <= 17) {
        printf("\n%s é adolescente", nome);
    }
    else if (idade <= 59) {
        printf("\n%s é adulto", nome);
    }
    else if (idade >= 60) {
        printf("\n%s é idoso", nome);
    }
    else {
        printf("\nInválido");
    }

    return 0;
}
