/*Criação do banco de dados*/
CREATE DATABASE IF NOT EXISTS agenda;

/*Seleção do banco de dados*/
USE agenda;

/*Criação da tabela de contatos*/
CREATE TABLE IF NOT EXISTS contatos (
    id INT AUTO_INCREMENT PRIMARY KEY,
    nome VARCHAR(255) NOT NULL,
    telefone VARCHAR(15),
    email VARCHAR(255)
);

/*Inserção de alguns dados iniciais (opcional)*/
INSERT INTO contatos (nome, telefone, email) VALUES
    ('Fulano de Tal', '123456789', 'fulano@example.com'),
    ('Ciclano da Silva', '987654321', 'ciclano@example.com');
