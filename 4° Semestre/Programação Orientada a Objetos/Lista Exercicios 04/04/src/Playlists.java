import java.util.ArrayList;
import java.util.List;

public class Playlists {

    private List<Musicas> musicas;

    public Playlists() {
        this.musicas = new ArrayList<>();
    }

    public void adicionarMusica(Musicas newMusica) {
        this.musicas.add(newMusica);
    }

    public void mostrarMusicas() {
        int i = 1;
        for (Musicas musica : musicas) {
            System.out.printf("%d: %s, Artista: %s, Ano publicação: %d\n",i, musica.getNome(),
                    musica.getArtista(), musica.getAnoPublicacao());
            i ++;
        }
    }
}