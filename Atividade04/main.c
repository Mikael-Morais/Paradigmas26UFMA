#include <stdio.h>
#include <stdbool.h>

float saldo = 1000.0;
bool encerrar = false;

int menu(){
    int opcao;
    printf("=====================================\n");
    printf("Digite a opção desejada\n");
    printf("Digite 0 para consultar saldo\n");
    printf("Digite 1 para realizar deposito\n");
    printf("Digite 2 para realizar saque\n");
    printf("Digite 3 para encerrar\n"); 
    printf("=====================================\n");
    printf("valor: ");
    scanf("%d", &opcao);
    return opcao;
}

void consultarSaldo(){
    printf("O saldo disponivel na conta é: %.2f\n", saldo);
    
}

void depositarSaldo(){
    float valor_deposito;
    printf("Digite o valor a ser depositado: ");
    scanf("%f", &valor_deposito);
    saldo = saldo + valor_deposito;
    printf("O saldo disponivel na conta é: %.2f\n", saldo);
}

void sacarSaldo(){
    float valor_saque;
    printf("\nDigite o valor a ser sacado: ");
    scanf("%f", &valor_saque);
    if(valor_saque > saldo){
    printf("\nValor indisponivel para saque");
    } else {
        printf("\nValor sacado com sucesso. Novo saldo de: %.2f", (saldo-valor_saque));
        saldo = saldo - valor_saque;
                }
}

void encerrarCodigo(){
    encerrar = true;
}

int main() {
    
int op;
    do{
        op = menu();
        switch (op){
            case 0:
                consultarSaldo();
                break;
            case 1:
                depositarSaldo();
                break;
            case 2:
                sacarSaldo();
                break;
            case 3:
                encerrarCodigo();
                break;
            default:
                printf("\nDigite uma opcao valida: \n");
                break;
        }
    } while(encerrar == false);
}
