<?php require_once("../../conexao/conexao.php"); ?>
<?php
    session_start();
?>
<!doctype html>
<html>
    <head>
        <meta charset="UTF-8">
        <title>Curso PHP Integração com MySQL</title>
        
        <!-- estilo -->
        <link href="_css/estilo.css" rel="stylesheet">
    </head>

    <body>
        <?php include_once("../_incluir/topo.php"); ?>
        <?php include_once("../_incluir/funcoes.php"); ?>
        
        <main>
            <?php
                // Exlcui a variável de sessão mencionada
                unset($_SESSION["usuario"]);

                // Destrói todas as variáveis de sessãp da app.
                session_destroy();
            ?>
        </main>

        <?php include_once("../_incluir/rodape.php"); ?>  
    </body>
</html>

<?php
    // Fechar conexao
    mysqli_close($conecta);
?>