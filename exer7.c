#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Ler 10 números inteiros e contar quantas vezes o número 0 aparece.

int main() {
    setlocale(LC_ALL, "Portuguese");

    int numeros[10];
    int i, contador = 0;


    for (i = 0; i < 10; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    for (i = 0; i < 10; i++) {
        if (numeros[i] == 0) {
            contador++;
        }
    }

    printf("/nO total de números 0 foi: %d \n", contador);

    return 0;
}
