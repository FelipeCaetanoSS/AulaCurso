#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int nota1, nota2;
    float notafinal;

    printf("Digite a primeira nota:\n");
    scanf("%i",&nota1);
    printf("Digite a segunda nota:\n");
    scanf("%i",&nota2);

    notafinal = (nota1 + nota2)/2;

    if (notafinal > 6) {

        printf("\n\nAprovado:%.2f \n",notafinal);

    } else {

         printf("\n\nNão foi aprovado:%.2f \n",notafinal);
    }

    return 0;
}
