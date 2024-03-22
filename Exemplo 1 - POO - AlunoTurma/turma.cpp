#include "turma.h"
#include <iostream>
#include <string>

std::string Turma::getComponenteCurricular() { 
  return componenteCurricular; 
}
void Turma::setComponenteCurricular(const std::string &novoComponenteCurricular) {
 componenteCurricular = novoComponenteCurricular;
}

std::string Turma::getNome() { 
  return nome; 
}
void Turma::setNome(const std::string &novoNome) { 
  nome = novoNome; 
}

Aluno **Turma::getAlunos() { 
  return alunos; 
}
void Turma::setAluno(int index, Aluno *novoAluno) { 
  alunos[index] = novoAluno; 
}

void Turma::deletarAluno(const std::string &nomeAluno) {
  for (int i = 0; i < quantidadeMatriculas; ++i) {
    if (alunos[i]->getNome() == nomeAluno) {
      delete alunos[i];
      //Colocando cada objeto uma posição a frente no array.
      for (int j = i; j < quantidadeMatriculas - 1; ++j) {
        alunos[j] = alunos[j + 1];
      }
      quantidadeMatriculas--;
      return;
    }
  }
}


int Turma::getQuantidadeMatriculas() { 
  return quantidadeMatriculas; 
}
void Turma::setQuantidadeMatriculas(int novaQuantidade) {
  quantidadeMatriculas = novaQuantidade;
}
