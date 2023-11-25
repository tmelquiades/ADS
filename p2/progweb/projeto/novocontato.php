<!DOCTYPE html>
<html lang="pt-br">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Novo Contato</title>
    <link rel="stylesheet" href="styleform.css">
</head>
<body>

    <h1>Novo Contato</h1>
    <form action="?page=salvar-usuario" method="POST">
        <input type="hidden" name="acao" value="cadastrar">
        <div> 
            <label>Nome</label>
            <input type="text" name="nome">
        </div>
        <div> 
            <label>Sobrenome</label>
            <input type="text" name="sobrenome">
        </div>
        <div> 
            <label>Telefone</label>
            <input type="text" name="telefone">
        </div>
        <div> 
            <label>Email</label>
            <input type="email" name="email">
        </div>
        <div> 
            <button type="submit">Salvar</button>
        </div>
    </form>

</body>
</html>
