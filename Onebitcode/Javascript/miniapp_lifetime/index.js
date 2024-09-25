let departureDateEntry = prompt("Digite a data de nascimento (formato DD/MM/YYYY)")

let departureDate = moment(departureDateEntry, "DD/MM/YYYY")

let today = moment()

let dateDiff = today - departureDate

let chosenOption = prompt("Escolha como gostaria de exibir o tempo de seu nascimento\n1- Segundos\n2- Minutos\n3- Horas\n4- Dias")
if(chosenOption == "1") {
    let secondsOfdeparture = Math.round(dateDiff / 1000)
    alert("Tempo de vôo: " + secondsOfdeparture + " segundos")
} else if (chosenOption == "2") {
    let minutesOfdeparture = Math.round(dateDiff / 1000 / 60)
    alert("Tempo de vôo: " + minutesOfdeparture + " minutos")
} else if (chosenOption == "3") {
    let hoursOfdeparture = Math.round(dateDiff / 1000 / 3600)
    alert("Tempo de vôo: " + hoursOfdeparture + " horas")
} else if (chosenOption == "4") {
    let daysOfdeparture = Math.round(dateDiff / 1000 / 3600 / 24)
    alert("Tempo de vôo: " + daysOfdeparture + " dias")
} else {
    alert("Opção inválida!")
}