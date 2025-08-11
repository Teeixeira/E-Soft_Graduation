public class Cartao {
    String codigo;
    String validade;
    String cvv;
    ContaBarcaria contaBarcaria;

    Cartao(String codigo, String validade, String cvv, ContaBarcaria contaBarcaria) {
        this.codigo = codigo;
        this.validade = validade;
        this.cvv = cvv;
        this.contaBarcaria = contaBarcaria;
    }
}
