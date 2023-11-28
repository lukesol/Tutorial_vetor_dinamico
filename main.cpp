#include <iostream>
#include "vetor.h"
using namespace std;

int main() {
  Vetor vetor(1);
  vetor.replace(10, 0);
  
  cout << ">>> Vetor inicial: ";
  for (int i = 0; i < vetor.get_tam(); i++) {
    cout << vetor.consult(i) << " ";
  }
  cout << endl;

  // Teste do push_back
  vetor.push_back(10);
  vetor.push_back(20);
  cout << ">>> Vetor após push_back: ";
  for (int i = 0; i < vetor.get_tam(); i++) {
    cout << vetor.consult(i) << " ";
  }
  std::cout << std::endl;

  // Teste do push_front
  vetor.push_front(5);
  cout << ">>> Vetor após push_front: ";
  for (int i = 0; i < vetor.get_tam(); i++) {
    cout << vetor.consult(i) << " ";
  }
  cout << endl;

  // Teste do pop_back
  vetor.pop_back();
  cout << ">>> Vetor após pop_back: ";
  for (int i = 0; i < vetor.get_tam(); i++) {
    cout << vetor.consult(i) << " ";
  }
  cout << endl;

  // Teste do pop_front
  vetor.pop_front();
  cout << ">>> Vetor após pop_front: ";
  for (int i = 0; i < vetor.get_tam(); i++) {
    cout << vetor.consult(i) << " ";
  }
  cout << endl;

  // Teste de replace
  vetor.replace(100, 1);
  cout << ">>> Vetor após replace: ";
  for (int i = 0; i < vetor.get_tam(); i++) {
    cout << vetor.consult(i) << " ";
  }
  cout << endl;

  // Teste de search
  int pos = vetor.search(100);
  if (pos != -1) {
    cout << ">>> O elemento 100 está na posição " << pos << endl;
  } else {
    cout << ">>> O elemento 100 não foi encontrado no vetor." << endl;
  }

  return 0;
}
