public interface OperacaoBancaria {
    void sacar(double valor) throws SaldoInsuficienteExc;

    void depositar(double valor) throws ValorInvalidoExc;

    String getExtrato();

}
