#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int num1, num2, maior, menor;

    printf("Digite o primeiro número para o verificador\n");
    scanf("%i",&num1);
    printf("Digite o segundo número para o verificador\n");
    scanf("%i",&num2);

    if  (num1 > num2){
        maior = num1;
        menor = num2;
    printf("\nO número maior é:%d", maior);
    printf("\n\nO número menor é:%d\n\n", menor);
    }
    else if (num2 > num1){
        maior = num2;
        menor = num1;
    printf("O número maior é:%d", maior);
    printf("\n\nO número menor é:%d\n\n", menor);
        }
    else if (num2 == num1){
            printf("Os números são iguais:%d e %d",num1,num2);
        }
        else {
            printf("Erro!");
        }

        return 0;
    }
