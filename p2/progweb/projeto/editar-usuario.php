<!DOCTYPE html>
<html lang="pt-br">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Editar contato</title>
    <link rel="stylesheet" href="styleform.css">
</head>
<body>

    <h1>Editar contato</h1>
    <?php 
        $id = $_REQUEST["id"];
        $sql = "SELECT * FROM contatos WHERE id = " . $id;
        $res = $conn->query($sql);

        if ($res && $res->num_rows > 0) {
            $row = $res->fetch_object();
    ?>
    <form action="?page=salvar-usuario" method="POST">
        <input type="hidden" name="acao" value="editar">
        <input type="hidden" name="id" value="<?php echo $row->id; ?>">
        <div> 
            <label>Nome</label>
            <input type="text" name="nome" value="<?php echo $row->nome; ?>">
        </div>
        <div> 
            <label>Sobrenome</label>
            <input type="text" name="sobrenome" value="<?php echo $row->sobrenome; ?>">
        </div>
        <div> 
            <label>Telefone</label>
            <input type="text" name="telefone" value="<?php echo $row->telefone; ?>">
        </div>
        <div> 
            <label>Email</label>
            <input type="email" name="email" value="<?php echo $row->email; ?>">
        </div>
        <div> 
            <button type="submit">Salvar</button>
        </div>
    </form>
    <?php 
        } else {
            echo "Contato não encontrado.";
        }
    ?>
</body>
</html>
