#ifndef DOMINIOS_HPP
#define DOMINIOS_HPP

#include <string>

class Dominio {
public:
    static bool validarCpf(const std::string& cpf);
    static bool validarNome(const std::string& nome);
    static bool validarSenha(const std::string& senha);
};

#endif // DOMINIOS_HPP

