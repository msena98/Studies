<?php
    $_fumante = true;
?>

<!doctype html>
<html>
    <head>
        <meta charset="UTF-8">
        <title>Curso PHP FUNDAMENTAL</title>
    </head>
 
    <body>
        <?php
            echo "É fumante? " . $_fumante . "<br>";
            echo "É booleana? " . is_bool($_fumante);
        ?>
    </body>
</html>