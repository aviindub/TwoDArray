#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>
#include "TwoDArray.h"

using namespace std;

template <typename T>
TwoDArray<T>::TwoDArray(int r, int c) {
    assert(r > 0 && c > 0);
    theArray = vector< vector<T> >() ;
    for (int i = 0; i < r; ++i) {
        theArray.push_back(vector<T>(c, defaultValue));
    }
}

template <typename T>
TwoDArray<T>::~TwoDArray() {
}

template <typename T>
void TwoDArray<T>::insert(int r, int c, T value) {
    assert(r < getNumRows() && r >= 0);
    assert(c < getNumCols() && c >= 0);
    theArray[r][c] = value;
}

template <typename T>
T TwoDArray<T>::access(int r, int c) {
    assert(r < getNumRows() && r >= 0);
    assert(c < getNumCols() && c >= 0);
    return theArray[r][c];
}

template <typename T>
void TwoDArray<T>::remove(int r, int c) {
    assert(r < getNumRows() && r >= 0);
    assert(c < getNumCols() && c >= 0);
    theArray[r][c] = defaultValue;
}

template <typename T>
void TwoDArray<T>::print() {
    for (int r = 0; r < getNumRows(); ++r) {
        std::cout << "[ ";
        for (int c = 0; c < getNumCols(); ++c) {
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
    return theArray.size();
}

template <typename T>
int TwoDArray<T>::getNumCols(){
    return theArray[0].size();
}

template class TwoDArray<int>;
template class TwoDArray<double>;
template class TwoDArray<std::string>;
