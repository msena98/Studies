<?php
    //configurações gerais
    header('Acess-Control-Allow-Origin:*');
    
    //abrir conexao
    $conecta = mysqli_connect("localhost:3308","root","","andes");

    $selecao = "SELECT nomeproduto, precounitario, imagempequena FROM produtos";
    $produtos = mysqli_query($conecta,$selecao);

    $retorno = array();
    while($linha = mysqli_fetch_object($produtos)) {
        $retorno[] = $linha;
    }

    echo json_encode($retorno);

    //fechar conecta
    mysqli_close($conecta);
?>