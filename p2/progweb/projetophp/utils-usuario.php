<?php

switch ($_REQUEST["acao"]) {
	case 'cadastrar':
		$nome = $_POST["nome"];
		$sobrenome = $_POST["sobrenome"];
		$telefone = $_POST["telefone"];
		$email = $_POST["email"];

		$sql = "INSERT INTO contatos (nome, email, telefone, data_nascimento, senha) 
						VALUES ('{$nome}', '{$sobrenome}', '{$telefone}','{$email}')";

		$response = $conn->query($sql);
		if($response == true) {
			print "<script>alert('Cadastro realizado com sucesso');</script>";
			print "<script>location.href='?page=listar';</script>";
		} else {
			print "<script>alert('Nao foi possivel cadastrar');</script>";
			print "<script>location.href='?page=index';</script>";
		};
		break;
	case 'editar':
		$nome = $_POST["nome"];
		$sobrenome = $_POST["sobrenome"];
		$telefone = $_POST["telefone"];
		$email = $_POST["email"];

		$sql = "UPDATE contatos SET nome='{$nome}', sobrenome='{$sobrenome}', telefone='{$telefone}', email='{$email}'
					WHERE id=".$_REQUEST["id"];

		$response = $conn->query($sql);

		if($response == true) {
			print "<script>alert('Edicao realizada com sucesso');</script>";
			print "<script>location.href='?page=listar';</script>";
		}else {
			print "<script>alert('Nao foi possivel editar');</script>";
			print "<script>location.href='?page=listar';</script>";
		};

		break;
	case 'excluir':
		$sql = "DELETE FROM contatos WHERE id=".$_REQUEST["id"];

		$response = $conn->query($sql);

		if($response == true) {
			print "<script>alert('Excluido com sucesso');</script>";
			print "<script>location.href='?page=listar';</script>";
		}else {
			print "<script>alert('Nao foi possivel excluir');</script>";
			print "<script>location.href='?page=listar';</script>";
		};
		break;
		case 'buscar':
			if (isset($_GET['id'])) {
				$id = $_GET['id'];
				$query = "SELECT * FROM contatos WHERE id =$id";
				$response = $conn->query($query);
				$quantidade = $response->num_rows;
				
				if($quantidade > 0 ) {
						print "<h1>Usuário obtido com sucesso</h1>";
						print "<table>";
            print "<tr>";
            print "<th>ID</th>";
            print "<th>NOME</th>";
			print "<th>SOBRENOME</th>";
            print "<th>TELEFONE</th>";
            print "<th>EMAIL</th>";
            print "<th>AÇÕES</th>";
            print "</tr>";
						while($row = $response->fetch_object()){
							print "<tr>";
							print "<td>".$row->id."</td>";
							print "<td>".$row->nome."</td>";
							print "<td>".$row->sobrenome."</td>";
							print "<td>".$row->telefone."</td>";
							print "<td>".$row->email."</td>";
				
							print "<td><button onclick=\"location.href='?page=editar&id=".$row->id."';\" 
							style='background-color:green' type='button'>Editar</button></td>";
							
							print "<td><button 
							onclick=\"if(confirm('Tem certeza que deseja excluir?')){location.href='?page=salvar&acao=excluir&id=".$row->id."';}
							else{false;}\"
							style='background-color:red' type='button'>Excluir</button></td>";
				
							print "</tr>";
						}
						print "</table>";
					}else {
						print "<h1>Nenhum contato encontrado.</h1>";
					}
		
				$response->close();
		}
			break;
}
