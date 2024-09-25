<!DOCTYPE html>
<html lang="pt-BR">
<head>
    <meta charset="UTF-8">
    <title>CURSO PHP FUNDAMENTAL</title>
</head>
<body>
    <?php                    
        $_salada = array("laranja","uva","abacate");

        foreach ($_salada as $_frutas) {
            echo $_frutas . "<br>";
        }
    ?>
</body>
</html>