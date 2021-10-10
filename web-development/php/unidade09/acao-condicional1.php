<!DOCTYPE html>
<html lang="pt-BR">
    <head>
        <meta charset="UTF-8">
        <meta name="viewport" content="width=device-width, initial-scale=1.0">
        <title>CURSO PHP FUNDAMENTAL</title>
    </head>
    <body>
        <?php 
            $_a = 5;
            $_b = 8;

            if ($_a > $_b) {
                echo "A é maior do que B";
            } else if($_a < $_b) {
                echo "A é menor do que B";
            } else {
                echo "A é igual a B";
            }
        ?>
    </body>
</html>