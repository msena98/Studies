<!doctype html>
<html>
    <head>
        <meta charset="UTF-8">
        <title>Curso PHP FUNDAMENTAL</title>
    </head>
        
    <body>
        <pre>
        <?php
            date_default_timezone_set('Brazil/East');
            $_agora = getdate();
            print_r($_agora);
        ?>
        </pre>
        
        <pre>
            <?php
                print_r(gettimeofday());
            ?>
        </pre>
    </body>
</html>