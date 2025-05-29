<script>
export default {
  data() {
    return {
      nome: "",
      idade: "",
      pessoas: [],
    }
  },

  methods: {
    cadastrarPessoas() {
      this.pessoas.push({ "nome": this.nome, "idade": this.idade })
      this.nome = "";
      this.idade = "";

      console.log(this.pessoas)
    }
  },
}

</script>



<template>

  <div class="container mt-2">
    <div class="card">
      <div class="card-body">
        <div class="mt-2">
          <div>
            <input v-model="nome" type="text" class="form-control" placeholder="Nome">
          </div>
        </div>
        <div class="mt-2">
          <input v-model="idade" type="text" class="form-control" placeholder="Idade">
        </div>
        <div class="col-12">
          <button @click="cadastrarPessoas" class="btn btn-primary mt-2">Adicionar Pessoa</button>
        </div>
      </div>
    </div>
  </div>

  <h1>{{ nome }}</h1>
  <h1>{{ idade }}</h1>

  <hr>

  <div class="container mt-5">
    <div class="card-body">
      <div class="card">
        <table>
          <thead class="text-center">
            <tr class="row">
              <th class="col-6">nome</th>
              <th class="col-6">idade</th>
            </tr>
          </thead>
          <tbody class="text-center">
            <tr v-for="pessoa in pessoas" class="row">
              <td class="col-6">{{ pessoa.nome }}</td>
              <td class="col-6">{{ pessoa.idade }}</td>
            </tr>
          </tbody>
        </table>
      </div>
    </div>
  </div>

</template>




<style scoped></style>
