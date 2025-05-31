#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float valorcompra,valorpago;
    float troco;
    int x;

    printf("Digite o valor total da compra:");
    scanf("%f", &valorcompra);

    printf("Digite o valor pago:");
    scanf("%f",&valorpago);

    troco = valorpago - valorcompra;

    printf("Seu troco é R$ %.2f\n", troco);

    if (troco >= 100) {
        x = troco / 100;
        troco = troco - (x * 100);
        printf("%d cédula(s) de R$ 100,00\n", x);
    }

    if (troco >= 50) {
        x = troco / 50;
        troco = troco - (x * 50);
        printf("%d cédula(s) de R$ 50,00\n", x);
    }

    if (troco >= 20) {
        x = troco / 20;
        troco = troco - (x * 20);
        printf("%d cédula(s) de R$ 20,00\n", x);
    }

    if (troco >= 10) {
        x = troco / 10;
        troco = troco - (x * 10);
        printf("%d cédula(s) de R$ 10,00\n", x);
    }

    if (troco >= 5) {
        x = troco / 5;
        troco = troco - (x * 5);
        printf("%d cédula(s) de R$ 5,00\n", x);
    }

    if (troco >= 1) {
        x = troco / 1;
        troco = troco - (x * 1);
        printf("%d cédula(s) de R$ 1,00\n", x);
    }

    if (troco >= 0.5) {
        x = troco / 0.5;
        troco = troco - (x * 0.5);
        printf("%d cédula(s) de R$ 0,50\n", x);
    }

    return 0;
}
