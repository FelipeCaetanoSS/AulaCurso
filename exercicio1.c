#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int num;
    int cont;
    int impar = 0;

    printf("Digite um número: ");
    scanf("%d", &num);

    cont = num - 1;

    while(cont > 0){
        if(cont % 2 != 0){
            impar++;
            printf("Número: %d\n", cont);
        }
        cont--;
    }

    printf("Quantidade de números ímpares menores que %d: %d\n", num, impar);

    return 0;
}
