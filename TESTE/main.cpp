#include "entidades.hpp"
#include <iostream>
#include <exception>

int main() {
    try {
        std::string cpf, nome, senha;

        std::cout << "Digite o CPF (11 dígitos): ";
        std::cin >> cpf;

        std::cout << "Digite o Nome (até 20 caracteres): ";
        std::cin.ignore();
        std::getline(std::cin, nome);

        std::cout << "Digite a Senha (6 caracteres): ";
        std::cin >> senha;

        Conta conta(cpf, nome, senha);
        conta.mostrarConta();

    } catch (const std::exception& e) {
        std::cout << "Erro: " << e.what() << std::endl;
    }

    return 0;
}

