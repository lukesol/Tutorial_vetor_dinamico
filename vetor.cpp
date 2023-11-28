#include "vetor.h"

Vetor::Vetor(int tam) {
  this->elementos = new int[tam];
  this->tam = tam;

  for (int i = 0; i < tam; i++) {
    this->elementos[i] = 0;
  }
}

Vetor::Vetor(int tam, int* arr) {
  this->elementos = arr;
  this->tam = tam;
}

Vetor::~Vetor() {
  delete[] elementos;
}

int Vetor::get_tam() { 
  return this->tam; 
}

void Vetor::set_tam(int tam) { 
  this->tam = tam; 
}

int Vetor::consult(int pos) {
  return this->elementos[pos];
}

void Vetor::del(int pos) {
  if (pos >= 0 && pos <= this->tam) { //Verificando se a pos esta no vetor
    for (int i = pos; i < this->tam - 1; i++) { //Deslocando os elementos
      this->elementos[i] = this->elementos[i + 1];
    }
  }  
}

int Vetor::search(int num) {
  for (int i = 0; i < this->tam; i++) {
    if (this->elementos[i] == num) {
      return i;
    }
  }

  return -1;
}

void Vetor::replace(int num, int pos) {
  this->elementos[pos] = num;
}

void Vetor::push_front(int num) {
  int* novoVetor = new int[tam + 1];
  novoVetor[0] = num;

  for (int i = 0; i < tam; i++) {
    novoVetor[i + 1] = this->elementos[i];
  }

  delete[] this->elementos;
  this->elementos = novoVetor;
  this->tam++;
}

void Vetor::push_back(int num) {
  this->tam++;
  this->elementos[tam-1] = num;
}

void Vetor::pop_front() {
  del(0);
}

void Vetor::pop_back() {
  del(tam-1);
}  
