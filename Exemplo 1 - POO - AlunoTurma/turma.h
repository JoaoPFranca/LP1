#include "aluno.h"
#include <string>
#ifndef TURMA_H
#define TURMA_H

class Turma {
private:
  std::string componenteCurricular;
  std::string nome;
  Aluno* alunos[50];
  int quantidadeMatriculas;

public:
  Aluno** getAlunos();
  void setAluno(int index, Aluno *novoAluno);
  void deletarAluno(const std::string &nomeAluno);
  int getQuantidadeMatriculas();
  void setQuantidadeMatriculas(int novaQuantidade);
  std::string getComponenteCurricular();
  void setComponenteCurricular(const std::string &novoComponenteCurricular);
  std::string getNome();
  void setNome(const std::string &novoNome);
};

// Uma turma tem uma listagem de alunos

#endif