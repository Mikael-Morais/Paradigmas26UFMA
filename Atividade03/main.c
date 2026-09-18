#include <stdio.h>
#include <stdbool.h>

void lerNotas(float notas[], int *tamanho) {

    printf("Digite a quantidade de notas a ser alocado (2 - 6): ");
    scanf("%d", tamanho);

    if (*tamanho < 2 || *tamanho > 6) {
        printf("\nDigite um valor válido\n");
        return;
    }

    for (int i = 0; i < *tamanho; i++) {
        printf("Digite a %d nota: ", i + 1);
        scanf("%f", &notas[i]);
    }
}


float media(float notas[], int tamanho) {
    float somatorio = 0;

    for (int i = 0; i < tamanho; i++) {
        somatorio += notas[i];
    }

    return somatorio / tamanho;
}

char classificacao(float resultado) {

    if (resultado >= 9.5 && resultado <= 10) {
        return 'A';
    } 
    else if (resultado >= 8 && resultado < 9.5) {
        return 'B';
    }
    else if (resultado >= 7 && resultado < 8) {
        return 'C';
    }
    else if (resultado >= 6 && resultado < 7) {
        return 'D';
    }
    else {
        return 'E';
    }
}

bool aproveitamento(char classificacao) {

    if (classificacao == 'E' || classificacao == 'D') {
        return false;
    } 
    else {
        return true;
    }
}

int main() {

    int tamanho_vetor;
    char nomeDisciplina[100];
    float valoresNota[6];

    printf("Digite o nome da disciplina: ");
    scanf(" %[^\n]", nomeDisciplina);

    lerNotas(valoresNota, &tamanho_vetor);

    if (tamanho_vetor < 2 || tamanho_vetor > 6) {
        return 1;
    }

    float resultado = media(valoresNota, tamanho_vetor);

    char classe = classificacao(resultado);

    bool aprovado = aproveitamento(classe);

    printf("\nDisciplina: %s", nomeDisciplina);
    printf("\nMédia: %.2f", resultado);
    printf("\nClassificação: %c", classe);

    if (aprovado) {
        printf("\nAproveitamento para doutorado: Aprovado\n");
    } else {
        printf("\nAproveitamento para doutorado: Reprovado\n");
    }

    return 0;
}

