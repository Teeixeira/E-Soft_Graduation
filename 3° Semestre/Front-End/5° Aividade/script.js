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
    
});

document.getElementById('verificarItem').addEventListener('click',function (){
    const nome = document.getElementById('buscarNome').value;
    
    for(let i = 0; i < pessoas.length; i ++){
        if (pessoas[i].nome === nome) {
            alert("Usuário encontrado: "+nome+", índice: "+i);
            return;
        }
    }
    alert("Usuário não encontrado!");
});

document.getElementById('removerItem').addEventListener('click', function (){
    const indexRemover = parseInt(document.getElementById('buscarIndex').value);

    pessoas.splice(indexRemover, 1)
    console.log(pessoas)
});