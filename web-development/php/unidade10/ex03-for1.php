<!DOCTYPE html>
<html lang="pt-BR">
<head>
    <meta charset="UTF-8">
    <title>CURSO PHP FUNDAMENTAL</title>
</head>
<body>
    <?php                    
        for ($_contador=0; $_contador < 6; $_contador++) { 
            $_sorteio = rand(1,60);
            echo $_sorteio . " ";
        }
    ?>
</body>
</html>