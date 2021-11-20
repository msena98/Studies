<?php
    require_once("../../conexao/conexao.php");

    // passo 3
    $consulta_produtos = "SELECT nomeproduto, precounitario, tempoentrega FROM produtos WHERE tempoentrega = 5";

    $produtos = mysqli_query($conecta,$consulta_produtos);

    if(!$produtos){
        die("Falha na consulta do banco de dados!");
    }

?>

<!doctype html>
<html>
    <head>
        <meta charset="UTF-8">
        <title>Curso PHP Integração com MySQL</title>
    </head>

    <body>
        <ol>
        <?php
            while ($registro = mysqli_fetch_assoc($produtos)) {
        ?>
        <li><?php echo $registro["nomeproduto"] . " - Preço unitário: R$" . $registro["precounitario"] ?></li>
        <?php     
            }
            mysqli_free_result($produtos);
        ?>
        </ol>
    </body>
</html>
<?php
    mysqli_close($conecta);
?>