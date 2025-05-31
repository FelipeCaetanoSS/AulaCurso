#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int numero;

    printf("Digite um número: ");
    scanf("%d", &numero);

    if (numero >= 10 && numero <= 20) {
        printf("O número %d está dentro do intervalo de 10 a 20.\n", numero);
    } else {
        printf("O número %d NÃO está dentro do intervalo de 10 a 20.\n", numero);
    }

    return 0;
}