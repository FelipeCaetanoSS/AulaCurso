#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float peso, altura, imc;

    printf("Digite seu peso em kg: ");
    scanf("%f", &peso);

    printf("Digite sua altura em metros: ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    if (imc < 18.5) {
        printf("Seu IMC é %.2f. Classificação: Abaixo do peso\n", imc);
    } else if (imc >= 18.5 && imc <= 24.9) {
        printf("Seu IMC é %.2f. Classificação: Peso normal\n", imc);
    } else if (imc >= 25 && imc <= 29.9) {
        printf("Seu IMC é %.2f. Classificação: Sobrepeso\n", imc);
    } else {
        printf("Seu IMC é %.2f. Classificação: Obesidade\n", imc);
    }

    return 0;
}
