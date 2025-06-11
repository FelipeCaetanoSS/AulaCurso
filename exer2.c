#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Ler 5 notas reais e calcular a média aritmética.

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int notas[5];
    int media, n, nota = 0;

    for (n = 1; n < 6; n++){
    printf("Digite a nota %d:", n);
    scanf("%d", &notas[n]);
    nota += notas[n];
    }
    media = nota / 5;
    printf("A média das notas é %d \n", media);

    return 0;
}
