let pilotName = prompt("Qual seu nome piloto?")
let velocity = 0
let velDesire = prompt("Qual velocidade você gostaria de acelerar a nave?")
let confirmation = confirm("A velocidade está indo para "+velDesire+"km/s, você confirma?")

confirmation == true ? velocity = velDesire : console.log("A nave manteve a mesma velocidade")

if (velocity < 0) {
    alert("Nave está parada. Considere partir e aumentar a velocidade\n"
        +"Nome do piloto: "+pilotName+"\nVelocidade atual: "+velocity);
} else if (velocity < 40) {
    alert("Você está devagar, podemos aumentar mais\n"
    +"Nome do piloto: "+pilotName+"\nVelocidade atual: "+velocity);
} else if (velocity >= 40 && velocity < 80) {
    alert("Parece uma boa velocidade para manter\n"
    +"Nome do piloto: "+pilotName+"\nVelocidade atual: "+velocity);
} else if (velocity >= 80 && velocity < 100) {
    alert("Velocidade alta. Considere diminuir\n"
    +"Nome do piloto: "+pilotName+"\nVelocidade atual: "+velocity);
} else if (velocity >= 100) {
    alert("Velocidade perigosa. Controle automático forçado\n"
    +"Nome do piloto: "+pilotName+"\nVelocidade atual: "+velocity);
}