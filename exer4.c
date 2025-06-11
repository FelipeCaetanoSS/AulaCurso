#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Ler 8 números inteiros e imprimir o menor e o maior valor do vetor.

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int numeros[8];
    int i;
    int menor = 0, maior = 0;

    for (i = 1; i < 9; i++){
    printf("Digite o valor %d:", i);
    scanf("%d", &numeros[i]);
}
    for (i = 1; i < 9; i++){
    if (numeros[i] < menor){
        menor = numeros[i];
    }
    else if (numeros[i] > maior){
        maior = numeros[i];
    }
        }

        printf("\n\nO Número maior é %d\n", maior);
        printf("O Número menor é %d\n", menor);

    return 0;
}

