<div id="editar">
  <?php
    $sql = "SELECT * FROM contatos WHERE id=" . $_REQUEST["id"];

    $response = $conn->query($sql);

    $row = $response->fetch_object();

  ?>

  <h1>Editar usuário</h1>

  <form class="form" action="?page=utils" method="POST">
    <input type="hidden" name="acao" value="editar">
    <input type="hidden" name="id" value="<?php print $row->id; ?>">

    <div class="form_grupo">
      <label for="nome" class="form_label">Nome</label>
      <input type="text" name="nome" value="<?php print $row->nome; ?>" class="form_input" id="nome" placeholder="Nome" required>
    </div>

    <div class="form_grupo">
      <label for="sobrenonome" class="form_label">Sobrenome</label>
      <input type="text" name="sobrenome" value="<?php print $row->sobrenome; ?>" class="form_input" id="sobrenome" placeholder="Sobrenome" required>
    </div>

    <div class="form_grupo">
      <label for="telefone" class="form_label">Telefone</label>
      <input type="text" name="telefone" value="<?php print $row->telefone; ?>" class="form_input" id="telefone" placeholder="(xx)xxxxxxxxx" required>
    </div>

    <div class="form_grupo">
      <label for="e-mail" class="form_label">Email</label>
      <input type="email" name="email" value="<?php print $row->email; ?>" class="form_input" id="email" placeholder="seuemail@email.com" required>
    </div>

    <p>
      <input type="submit" value="Salvar" />
    </p>

  </form>
</div>