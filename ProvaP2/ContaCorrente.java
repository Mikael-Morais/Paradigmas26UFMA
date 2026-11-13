public class ContaCorrente extends Conta {

    public ContaCorrente(double saldoInicial) {
        super(saldoInicial);
    }

    public void sacar(double valor) throws SaldoInsuficienteExc {
        super.sacar(valor);
    }

    public void depositar(double valor) throws ValorInvalidoExc {
        super.depositar(valor);
    }
}
