#ifndef __TWO_D_ARRAY_H__
#define __TWO_D_ARRAY_H__

#include "Node.h"

template <typename T>
class LinkedList {
 private:
  Node<T>* top;
  Node<T>* left;
  int numRows;
  int numCols;
  T defaultValue;

 public:
  TwoDArray<T>();
  ~TwoDArray<T>();
  void insert(int r, int c, T value);
  T access(int r, int c);
  void remove (int r, int c);
  void print();
  int getNumRows();
  int getNumCols();
};

#endif
