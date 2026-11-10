package notificacoes;

public interface Agendavel {
    String agendar(String dataHora);

    void horarioAgendamento(String dataHora);

    String resumoAgendamento(String dataHora, String mensagem, String destinatario);
}
