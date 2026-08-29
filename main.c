#include <stdio.h>

int main() {

    char nome[50];
    int idade, quantidade;
    float saldo, preco, total;

    printf("Digite o nome do cliente: ");
    scanf("%c", nome);

    printf("Digite a idade do cliente: ");
    scanf("%d", &idade);

    printf("Digite o saldo disponivel: ");
    scanf("%f", &saldo);

    printf("Digite o preco do produto +18: ");
    scanf("%f", &preco);

    printf("Digite a quantidade desejada: ");
    scanf("%d", &quantidade);

    total = preco * quantidade;

    if (idade >= 18 && saldo >= total) {
        printf("Cliente tem idade e saldo.\n");
        printf("Compra autorizada!\n");

    } else if (idade >= 18 && saldo < total) {
        printf("Cliente tem idade, mas nao tem saldo suficiente.\n");
        printf("Compra nao autorizada.\n");

    } else if (idade < 18 && saldo >= total) {
        printf("Cliente nao tem idade, mas tem saldo.\n");
        printf("Compra nao autorizada.\n");

    } else {
        printf("Cliente nao tem idade e nao tem saldo.\n");
        printf("Compra nao autorizada.\n");
    }

    return 0;
}
