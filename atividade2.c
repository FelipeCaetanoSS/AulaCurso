#include <stdio.h>
#include <string.h>
#include <locale.h>


int main() {
    setlocale(LC_ALL, "Portuguese");

    int senha;
    int senha_digitada;

    printf("Digite a senha que irá criar: ");
    scanf("%d",&senha);

    printf("\n\nDigite sua senha: ");
    scanf("%d",&senha_digitada);

    if (senha_digitada == senha) {

        printf("\nAcesso permitido\n");
    } else {
        printf("\nSenha incorreta\n");
    }

    return 0;
}
