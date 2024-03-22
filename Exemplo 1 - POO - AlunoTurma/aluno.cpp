#include "aluno.h"
#include <string>

//GETTERS
int Aluno::getIdade() { return idade; }

std::string Aluno::getNome() { return nome; }

std::string Aluno::getCorDoCabelo() { return corDoCabelo; }

std::string Aluno::getApelido() { return apelido; }

int Aluno::getNota() { return nota; }

//SETTERS
void Aluno::setIdade(int novaIdade) { idade = novaIdade; }

void Aluno::setNome(const std::string &novoNome) { nome = novoNome; }

void Aluno::setCorDoCabelo(const std::string &novaCor) {
  corDoCabelo = novaCor;
}

void Aluno::setApelido(const std::string &novoApelido) {
  apelido = novoApelido;
}

void Aluno::setNota(int novaNota) { nota = novaNota; }
