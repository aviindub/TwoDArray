#include <string>
#include "Node.h"

template <typename T>
Node<T>::Node(int r, int c, T v) {
    value = v;
    nextInRow = 0;
    nextInCol = 0;
    rowAddr = r;
    colAddr = c;
}

template <typename T>
T Node<T>::getValue() {
    return value;
}

template <typename T>
Node<T>* Node<T>::getNextInRow() {
    return nextInRow;
}

template <typename T>
Node<T>* Node<T>::getNextInCol() {
    return nextInCol;
}

template <typename T>
void Node<T>::setNextInRow(Node<T>* n) {
    nextInRow = n;
}

template <typename T>
void Node<T>::setNextInCol(Node<T>* n) {
    nextInCol = n;
}

template <typename T>
int Node<T>::getRowAddr() {
    return rowAddr;
}

template <typename T>
int Node<T>::getColAddr() {
    return colAddr;
}

template class Node<int>;
template class Node<double>;
template class Node<std::string>;

