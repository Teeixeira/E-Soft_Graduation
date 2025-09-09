public class Main {
    public static void main(String[] args) {

        Playlists playlists = new Playlists();

        Musicas musica = new Musicas("Snuff", "Slipknot", 2011);
        Musicas musica2 = new Musicas("Physcosocial", "Slipknot", 2013);
        Musicas musica3 = new Musicas("Duality", "Slipknot", 2014);
        Musicas musica4 = new Musicas("Vermilion part 1", "Slipknot", 2012);
        Musicas musica5 = new Musicas("Vermilion part 2", "Slipknot", 2013);
        Musicas musica6 = new Musicas("Yen", "Slipknot", 2017);
        Musicas musica7 = new Musicas("Devil in i", "Slipknot", 2020);
        Musicas musica8 = new Musicas("Numb", "Linkin Park", 2007);
        Musicas musica9 = new Musicas("Crawling", "Linkin Park", 2005);
        Musicas musica10 = new Musicas("Faint", "Linkin Park", 2005);

        playlists.adicionarMusica(musica);
        playlists.adicionarMusica(musica2);
        playlists.adicionarMusica(musica3);
        playlists.adicionarMusica(musica4);
        playlists.adicionarMusica(musica5);
        playlists.adicionarMusica(musica6);
        playlists.adicionarMusica(musica7);
        playlists.adicionarMusica(musica8);
        playlists.adicionarMusica(musica9);
        playlists.adicionarMusica(musica10);

        System.out.println("Musicas na playlist");

        playlists.mostrarMusicas();

    }
}