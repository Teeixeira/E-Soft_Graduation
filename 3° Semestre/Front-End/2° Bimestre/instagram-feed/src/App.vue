<script>

import PessoaItem from './pessoaItem.vue'


export default {
  data() {
    return {
      publicacoes: [
        {
          descricao: "Dia que fiz gol",
          nome_usuario: "Cristiano Ronaldo",
          foto_usuario: "https://conteudo.imguol.com.br/c/esporte/d6/2025/04/05/cristiano-ronaldo-durante-jogo-entre-al-hilal-e-al-nassr-no-campeonato-saudita-1743855177331_v2_450x450.jpg.webp",
          numero_curtidas: 10,
          comentarios: 10,
          imagem: "https://fly.metroimg.com/upload/q_85,w_700/https://uploads.metroimg.com/wp-content/uploads/2024/08/26113635/cristiano-ronaldo-futebol-futuro-aposentadoria.jpg"
        },
        {
          descricao: "Treinando forte!",
          nome_usuario: "Cristiano Ronaldo",
          foto_usuario: "https://conteudo.imguol.com.br/c/esporte/d6/2025/04/05/cristiano-ronaldo-durante-jogo-entre-al-hilal-e-al-nassr-no-campeonato-saudita-1743855177331_v2_450x450.jpg.webp",
          numero_curtidas: 25,
          comentarios: 15,
          imagem: "https://fly.metroimg.com/upload/q_85,w_700/https://uploads.metroimg.com/wp-content/uploads/2024/08/26113635/cristiano-ronaldo-futebol-futuro-aposentadoria.jpg"
        }
      ]
    };
  },
};
</script>

<template>
  <nav class="navbar navbar-expand-lg bg-body-tertiary">
    <div class="container-fluid">
      <a class="navbar-brand" href="#">Navbar</a>
      <button class="navbar-toggler" type="button" data-bs-toggle="collapse" data-bs-target="#navbarSupportedContent" aria-controls="navbarSupportedContent" aria-expanded="false" aria-label="Toggle navigation">
        <span class="navbar-toggler-icon"></span>
      </button>
      <div class="collapse navbar-collapse" id="navbarSupportedContent">
        <ul class="navbar-nav me-auto mb-2 mb-lg-0">
          <li class="nav-item">
            <a class="nav-link active" aria-current="page" href="#">Home</a>
          </li>
          <li class="nav-item">
            <a class="nav-link" href="#">Link</a>
          </li>
        </ul>
        <form class="d-flex" role="search">
          <input class="form-control me-2" type="search" placeholder="Search" aria-label="Search" />
          <button class="btn btn-outline-success" type="submit">Search</button>
        </form>
      </div>
    </div>
  </nav>

  <div class="row">
    <div class="col-3">esquerda</div>
    <div class="col-6">
      <div v-for="publicacao in publicacoes" :key="publicacao.nome_usuario" class="card mb-3">
        <div class="card-header d-flex align-items-center">
          <img class="foto-perfil me-2" :src="publicacao.foto_usuario" alt="Foto do usuário" />
          <span class="nomeUsuario">{{ publicacao.nome_usuario }}</span>
          <div class="ms-auto">
            <i class="bi bi-three-dots-vertical"></i>
          </div>
        </div>
        <img :src="publicacao.imagem" class="card-img-top" alt="Imagem da publicação" />
        <div class="card-body">
          <div class="d-flex justify-content-between mb-2">
            <i class="bi bi-heart me-3" style="cursor: pointer;">{{ publicacao.numero_curtidas }}</i>
            <i class="bi bi-chat me-3" style="cursor: pointer;">{{ publicacao.comentarios }}</i>
            <i class="bi bi-send"></i>
            <i class="bi bi-bookmark ms-auto" style="cursor: pointer;"></i>
          </div>
          <p class="mb-1"><strong>{{ publicacao.nome_usuario }}</strong> {{ publicacao.descricao }}</p>
          <div class="d-flex justify-content-between">
          </div>
        </div>
      </div>
    </div>
    <div class="col-3">direita</div>
  </div>
</template>

<style>
.foto-perfil {
  width: 50px;
  height: 50px;
  border-radius: 50%;
}
.nomeUsuario {
  font-size: 18px;
  font-weight: bold;
}
.card {
  border: 1px solid #ddd;
  border-radius: 8px;
  overflow: hidden;
}
.card-header {
  background-color: #f8f9fa;
  padding: 10px;
}
.card-body {
  padding: 10px;
}
.bi-heart:hover,
.bi-chat:hover,
.bi-bookmark:hover {
  color: red;
}
</style>