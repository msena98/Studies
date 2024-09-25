<?php
    $_salada = array("Laranja","Uva","Abacate");
?>

<!doctype html>
<html>
    <head>
        <meta charset="UTF-8">
        <title>Curso PHP FUNDAMENTAL</title>
    </head>

    <body>
        <?php 
            echo "Existe o elemento? " . in_array("Uva",$_salada) . "<br>";
            echo "Qual a posição do elemento? " . array_search("Uva",$_salada);
        ?>
    </body>
</html>