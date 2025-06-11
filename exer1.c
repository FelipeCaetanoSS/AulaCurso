#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int numeros[10];
    int i;

    for (i = 0; i < 10; i++){
    printf("Digite o valor %d:", i);
    scanf("%d", &numeros[i]);
    }

    printf("numeros pares são\n");
    for (i = 0; i < 10; i++){
    if (numeros[i] % 2 == 0){
    printf("numero %d \n", numeros[i]);
    }
        }
    return 0;
}
