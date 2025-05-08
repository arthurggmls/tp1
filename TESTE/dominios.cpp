#include "dominios.hpp"
#include <cctype>

bool Dominio::validarCpf(const std::string& cpf) {
    if (cpf.size() != 11) return false;
    for (char c : cpf) {
        if (!isdigit(c)) return false;
    }
    return true;
}

bool Dominio::validarNome(const std::string& nome) {
    if (nome.size() > 20) return false;
    for (size_t i = 0; i < nome.size(); ++i) {
        if (nome[i] == ' ' && i + 1 < nome.size() && nome[i + 1] == ' ') return false;
    }
    return true;
}

bool Dominio::validarSenha(const std::string& senha) {
    if (senha.size() != 6) return false;

    bool temDigito = false, temMaiuscula = false, temMinuscula = false, temEspecial = false;

    for (char c : senha) {
        if (isdigit(c)) temDigito = true;
        else if (isupper(c)) temMaiuscula = true;
        else if (islower(c)) temMinuscula = true;
        else if (c == '#' || c == '$' || c == '%' || c == '&' || c == '!' || c == '@' || c == '*') temEspecial = true;
    }

    for (size_t i = 0; i < senha.size(); ++i) {
        for (size_t j = i + 1; j < senha.size(); ++j) {
            if (senha[i] == senha[j]) return false;
        }
    }

    return temDigito && temMaiuscula && temMinuscula && temEspecial;
}

