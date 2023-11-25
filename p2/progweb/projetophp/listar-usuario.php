<h1>Listar usuário</h1>

<?php

  $sql = "SELECT * FROM contatos";

  $response = $conn->query($sql);

  $quantidade = $response->num_rows;

  if($quantidade > 0 ) {

    print "<table>";
    print "<tr>";
    print "<th>ID</th>";
    print "<th>NOME</th>";
    print "<th>SOBRENOME</th>";
    print "<th>TELEFONE</th>";
    print "<th>EMAIL</th>";
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
      onclick=\"if(confirm('Tem certeza que deseja excluir?')){location.href='?page=utils&acao=excluir&id=".$row->id."';}
      else{false;}\"
      style='background-color:red' type='button'>Excluir</button></td>";

      print "</tr>";

    }

    print "</table>";

  } else {

    print "<script>alert('Nao foi possivel encontrar resultados');</script>";
    
  }

?>