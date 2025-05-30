#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int num;
    int num1 = 0, num2 = 1;
    int prox;

    printf("Digite um número:");
    scanf("%i", &num);

    printf("Sequência de Fibonacci:\n");

    for (int i = 1; i <= num && num1 < num ; i++) {
        printf("%d ", num1);
        prox = num1 + num2;
        num1 = num2;
        num2 = prox;
    }

    printf("\n");
    return 0;
}
