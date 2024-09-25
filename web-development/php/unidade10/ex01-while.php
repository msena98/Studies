<!DOCTYPE html>
<html lang="pt-BR">
<head>
    <meta charset="UTF-8">
    <title>CURSO PHP FUNDAMENTAL</title>
</head>
<body>
    <?php                    
        $_contador = 1;
        while ($_contador < 6) {
            $_sorteio = rand(1,60);
            echo $_sorteio . " ";
            $_contador++;
        }
    ?>
</body>
</html>