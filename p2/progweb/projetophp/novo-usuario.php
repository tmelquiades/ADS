<div id="cadastro">
  <h1>Novo contato</h1>
  <form class="form" action="?page=utils" method="POST">
    <input type="hidden" name="acao" value="cadastrar">

    <div class="form_grupo">
      <label for="nome" class="form_label">Nome</label>
      <input type="text" name="nome" class="form_input" id="nome" placeholder="Nome" required>
    </div>

    <div class="form_grupo">
      <label for="sobrenome" class="form_label">Sobrenome</label>
      <input type="text" name="sobrenome" class="form_input" id="sobrenome" placeholder="Sobrenome" required>
    </div>

    <div class="form_grupo">
      <label for="telefone" class="form_label">Telefone</label>
      <input type="text" name="telefone" class="form_input" id="telefone" placeholder="(xx)xxxxxxxxx" required>
    </div>

    <div class="form_grupo">
      <label for="e-mail" class="form_label">Email</label>
      <input type="email" name="email" class="form_input" id="email" placeholder="seuemail@email.com" required>
    </div>

    <p>
      <input type="submit" value="Cadastrar" />
    </p>

  </form>
</div>