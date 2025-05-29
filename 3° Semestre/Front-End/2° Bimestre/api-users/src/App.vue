<script>
import PessoaItem from "./components/pessoaItem.vue";
import axios from "axios";

export default {
  components: {
    PessoaItem,
  },
  data() {
    return {
      pessoas: [],
    };
  },
  async mounted() {
    try {
      const response = await axios.get(
        "https://jsonplaceholder.typicode.com/users"
      );
      this.pessoas = response.data;
    } catch (error) {
      console.error("Erro ao buscar usuários:", error);
    }
  },
};
</script>

<template>
  <div class="container">
    <PessoaItem
      v-for="pessoa in pessoas"
      :key="pessoa.id"
      :nome="pessoa.name"
      :email="pessoa.email"
      :id="pessoa.id"
    />
  </div>
</template>

<style></style>
