/* unit tests for TwoDArray public API
 public:
  TwoDArray<T>(int r, int c);
  ~TwoDArray<T>();
  void insert(int r, int c, T value);
  T access(int r, int c);
  void remove (int r, int c);
  void print();
  int getNumRows();
  int getNumCols();
*/

#include "gtest/gtest.h"
#include "../src/SparseArray/TwoDArray.h"

using std::string;


//TwoDArray<T>(int r, int c);

TEST(constructor, integerTest) {
    int r = 10;
    int c = 10;
    TwoDArray<int>* a = new TwoDArray<int>(r, c)
    EXPECT_EQ(r, a->getNumRows());
    EXPECT_EQ(c, a->getNumCols());
    delete a;
}

TEST(constructor, doubleTest) {
    int r = 10;
    int c = 10;
    TwoDArray<double>* a = new TwoDArray<double>(r, c)
    EXPECT_EQ(r, a->getNumRows());
    EXPECT_EQ(c, a->getNumCols());
    delete a;
}

TEST(constructor, stringTest) {
    int r = 10;
    int c = 10;
    TwoDArray<string>* a = new TwoDArray<string>(r, c)
    EXPECT_EQ(r, a->getNumRows());
    EXPECT_EQ(c, a->getNumCols());
    delete a;
}

//void insert(int r, int c, T value);

TEST(insert, integerTest) {
    int r = 10;
    int c = 10;
    TwoDArray<int>* a = new TwoDArray<int>(r, c)
    delete a;
}

TEST(insert, doubleTest) {
    int r = 10;
    int c = 10;
    TwoDArray<double>* a = new TwoDArray<double>(r, c)
    delete a;
}

TEST(insert, stringTest) {
    int r = 10;
    int c = 10;
    TwoDArray<string>* a = new TwoDArray<string>(r, c)
    delete a;
}

//T access(int r, int c);

TEST(insert, integerTest) {
    int r = 10;
    int c = 10;
    TwoDArray<int>* a = new TwoDArray<int>(r, c)
    delete a;
}

TEST(insert, doubleTest) {
    int r = 10;
    int c = 10;
    TwoDArray<double>* a = new TwoDArray<double>(r, c)
    delete a;
}

TEST(insert, stringTest) {
    int r = 10;
    int c = 10;
    TwoDArray<string>* a = new TwoDArray<string>(r, c)
    delete a;
}

//void remove (int r, int c);

TEST(insert, integerTest) {
    int r = 10;
    int c = 10;
    TwoDArray<int>* a = new TwoDArray<int>(r, c)
    delete a;
}

TEST(insert, doubleTest) {
    int r = 10;
    int c = 10;
    TwoDArray<double>* a = new TwoDArray<double>(r, c)
    delete a;
}

TEST(insert, stringTest) {
    int r = 10;
    int c = 10;
    TwoDArray<string>* a = new TwoDArray<string>(r, c)
    delete a;
}

//void print();

TEST(insert, integerTest) {
    int r = 10;
    int c = 10;
    TwoDArray<int>* a = new TwoDArray<int>(r, c)
    delete a;
}

TEST(insert, doubleTest) {
    int r = 10;
    int c = 10;
    TwoDArray<double>* a = new TwoDArray<double>(r, c)
    delete a;
}

TEST(insert, stringTest) {
    int r = 10;
    int c = 10;
    TwoDArray<string>* a = new TwoDArray<string>(r, c)
    delete a;
}

//int getNumRows();

TEST(insert, integerTest) {
    int r = 10;
    int c = 10;
    TwoDArray<int>* a = new TwoDArray<int>(r, c)
    delete a;
}

TEST(insert, doubleTest) {
    int r = 10;
    int c = 10;
    TwoDArray<double>* a = new TwoDArray<double>(r, c)
    delete a;
}

TEST(insert, stringTest) {
    int r = 10;
    int c = 10;
    TwoDArray<string>* a = new TwoDArray<string>(r, c)
    delete a;
}

//int getNumCols();

TEST(insert, integerTest) {
    int r = 10;
    int c = 10;
    TwoDArray<int>* a = new TwoDArray<int>(r, c)
    delete a;
}

TEST(insert, doubleTest) {
    int r = 10;
    int c = 10;
    TwoDArray<double>* a = new TwoDArray<double>(r, c)
    delete a;
}

TEST(insert, stringTest) {
    int r = 10;
    int c = 10;
    TwoDArray<string>* a = new TwoDArray<string>(r, c)
    delete a;
}

