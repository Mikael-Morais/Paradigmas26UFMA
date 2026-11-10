package notificacoes;

class EmailNotificacao extends Notificacao implements Agendavel {
    public EmailNotificacao(String mensagem, String destinatario) {
        super(mensagem, destinatario);
    }

    @Override
    public String enviar(String mensagem) {
        return "Enviando email para " + getDestinatario() + " com a mensagem: " + mensagem;
    }

    @Override
    public String agendar(String dataHora) {
        return dataHora;
    }

    @Override
    public void horarioAgendamento(String dataHora) {
        System.out.println("Horário de agendamento do email: " + dataHora);
    }

    @Override
    public String resumoAgendamento(String dataHora, String mensagem, String destinatario) {
        return "Email agendado para " + dataHora + " com a mensagem: " + mensagem + " para " + destinatario;
    }
}