<?php 
    $_salario = 1100;
    $_meses   = 3;
?>

<!doctype html>
<html>
    <head>
        <meta charset="UTF-8">
        <title>Curso PHP FUNDAMENTAL</title>
    </head>

    <body>
        <?php 
            // Multiplicacao e Divisao
            echo $_salario * $_meses . "<br>";
            echo $_salario /2 . "<br>";

            // Exponencial
            echo "Exponencial: " . pow(6,3) . "<br>";

            // Raiz Quadrada
            echo "Raiz quadrada: " . sqrt(36) . "<br>";

            // Randômico Generica
            echo "Número genéricos: " . rand() . "<br>";

            // Randômico entre um intervalo
            echo "Randômico intervalo: " . rand(1, 10) . "<br>";
            
            // Valor absoluto
            echo "Número absoluto: " . abs(-50);
        ?>
    </body>
</html>