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

int *Vetor::get_vet() {
  return this->elementos;
}

void Vetor::set_tam(int tam) { 
  this->tam = tam; 
}

void Vetor::set_vet(int *arr) {
  this->elementos = arr;
}

int Vetor::consult(int pos) {
  return this->elementos[pos];
}

void Vetor::del(int pos) {
  
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
  
}

void Vetor::push_back(int num) {
  
}


void Vetor::pop_front(int num) {
  this->elementos[0];
}

void Vetor::pop_back(int num) {
  this->elementos[this->tam];
}  