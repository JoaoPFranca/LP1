#include "aluno.h"
#include "turma.h"
#include <iostream>
#include <string>

void listarAlunos(Turma &turma) {
  int opcao;

  std::cout << "Detalhes dos Alunos Cadastrados na Turma:" << std::endl;
  std::cout << "-----------------------" << std::endl;
  for (int i = 0; i < turma.getQuantidadeMatriculas(); i++) {
    Aluno *aluno = turma.getAlunos()[i];

    std::cout << "Aluno número: " << i + 1 << std::endl;
    std::cout << "Nome: " << aluno->getNome() << std::endl;
    std::cout << "Idade: " << aluno->getIdade() << std::endl;
    std::cout << "Apelido: " << aluno->getApelido() << std::endl;
    std::cout << "Cor do cabelo: " << aluno->getCorDoCabelo() << std::endl;
    std::cout << "Nota: " << aluno->getNota() << std::endl;
    std::cout << "-----------------------" << std::endl;
  }

  std::cout << std::endl;
  std::cout << "-----------------------" << std::endl;
  std::cout << "Deseja excluir algum aluno da turma?" << std::endl;
  std::cout << "1 - Sim" << std::endl;
  std::cout << "2 - Não" << std::endl;
  std::cin >> opcao;
  if (opcao == 1) {
    std::string nomeAluno;
    std::cout << "Digite o nome do aluno que deseja excluir: ";
    std::cin >> nomeAluno;
    turma.deletarAluno(nomeAluno);
    listarAlunos(turma);
  }
}

void adicionarAluno(Turma &turma) {
  int numeroAlunos = 0, idade, nota;
  std::string nome, corDoCabelo, apelido;

  std::cout << "Digite quantos alunos deseja cadastrar:" << std::endl;
  std::cin >> numeroAlunos;
  std::cin.ignore();

  Aluno **alunos = new Aluno *[numeroAlunos];

  for (int i = 0; i < numeroAlunos; i++) {
    std::cout << "---------- Novo Aluno ----------" << std::endl;
    std::cout << "Digite a idade do aluno:" << std::endl;
    std::cin >> idade;
    std::cin.ignore();
    std::cout << "Digite o nome do aluno:" << std::endl;
    std::getline(std::cin, nome);
    std::cout << "Digite a cor do cabelo do aluno:" << std::endl;
    std::getline(std::cin, corDoCabelo);
    std::cout << "Digite o apelido do aluno:" << std::endl;
    std::getline(std::cin, apelido);
    std::cout << "Digite a nota do aluno:" << std::endl;
    std::cin >> nota;
    std::cin.ignore();

    alunos[i] = new Aluno;
    alunos[i]->setIdade(idade);
    alunos[i]->setNome(nome);
    alunos[i]->setApelido(apelido);
    alunos[i]->setCorDoCabelo(corDoCabelo);
    alunos[i]->setNota(nota);

    turma.setAluno(i, alunos[i]);
    turma.setQuantidadeMatriculas(i + 1);
  }

  std::cout << "---------- Aluno adicionado! ----------" << std::endl;
  listarAlunos(turma);
}

int main() {
  std::string componenteCurricular, nomeTurma;

  Turma turma;
  std::cout << "Digite o nome da turma:" << std::endl;
  std::getline(std::cin, nomeTurma);
  std::cout << "Digite o componente curricular da turma:" << std::endl;
  std::getline(std::cin, componenteCurricular);

  turma.setNome(nomeTurma);
  turma.setComponenteCurricular(componenteCurricular);

  adicionarAluno(turma);

  return 0;
}
