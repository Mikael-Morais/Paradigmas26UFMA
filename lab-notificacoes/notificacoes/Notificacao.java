package notificacoes;

abstract class Notificacao {
    private String mensagem;
    private String destinatario;

    public Notificacao(String mensagem, String destinatario) {
        this.mensagem = mensagem;
        this.destinatario = destinatario;
    }

    public abstract String enviar(String mensagem);

    public String getMensagem() {
        return mensagem;
    }

    public String getDestinatario() {
        return destinatario;
    }

}