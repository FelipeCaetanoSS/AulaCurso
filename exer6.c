#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Ler um vetor de 7 elementos inteiros e imprimir a soma dos valores nas posições ímpares (índice ímpar, não valor ímpar).

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int numeros[7];
    int i;

    for (i = 1; i < 7; i++){
    printf("Digite o valor %d:", i);
    scanf("%d", &numeros[i]);
    }

    printf("Os número(s) negativo(s) são\n");
    for (i = 1; i < 7; i++){
    if (numeros[i] < 0){
    printf("numero %d \n", numeros[i]);
    }
        }
    return 0;
}
