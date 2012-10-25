#include <iostream>
#include <string>

#include "Node.h"

int main() {
  Node<int>* i = new Node<int>(5);
  Node<double>* d = new Node<double>(3.156);
  Node<std::string>* s = new Node<std::string>(std::string("hello world!"));

  std::cout << i->getValue() << std::endl;
  std::cout << d->getValue() << std::endl;
  std::cout << s->getValue() << std::endl;


  Node<int>* i2 = new Node<int>(6);
  Node<int>* i3 = new Node<int>(7);

  i->setNext(*i2);
  i->getNext()->setNext(*i3);

  Node<int>* curr = i;
  std::cout << "[ ";
  while(curr != 0) {
    std::cout << curr->getValue();
    curr = curr->getNext();
    if (curr != 0) {
      std::cout << ", ";
    }
  }
  std::cout << " ]" << std::endl;

  return 0;
}
