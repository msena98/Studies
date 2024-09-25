class Funcionario {
    constructor(nome, idade, cargo) {
        this.nome = nome;
        this.idade = idade;
        this.cargo = cargo;
    }

    seApresentar() {
        return `Oi eu me chamo ${this.nome}, tenho ${this.idade} anos e sou ${this.cargo}`;
    }
    trabalhar() {
        return "Estou trabalhando ;D";
    }
}

class Gerente extends Funcionario {
    constructor(nome, idade, cargo, departamento) {
        super();
        this.nome = nome;
        this.idade = idade;
        this.cargo = cargo;
        this.departamento = departamento;
    }

    gerenciar() {
        console.log("Estou gerenciando ;D");
    }
}

class Desenvolvedor extends Funcionario {
    constructor(nome, idade, cargo, linguagem) {
        super();
        this.nome = nome;
        this.idade = idade;
        this.cargo = cargo;
        this.linguagem = linguagem;
    }

    programar() {
        console.log("Estou programando ;D");
    }
}

var div1 = document.getElementById("departamento-div");
var div2 = document.getElementById("linguagem-div");

div2.style.display = "none";

var select = document.getElementById("cargo");

select.addEventListener('change', function (e) {
    div1.style.display = "none";
    div2.style.display = "none";
    var selected = select.options[select.selectedIndex].text;
    if (selected == "Gerente") {
        document.getElementById("departamento-div").style.display = "";
    }
    if (selected == "Desenvolvedor") {
        document.getElementById("linguagem-div").style.display = "";
    }
})

function exibirErro(mensagem) {
    alert(mensagem);
}

function criaFuncionario() {
    event.preventDefault();
    var selected = select.options[select.selectedIndex].text;
    if (selected == "Gerente") {
        try {
            var nome = document.getElementById("nome").value;
            var idade = document.getElementById("idade").value;
            var cargo = "Gerente";
            var departamento = document.getElementById("departamento").value;
            if (nome === "" || idade === "" || cargo === "" || departamento === "") {
                throw new Error("Algum dos campos está vazio");
            }
            var manag = new Gerente(nome, idade, cargo, departamento);
            alert(manag.seApresentar());
        } catch (e) {
            exibirErro(e);
        }
    }
    if (selected == "Desenvolvedor") {
        try {
            var nome = document.getElementById("nome").value;
            var idade = document.getElementById("idade").value;
            var cargo = "Desenvolvedor";
            var linguagem = document.getElementById("linguagem").value;
            if (nome === "" || idade === "" || cargo === "" || linguagem === "") {
                throw new Error("Algum dos campos está vazio");
            }
            var dev = new Desenvolvedor(nome, idade, cargo, linguagem);
            alert(dev.seApresentar());
        } catch (e) {
            exibirErro(e);
        }
    }
}
