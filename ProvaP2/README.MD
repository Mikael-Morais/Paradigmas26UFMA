# Caixa Eletrônico

Projeto de estudo em Java que simula operações básicas de uma conta corrente pelo terminal. O programa permite sacar, depositar, consultar o saldo e encerrar a execução.

Refatorando o projeto da p1.

## Requisitos

- JDK instalado (com `javac` e `java` disponíveis no terminal).

## Como executar

Abra o terminal na pasta do projeto e compile os arquivos:

```bash
javac *.java
```

Em seguida, execute:

```bash
java Main
```

## Operações

No menu, escolha:

1. **Sacar** — informa o valor do saque. A operação lança `SaldoInsuficienteExc` se o valor não puder ser sacado.
2. **Depositar** — informa o valor do depósito. A operação lança `ValorInvalidoExc` se o valor não for positivo.
3. **Consultar valor** — exibe o saldo atual.
4. **Sair** — encerra o programa.

Digite números inteiros para selecionar uma opção e valores numéricos para os depósitos e saques.

## Organização do código

- `Main.java` — menu e interação com o usuário.
- `OperacaoBancaria.java` — contrato das operações bancárias.
- `Conta.java` — classe abstrata com saldo e implementação das operações.
- `ContaCorrente.java` — implementação concreta da conta corrente.
- `SaldoInsuficienteExc.java` — exceção para saques que não podem ser realizados.
- `ValorInvalidoExc.java` — exceção para depósitos com valor inválido.
