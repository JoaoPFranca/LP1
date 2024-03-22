#include <string>
#ifndef ALUNO_H
#define ALUNO_H

class Aluno {
private:
  int idade;
  std::string nome;
  std::string corDoCabelo;
  std::string apelido;
  int nota;

public:
  int getIdade();
  std::string getNome();
  std::string getCorDoCabelo();
  std::string getApelido();
  int getNota();
  void setIdade(int novaIdade);
  void setNome(const std::string &novoNome);
  void setCorDoCabelo(const std::string &novaCor);
  void setApelido(const std::string &novoApelido);
  void setNota(int nota);
};

#endif