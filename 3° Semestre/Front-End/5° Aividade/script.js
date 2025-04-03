let pessoas = [];

function adicionarPessoa(nome, idade, sexo) {
    pessoas.push({
        nome: nome,
        idade: idade,
        sexo: sexo,
    });
}

document.getElementById('btnAdicionar').addEventListener('click', function() {
    const nome = document.getElementById('nome').value;
    const idade = document.getElementById('idade').value;
    const sexo = document.querySelector('input[name="sexo"]:checked') ? document.querySelector('input[name="sexo"]:checked').value : "";

    adicionarPessoa(nome, idade, sexo)

    console.log(pessoas)
})