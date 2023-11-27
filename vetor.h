#ifndef VETOR_H
#define VETOR_H

#include <iostream>

class Vetor {
private:
  int* elementos;
  int tam;

public:
  Vetor(int tam);  //Construtor
  Vetor(int tam, int *arr);  //Construtor com array
  ~Vetor();  //Destrutor

  //Getters e setters
  int get_tam();
  int *get_vet();
  void set_tam(int tam);
  void set_vet(int *arr);

  //Pede uma posicao e retorna o elemento nela
  int consult(int pos); 
  //Pede uma posicao e deleta o elemento nela
  void del(int pos); 
  //Pede um elemento e procura no vetor retornando a posicao e -1 caso contrario
  int search(int num); 
  //Substitui o elemento em uma posicao por um elemento dado
  void replace(int num, int pos);

  //Insire o elemento na primeira posicao
  void push_front(int num); 
  //Insere o elemento na ultima posicao
  void push_back(int num);  

  //Remove o elemento na ultima posicao
  void pop_front(int num);  
  //Remove o elemento na primeira posicao
  void pop_back(int num);  
  
};

#endif 