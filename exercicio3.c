#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int num;
    int cont = 0;

    while(num != 6){
        printf("Digite um número de 0 a 100: ");
        scanf("%d", &num);

        if(num > 6){
            printf("O número é menor que esse\n");
        }
        else if(num < 6){
            printf("O número é maior que esse\n");
        }

        cont++;
    }

    printf("Parabéns! Você digitou o número 6.\n");
    printf("Foram necessárias %d tentativas.\n", cont);

    return 0;
}
