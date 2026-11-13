import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        ContaCorrente conta = new ContaCorrente(0.0);
        int opcao;

        while (true) {
            System.out.println("\n\n======== CAIXA ELETRONICO ========");
            System.out.println("==================================");
            System.out.println("1 - Sacar");
            System.out.println("2 - Depositar");
            System.out.println("3 - Consultar valor");
            System.out.println("4 - Sair");
            System.out.println("==================================");
            System.out.print("\nDigite o índice da operação que deseja realizar: ");

            opcao = scanner.nextInt();

            switch (opcao) {
                case 1:
                    System.out.print("\nDigite qual valor deseja sacar: ");
                    float valorSaque = scanner.nextFloat();
                    try {
                        conta.sacar(valorSaque);
                    } catch (SaldoInsuficienteExc e) {
                        System.out.println(e.getMessage());
                    }
                    break;

                case 2:
                    System.out.print("\nDigite qual valor deseja depositar: ");
                    float valorDeposito = scanner.nextFloat();
                    try {
                        conta.depositar(valorDeposito);
                    } catch (ValorInvalidoExc e) {
                        System.out.println(e.getMessage());
                    }
                    break;

                case 3:
                    System.out.println(conta.getExtrato());
                    break;

                case 4:
                    System.out.println("Obrigado por utilizar nosso caixa eletrônico!");
                    return;

                default:
                    System.out.println("Opção inválida!");
            }
        }
    }
}
