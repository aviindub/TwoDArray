#ifndef __NODE_H__
#define __NODE_H__

template <typename T>
class Node {
 private:
  T value;
  Node<T>* nextInRow;
  Node<T>* nextInCol;
  int rowAddr;
  int colAddr;

 public:
  Node<T>(int r, int c, T v);
  T getValue();
  Node<T>* getNextInRow();
  void setNextInRow(Node<T>* n);
  Node<T>* getNextInCol();
  void setNextInCol(Node<T>* n);
  int getRowAddr();
  int getColAddr();
};
#endif
