typedef char ItemType;
/*
 Estrutura usada para guardar 
 a informação e o endereço do 
 próximo elemento.
*/
struct NodeType // Estrutura que ajuda a unir diferentes variáveis em um bloco
{
  ItemType info;
  NodeType* next;
};

