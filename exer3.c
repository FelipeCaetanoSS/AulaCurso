#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Ler 6 números inteiros e imprimir apenas os números negativos.

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int numeros[6];
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
