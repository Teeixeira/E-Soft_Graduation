public class ValorMenorQueZeroException extends Exception {

    private String rotina;

    public ValorMenorQueZeroException(String rotina) {
        super("Não é permitido valor menor que zero" + rotina);
    }
}