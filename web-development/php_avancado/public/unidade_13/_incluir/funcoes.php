<?php
    function enviarMensagem($dados) {
        // Dados do formulario
        $nome_usuario       = $dados['nome'];
        $email_usuario      = $dados['email'];
        $mensagem_usuario   = $dados['mensagem'];

        // Criar variaveis de envio
        $destino        = "suporte@matizze.com.br";
        $remetente      = "From: matizze@matizze.com.br";
        $assunto        = "Mensagem do site";

        // Montar o corpo da mensagem
        $mensagem       = "O usuário " . $nome_usuario . " enviou uma mensagem." . "<br>";
        $mensagem       .= "email do usuário: " . $email_usuario . "<br>";
        $mensagem       .= "mensagem: " . "<br>";
        $mensagem       .= $mensagem_usuario;

        return mail($destino, $assunto, $mensagem, $remetente);
    }
?>