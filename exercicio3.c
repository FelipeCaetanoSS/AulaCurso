#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int num;
    int total;
    int fatorial = 1;

    printf("Digite um número: ");
    scanf("%d", &num);

    for (int i = num ; i >= 1; i--){
        fatorial *= i;
        printf("%d\n", i);
    }

    printf("Resultado do fatorial: %d\n\n", fatorial);

    return 0;
}
