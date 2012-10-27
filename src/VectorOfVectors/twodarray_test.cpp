#include <iostream>
#include <string>
#include <vector>
#include "TwoDArray.h"

using std::vector;
using std::string;
using std::cout;
using std::endl;

int main() {
  TwoDArray<int>* l = new TwoDArray<int>(10, 10);
  TwoDArray<string>* s = new TwoDArray<string>(20, 20);

  l->insert(5, 9, 5);
  l->insert(1, 1, 100);
  l->insert(7, 2, 99999);

  l->print();


  s->insert(1, 1, "hello world!");
  s->insert(19, 19, "hi");
  s->insert(5, 10, "apple");
  s->insert(4, 16, "banana");

  s->print();


  return 0;
}
