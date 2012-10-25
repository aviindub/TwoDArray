#include <string>
#include "Node.h"

template <typename T>
Node<T>::Node(T v) {
  value = v;
  nextRight = 0;
  nextUnder = 0;
}

template <typename T>
T Node<T>::getValue() {
  return value;
}

template <typename T>
Node<T>*& Node<T>::getNextRight() {
  return nextRight;
}

template <typename T>
Node<T>*& Node<T>::getNextUnder() {
  return nextUnder;
}

template <typename T>
void Node<T>::setNextRight(Node<T>& n) {
  nextRight = &n;
}

template <typename T>
void Node<T>::setNextUnder(Node<T>& n) {
  nextUnder = &n;
}

template class Node<int>;
template class Node<double>;
template class Node<std::string>;

