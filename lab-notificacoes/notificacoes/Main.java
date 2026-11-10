package notificacoes;

public class Main {
    public static void main(String[] args) {
        EmailNotificacao emailNotificacao = new EmailNotificacao("Olá, este é um email de teste.",
                "destinatario@example.com");

        System.out.println(emailNotificacao.enviar(emailNotificacao.getMensagem()));
        String dataHoraAgendamento = emailNotificacao.agendar("2023-10-01 10:00");

        System.out.println(emailNotificacao.resumoAgendamento(dataHoraAgendamento, emailNotificacao.getMensagem(),
                emailNotificacao.getDestinatario()));

    }
}
