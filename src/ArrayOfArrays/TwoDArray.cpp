#include <string>
#include <vector>
#include <list>
#include <iostream>

#include "TwoDArray.h"

template <typename T>
TwoDArray<T>::TwoDArray() {

}

template <typename T>
TwoDArray<T>::~TwoDArray() {

}

template <typename T>
void TwoDArray<T>::insert(int r, int C, T value) {

}

template <typename T>
T TwoDArray<T>::access(int r, int c) {

}

template <typename T>
void TwoDArray<T>::remove(int r, int c) {

}

template <typename T>
void TwoDArray<T>::print() {

}

template <typename T>
int TwoDArray::getNumRows(){

}

template <typename T>
int TwoDArray::getNumCols(){

}

template class TwoDArray<int>;
template class TwoDArray<double>;
template class TwoDArray<std::string>;
