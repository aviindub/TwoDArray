#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>
#include "TwoDArray.h"
#include "Node.h"

template <typename T>
TwoDArray<T>::TwoDArray(int r, int c) {
    assert(r > 0 && c > 0);
    left = new Node<T>* [r];
    top = new Node<T>* [c];
    numRows = r;
    numCols = c;
    for (int i = 0; i < r; ++i) {
        left[i] = 0;
    }
    for (int i = 0; i < c; ++i) {
        top[i] = 0;
    }
    defaultValue = *(new T);
}

template <typename T>
TwoDArray<T>::~TwoDArray() {
    for (int i = 0; i < getNumRows(); ++i) {
        Node<T>* curr = left[i];
        while (curr != 0) {
            Node<T>* toDelete = curr;
            curr = curr->getNextInRow();
            delete toDelete;
        }
    }
    delete left;
    delete top;
}

template <typename T>
void TwoDArray<T>::insert(int r, int c, T value) {

    assert(r < getNumRows() && r >= 0);
    assert(c < getNumCols() && c >= 0);

    Node<T>* newNode = new Node<T>(r, c, value);
    Node<T>* currInRow = left[r];
    Node<T>* prevInRow = 0;
    if (currInRow == 0 || c < currInRow->getColAddr()) {
        //row is empty, or newnode column is less than first item in row
        newNode->setNextInRow(currInRow);
        left[r] = newNode;
    } else {
        while (currInRow != 0) {
            if (c == currInRow->getColAddr()) {
                //found node with same row & col addr...replace
                prevInRow->setNextInRow(newNode);
                newNode->setNextInRow(currInRow->getNextInRow());
                break;
            } else if (c > currInRow->getColAddr()) {
                if (currInRow->getNextInRow() == 0) {
                    //col > last in row
                    currInRow->setNextInRow(newNode);
                    break;
                } else if (c < currInRow->getNextInRow()->getColAddr()) {
                    //found connected nodes that newNode goes between
                    newNode->setNextInRow(currInRow->getNextInRow());
                    currInRow->setNextInRow(newNode);
                    break;
                }
            prevInRow = currInRow;
            currInRow = currInRow->getNextInRow();
            }
        }
    }
}

template <typename T>
T TwoDArray<T>::access(int r, int c) {

    assert(r < getNumRows() && r >= 0);
    assert(c < getNumCols() && c >= 0);

    Node<T>* curr = left[r];
    while (curr != 0) {
        if (r == curr->getRowAddr() && c == curr->getColAddr()) {
            return curr->getValue();
        }
        curr = curr->getNextInRow();
    }
    return defaultValue;
}

template <typename T>
void TwoDArray<T>::remove(int r, int c) {

    assert(r < getNumRows() && r >= 0);
    assert(c < getNumCols() && c >= 0);
    
    Node<T>* currInRow = left[r];
    Node<T>* currInCol = top[c];
    Node<T>* prevInRow = 0;
    Node<T>* prevInCol = 0;

    while (currInRow != 0) {
        if (currInRow->getColAddr() == c) {
            if (prevInRow != 0) {
                prevInRow->setNextInRow(currInRow->getNextInRow());
            } else { //match is first on the row
                left[r] = currInRow->getNextInRow();
            }
        }
        prevInRow = currInRow;
        currInRow = currInRow->getNextInRow();
    }
    while (currInCol != 0) {
        if (currInCol->getRowAddr() == c) {
            if (prevInCol != 0) {
                prevInCol->setNextInCol(currInCol->getNextInCol());
            } else { //match is first on the row
                left[r] = currInCol->getNextInCol();
            }
        }
        prevInCol = currInCol;
        currInCol = currInCol->getNextInCol();
    }
    if (currInCol != 0) {
        delete currInCol;
    }
}

template <typename T>
void TwoDArray<T>::print() {
    for (int i = 0; i < getNumRows(); ++i) {
        T* row = new T[getNumCols()];
        Node<T>* curr = left[i];
        while (curr != 0) {
            row[curr->getColAddr()] = curr->getValue();
            curr = curr->getNextInRow();
        }
        std::cout << "[ ";
        for (int j = 0; j < getNumCols(); ++j) {
            if (row[j] == defaultValue) {
                std::cout << " , ";
            } else {
                std::cout << row[j] << ", ";
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
