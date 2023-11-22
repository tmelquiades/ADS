<?php
    // Configuração do banco de dados
    $servername = "seu_servidor_mysql";
    $username = "seu_usuario_mysql";
    $password = "";
    $dbname = "agenda";

    // Conexão com o banco de dados
    $conn = new mysqli($servername, $username, $password, $dbname);

    // Verifica a conexão
    if ($conn->connect_error) {
        die("Falha na conexão com o banco de dados: " . $conn->connect_error);
    }

    // Operação CRUD
    if ($_SERVER["REQUEST_METHOD"] == "POST") {
        // Create
        if (isset($_POST["adicionar"])) {
            $nome = $_POST["nome"];
            $telefone = $_POST["telefone"];
            $email = $_POST["email"];

            $sql = "INSERT INTO contatos (nome, telefone, email) VALUES ('$nome', '$telefone', '$email')";
            if ($conn->query($sql) === TRUE) {
                echo "Contato adicionado com sucesso!";
            } else {
                echo "Erro ao adicionar contato: " . $conn->error;
            }
        }

        // Update
        elseif (isset($_POST["atualizar"])) {
            $id = $_POST["id"];
            $nome = $_POST["nome"];
            $telefone = $_POST["telefone"];
            $email = $_POST["email"];

            $sql = "UPDATE contatos SET nome='$nome', telefone='$telefone', email='$email' WHERE id=$id";
            if ($conn->query($sql) === TRUE) {
                echo "Contato atualizado com sucesso!";
            } else {
                echo "Erro ao atualizar contato: " . $conn->error;
            }
        }

        // Delete
        elseif (isset($_POST["excluir"])) {
            $id = $_POST["id"];

            $sql = "DELETE FROM contatos WHERE id=$id";
            if ($conn->query($sql) === TRUE) {
                echo "Contato excluído com sucesso!";
            } else {
                echo "Erro ao excluir contato: " . $conn->error;
            }
        }
    }

    // Read
    $sql = "SELECT * FROM contatos";
    $result = $conn->query($sql);

    echo "<h2>Agenda de Contatos</h2>";
    echo "<table border='1'><tr><th>ID</th><th>Nome</th><th>Telefone</th><th>Email</th><th>Ações</th></tr>";

    if ($result->num_rows > 0) {
        while ($row = $result->fetch_assoc()) {
            echo "<tr><td>" . $row["id"] . "</td><td>" . $row["nome"] . "</td><td>" . $row["telefone"] . "</td><td>" . $row["email"] . "</td>";
            echo "<td><form method='post' action=''>
                <input type='hidden' name='id' value='" . $row["id"] . "'>
                <input type='submit' name='atualizar' value='Atualizar'>
                <input type='submit' name='excluir' value='Excluir'>
                </form></td></tr>";
        }
    } else {
        echo "<tr><td colspan='5'>Nenhum contato encontrado.</td></tr>";
    }

    echo "</table>";

    // Fecha a conexão com o banco de dados
    $conn->close();
?>
