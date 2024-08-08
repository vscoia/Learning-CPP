#include "stack.h"
#include <iostream>
using namespace std;

Stack::Stack()    // Construtor
{
  length = 0;
  structure = new ItemType[MAX_ITEMS];
}

Stack::~Stack()   // Destrutor
{
  delete [] structure;
}

bool  Stack::isEmpty() const    // Verifica se a pilha está vazia
{
  return (length == 0);
}

bool Stack::isFull() const    // Verifica se a pilha está cheia
{
  return (length == MAX_ITEMS);
}

void Stack::push(ItemType item)   // Adiciona um item na pilha
{
  if (!isFull()){
    structure[length] = item;
    length++;
  } else {
    throw "Stack is already full!";
  }
}

ItemType Stack::pop()   // Remove o último(last) item da pilha
{
  if (!isEmpty()){
    ItemType aux = structure[length - 1];
    length--;
    return aux;
  } else {
    throw "Stack is empty!";
  }
}

void Stack::print() const   // Imprime pilha
{
  cout << "Pilha = ";
  for (int i = 0; i < length; i++) {
    cout << structure[i];
  }
  cout << endl;
}
