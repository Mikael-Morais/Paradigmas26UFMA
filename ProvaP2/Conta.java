public abstract class Conta implements OperacaoBancaria {
    private double saldo = 0.0;

    public Conta(double saldo) {
        this.saldo = saldo;
    }

    @Override
    public void sacar(double valor) throws SaldoInsuficienteExc {
        if (valor > 0 && valor <= saldo) {
            saldo -= valor;
            System.out.printf("Saque realizado com sucesso. Novo saldo: %.2f%n", saldo);
        } else {
            throw new SaldoInsuficienteExc("Saldo insuficiente para realizar o saque.");
        }
    }

    @Override
    public void depositar(double valor) throws ValorInvalidoExc {
        if (valor > 0) {
            saldo += valor;
            System.out.printf("Depósito realizado com sucesso. Novo saldo: %.2f%n", saldo);
        } else {
            throw new ValorInvalidoExc("Valor inválido para depósito.");
        }
    }

    @Override
    public String getExtrato() {
        return "Saldo em conta: " + saldo;
    }

}
