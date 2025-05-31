#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");

    int num1, num2;
    char operador;

    printf("Digite o primeiro número:");
    scanf("%d",&num1);

    printf("\nDigite a operação:");
    scanf(" %c",&operador);

    printf("\nDigite o segundo número: ");
    scanf("%d",&num2);

    switch(operador) {
        case '+':
            printf("\n%d + %d = %d\n", num1, num2, num1 + num2);
            break;
        case '-':
            printf("\n%d - %d = %d\n", num1, num2, num1 - num2);
            break;
        case '*':
            printf("\n%d * %d = %d\n", num1, num2, num1 * num2);
            break;
        case '/':
            if(num2 != 0)
                printf("\n%d / %d = %d\n", num1, num2, num1 / num2);
            else
                printf("\nErro: Divisão por zero!\n");
            break;
        default:
            printf("\nOperador inválido!\n");
    }

    return 0;
}
