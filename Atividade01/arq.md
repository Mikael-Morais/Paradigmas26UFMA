
Aluno: Mikael Morais - Paradigmas da programação

# PSEUDOCÓDIGO
## Início
  LEIA nome
    LEIA idade
    LEIA saldo
    LEIA preco
    LEIA quantidade

   total ← preco * quantidade

   SE idade >= 18 E saldo >= total ENTÃO
        ESCREVA "Tem idade e saldo."
        ESCREVA "Compra autorizada."

   SENÃO SE idade >= 18 E saldo < total ENTÃO
        ESCREVA "Tem idade, mas não tem saldo."

   SENÃO SE idade < 18 E saldo >= total ENTÃO
        ESCREVA "Não tem idade, mas tem saldo."

  SENÃO
       ESCREVA "Não tem idade e não tem saldo."
  
## FIM
