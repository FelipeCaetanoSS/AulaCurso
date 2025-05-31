#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float prod, desconto;

    printf("Digite o valor do produto:R$ ");
    scanf("%f",&prod);

    if (prod > 100) {

        desconto = prod - (prod * 0.10);

        printf("\n\nGanhou um desconto de 10 por cento, ficará: R$%.2f \n",desconto);

    } else {

        printf("\n\nEsse Produto não tem desconto\n");
    }

    return 0;
}
