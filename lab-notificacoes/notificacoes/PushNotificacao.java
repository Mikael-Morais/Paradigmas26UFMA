package notificacoes;

class PushNotificacao extends Notificacao implements Agendavel {
    public PushNotificacao(String mensagem, String destinatario) {
        super(mensagem, destinatario);
    }

    @Override
    public String enviar(String mensagem) {
        return "Enviando push notification para " + getDestinatario() + " com a mensagem: " + mensagem;
    }

    @Override
    public String agendar(String dataHora) {
        return dataHora;
    }

    @Override
    public void horarioAgendamento(String dataHora) {
        System.out.println("Horário de agendamento da push notification: " + dataHora);
    }

    @Override
    public String resumoAgendamento(String dataHora, String mensagem, String destinatario) {
        return "Push notification agendada para " + dataHora + " com a mensagem: " + mensagem + " para " + destinatario;
    }
}
