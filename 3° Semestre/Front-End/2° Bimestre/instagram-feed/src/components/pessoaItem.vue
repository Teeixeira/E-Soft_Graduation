<script>
export default {
  props: {
    nome: String,
    email: String,
    id: Number,
  },
};
</script>

<template>
  <div class="container">
    <div class="card border border-dark p-2 mt-3 mb-3">
      <div class="d-flex justify-content-between">
        <div class="d-flex flex-column justify-content-center">
          <p class="mb-1"><strong>Nome:</strong> {{ nome }}</p>
          <p class="mb-0"><strong>E-mail:</strong> {{ email }}</p>
        </div>
        <div class="d-flex align-items-center">
          <p class="mb-0"><strong>ID:</strong> <span class="text-primary">#{{ id }}</span></p>
        </div>
      </div>
    </div>
  </div>
</template>