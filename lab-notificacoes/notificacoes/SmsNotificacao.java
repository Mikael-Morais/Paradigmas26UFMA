package notificacoes;

class SmsNotificacao extends Notificacao {

    public SmsNotificacao(String mensagem, String destinatario) {
        super(mensagem, destinatario);
    }

    @Override
    public String enviar(String mensagem) {
        String mensagemAjustada = (mensagem.length() > 160) ? mensagem.substring(0, 160) : mensagem;

        return "Enviando SMS para " + getDestinatario() + " com a mensagem: " + mensagemAjustada;
    }
}