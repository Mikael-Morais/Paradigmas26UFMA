#include <stdio.h>
#include <stdbool.h>

int main()
{
    /*
        Construção de um menu de opção 
        saldo -> variável para leitura
     */

    float saldo = 1000.0;
    float valor_deposito;
    float valor_saque;
    int opcao;
    bool encerrar = false;
    do {
    printf("\nDigite a opção desejada\n");
    printf("Digite 0 para consultar saldo\n");
    printf("Digite 1 para realizar deposito\n");
    printf("Digite 2 para realizar saque\n");
    printf("Digite 3 para encerrar\n"); 
    scanf("%d", &opcao);
        switch (opcao){
            case 0: 
                printf("O saldo disponivel na conta é: %.2f\n", saldo);
                break;
            case 1:
                printf("Digite o valor a ser depositado: ");
                scanf("%f", &valor_deposito);
                saldo = saldo + valor_deposito;
                printf("O saldo disponivel na conta é: %.2f\n", saldo);
                break;
            case 2: 
                printf("\nDigite o valor a ser sacado: ");
                scanf("%f", &valor_saque);
                if(valor_saque > saldo){
                    printf("\nValor indisponivel para saque");
                } else {
                    printf("\nValor sacado com sucesso. Novo saldo de: %.2f", (saldo-valor_saque));
                    saldo = saldo - valor_saque;
                }
                break;
            case 3:
                encerrar = true;
                break;
            default: 
                printf("\nDigite uma opcao valida: \n");
                break;
        }
    } while(encerrar == false);
        
    
    printf("\nPrograma finalizado com sucesso");
}
