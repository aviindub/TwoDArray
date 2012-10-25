#ifndef __NODE_H__
#define __NODE_H__

template <typename T>
class Node {
 private:
  T value;
  Node<T>* nextRight;
  Node<T>* nextUnder;

 public:
  Node<T>(T v);
  T getValue();
  Node<T>*& getNextRight();
  void setNextRight(Node<T>& n);
  Node<T>*& getNextUnder();
  void setNextUnder(Node<T>& n);

};
#endif
