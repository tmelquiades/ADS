<!DOCTYPE html>

<head>
	<meta charset="UTF-8" />
	<meta http-equiv="X-UA-Compatible" content="IE=edge" />
	<meta name="viewport" content="width=device-width, initial-scale=1.0" />
	<link rel="stylesheet" href="css/style.css" />
	<title>Agenda de Contatos</title>
</head>

<body>
	<nav class="navbar">
		<!-- LOGO -->
		<div class="logo">Agenda de Contatos</div>

		<!-- NAVIGATION MENU -->
		<ul class="nav-links">
			<!-- NAVIGATION MENUS -->
			<div class="menu">

				<li><a href="index.php">Home</a></li>
				<li><a href="?page=novo">Cadastrar contato</a></li>
				<li><a href="?page=listar">Listar contatos</a></li>
				<li><a href="?page=buscar">Buscar contato</a></li>
			</div>
		</ul>
	</nav>

	<div class="container">
		<div class="row">
			<div class="col mt-5">
				<?php
					include("config.php");
					switch (@$_REQUEST["page"]) {
						case "novo":
							include("novo-usuario.php");
							break;
						case "listar":
							include("listar-usuario.php");
							break;
						case "buscar":
							include("buscar-usuario.php");
							break;
						case "utils":
							include("utils-usuario.php");
							break;
						case "editar":
							include("editar-usuario.php");
							break;
						default:
							print("<h1>Bem vindo!</h1>");
					}
				?>
			</div>
		</div>
	</div>

</body>

</html>
