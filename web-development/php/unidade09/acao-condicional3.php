<!DOCTYPE html>
<html lang="pt-BR">
    <head>
        <meta charset="UTF-8">
        <meta name="viewport" content="width=device-width, initial-scale=1.0">
        <title>CURSO PHP FUNDAMENTAL</title>
    </head>
    <body>
        <?php 
            $_idade = 18;
            $_maioridade = ($_idade >= 18) ? "de maior" : "de menor";
            echo $_maioridade;
        ?>
    </body>
</html>