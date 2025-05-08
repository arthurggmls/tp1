#ifndef ENTIDADES_HPP
#define ENTIDADES_HPP

#include "dominios.hpp"
#include <string>

class Conta {
private:
    std::string cpf;
    std::string nome;
    std::string senha;

public:
    Conta(const std::string& cpf, const std::string& nome, const std::string& senha);
    void mostrarConta() const;
};

#endif // ENTIDADES_HPP

