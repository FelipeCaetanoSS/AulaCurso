#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int num;

    printf("Digite um número inteiro para ver sua tabuada:");
    scanf("%i", &num);

    printf("TABUADA DO %i\n\n", num);

    for (int i = 0; i <= 10; i++) {
        printf("%i x %i = %i\n", num, i, num * i);
    }

    return 0;
}
