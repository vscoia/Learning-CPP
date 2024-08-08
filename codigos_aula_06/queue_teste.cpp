#include "queue.h"
#include <iostream>

using namespace std;

int main() {
  char character;
  Queue queue;
  char queueChar;
  cout << "Adicione uma String." << endl;
  cin.get(character);
  while (character != '\n' and !queue.isFull())   // Enfileira
    {
      queue.enqueue(character);
      cin.get(character);
    }
  while (!queue.isEmpty())    // Desenfileira
    {
      queueChar = queue.dequeue();
      cout << queueChar;
    }
  cout << endl;
}
