class Funcionario {
    constructor(nome, idade, cargo){
        this.nome = nome;
        this.idade = idade; 
        this.cargo = cargo;
    }

    seApresentar() {  
        console.log(`Oi eu me chamo ${this.nome}, tenho ${this.idade} anos e sou ${this.cargo}`);
    }
    trabalhar() {  
        console.log("Estou trabalhando ;D");
    }
}

class Gerente extends Funcionario{
    constructor(nome, idade, cargo, departamento){
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

class Desenvolvedor  extends Funcionario{
    constructor(nome, idade, cargo, linguagem){
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

manag = new Gerente("Leonardo", "28", "Supervisor", "T.I");
dev = new Desenvolvedor("Matheus", "26", "Desenvolvedor", "Javascript");

manag.seApresentar();
manag.gerenciar();
dev.seApresentar();
dev.programar();

