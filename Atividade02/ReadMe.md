Aluno: Mikael Morais - Paradigmas da programação

# PSEUDOCÓDIGO
##inicio
--
  ler saldo, valor_deposito, valor_saque, opcao
  saldo ← 1000.0

  REPITA
      ESCREVA "0-Saldo | 1-Deposito | 2-Saque | 3-Sair"
      LEIA opcao

    ESCOLHA opcao
        CASO 0: ESCREVA "Saldo: ", saldo
        CASO 1: LEIA valor_deposito
                saldo ← saldo + valor_deposito
                ESCREVA "Novo saldo: ", saldo
        CASO 2: LEIA valor_saque
                SE valor_saque <= saldo ENTÃO
                    saldo ← saldo - valor_saque
                    ESCREVA "Saque ok. Saldo: ", saldo
                SENÃO ESCREVA "Saldo insuficiente."
        CASO 3: ESCREVA "Saindo..."
        OUTROCASO: ESCREVA "Opção inválida."
    FIMESCOLHA
    ATÉ QUE opcao = 3

  ESCREVA "Programa finalizado."
 --
##FIM
