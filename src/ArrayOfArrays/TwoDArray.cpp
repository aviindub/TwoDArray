#include <string>
#include <vector>
#include <list>
#include <iostream>

#include "TwoDArray.h"

template <typename T>
TwoDArray<T>::TwoDArray(int r, int c) {
    numRows = r;
    numCols = c;
    theArray = new T*[r];
    for (int i = 0; i < r; ++i) {
        theArray[i] = new T[c];
    }
    defaultValue = theArray[0][0];
}

template <typename T>
TwoDArray<T>::~TwoDArray() {
    for (int i = 0; i < numRows; ++i) {
        delete theArray[i];
    }
    delete theArray;
}

template <typename T>
void TwoDArray<T>::insert(int r, int c, T value) {
    theArray[r][c] = value;
}

template <typename T>
T TwoDArray<T>::access(int r, int c) {
    return theArray[r][c];
}

template <typename T>
void TwoDArray<T>::remove(int r, int c) {
    theArray[r][c] = defaultValue;
}

template <typename T>
void TwoDArray<T>::print() {
    for (int r = 0; r < numRows; ++r) {
        std::cout << "[ ";
        for (int c = 0; c < numCols; ++c) {
            T value = theArray[r][c];
            if (value == defaultValue) {
                std::cout << " , ";
            } else {
                std::cout << value << ", ";
            }
        }
        std::cout << "]" << std::endl;
    }
}

template <typename T>
int TwoDArray<T>::getNumRows(){
    return numRows;
}

template <typename T>
int TwoDArray<T>::getNumCols(){
    return numCols;
}

template class TwoDArray<int>;
template class TwoDArray<double>;
template class TwoDArray<std::string>;
