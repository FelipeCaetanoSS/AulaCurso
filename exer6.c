#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Ler um vetor de 7 elementos inteiros e imprimir a soma dos valores nas posições ímpares (índice ímpar, não valor ímpar).

int main() {
    setlocale(LC_ALL, "Portuguese");

    int numeros[7];
    int i, soma = 0;

    for (i = 1; i < 8; i++) {
        printf("Número na posição %d: ", i);
        scanf("%d", &numeros[i]);
    }

    for (i = 1; i < 8; i ++) {
        if (i % 2 != 0){
            soma += numeros[i];
    } }

    printf("\nA soma dos valores nas posições ímpares é: %d\n", soma);

    return 0;
}
