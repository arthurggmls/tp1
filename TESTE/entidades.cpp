#include "entidades.hpp"
#include <iostream>
#include <stdexcept>

Conta::Conta(const std::string& cpf, const std::string& nome, const std::string& senha) {
    if (!Dominio::validarCpf(cpf)) throw std::invalid_argument("CPF inv�lido.");
    if (!Dominio::validarNome(nome)) throw std::invalid_argument("Nome inv�lido.");
    if (!Dominio::validarSenha(senha)) throw std::invalid_argument("Senha inv�lida.");

    this->cpf = cpf;
    this->nome = nome;
    this->senha = senha;
}

void Conta::mostrarConta() const {
    std::cout << "CPF: " << cpf << std::endl;
    std::cout << "Nome: " << nome << std::endl;
    std::cout << "Senha: " << senha << std::endl;
}

