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
    TwoDArray<int>* a = new TwoDArray<int>(r, c);
    EXPECT_EQ(r, a->getNumRows());
    EXPECT_EQ(c, a->getNumCols());
    delete a;
}

TEST(constructor, doubleTest) {
    int r = 10;
    int c = 10;
    TwoDArray<double>* a = new TwoDArray<double>(r, c);
    EXPECT_EQ(r, a->getNumRows());
    EXPECT_EQ(c, a->getNumCols());
    delete a;
}

TEST(constructor, stringTest) {
    int r = 10;
    int c = 10;
    TwoDArray<string>* a = new TwoDArray<string>(r, c);
    EXPECT_EQ(r, a->getNumRows());
    EXPECT_EQ(c, a->getNumCols());
    delete a;
}

//~TwoDArray<T>(int r, int c);

TEST(destructor, integerTest) {
    int r = 10;
    int c = 10;
    TwoDArray<int>* a = new TwoDArray<int>(r, c);
    delete a;
}

TEST(destructor, doubleTest) {
    int r = 10;
    int c = 10;
    TwoDArray<double>* a = new TwoDArray<double>(r, c);
    delete a;
}

TEST(destructor, stringTest) {
    int r = 10;
    int c = 10;
    TwoDArray<string>* a = new TwoDArray<string>(r, c);
    delete a;
}

//void insert(int r, int c, T value);

TEST(insert, integerTest) {
    int r = 10;
    int c = 10;
    TwoDArray<int>* a = new TwoDArray<int>(r, c);
    a->insert(0, 0, 400);
    a->insert(0, 9, 900);
    a->insert(9, 9, 92939);
    a->insert(4, 4, 567658);
    delete a;
}

TEST(insert, doubleTest) {
    int r = 10;
    int c = 10;
    TwoDArray<double>* a = new TwoDArray<double>(r, c);
    a->insert(0, 0, 4089.7678);
    a->insert(0, 9, 900.435468);
    a->insert(9, 9, 92939.765);
    a->insert(4, 4, 567658.12);
    delete a;
}

TEST(insert, stringTest) {
    int r = 10;
    int c = 10;
    TwoDArray<string>* a = new TwoDArray<string>(r, c);
    a->insert(0, 0, "hey");
    a->insert(0, 9, "whats");
    a->insert(9, 9, "up");
    a->insert(4, 4, "yooooooooooo");
    delete a;
}

//T access(int r, int c);

TEST(access, integerTest) {
    int r = 10;
    int c = 10;
    TwoDArray<int>* a = new TwoDArray<int>(r, c);
    a->insert(0, 0, 400);
    EXPECT_EQ(400, a->access(0, 0));
    delete a;
}

TEST(access, doubleTest) {
    int r = 10;
    int c = 10;
    TwoDArray<double>* a = new TwoDArray<double>(r, c);
    a->insert(5, 4, 423.633);
    EXPECT_EQ(423.633, a->access(5, 4));
    delete a;
}

TEST(access, stringTest) {
    int r = 10;
    int c = 10;
    TwoDArray<string>* a = new TwoDArray<string>(r, c);
    a->insert(9, 9, "yarrr");
    EXPECT_EQ("yarrr", a->access(9, 9));
    delete a;
}

//void remove (int r, int c);

TEST(remove, integerTest) {
    int r = 10;
    int c = 10;
    TwoDArray<int>* a = new TwoDArray<int>(r, c);
    a->insert(0, 0, 400);
    a->remove(0, 0);
    ASSERT_TRUE(a->access(0, 0) != 400);
    delete a;
}

TEST(remove, doubleTest) {
    int r = 10;
    int c = 10;
    TwoDArray<double>* a = new TwoDArray<double>(r, c);
    a->insert(9, 9, 400.2);
    a->remove(9, 9);
    double d;
    ASSERT_TRUE(a->access(0, 0) != 400.2);
    delete a;
}

TEST(remove, stringTest) {
    int r = 10;
    int c = 10;
    TwoDArray<string>* a = new TwoDArray<string>(r, c);
    a->insert(5, 4, "yay");
    a->remove(5, 4);
    string d;
    ASSERT_TRUE(a->access(0, 0) != "yay");
    delete a;
}

//void print();

TEST(print, integerTest) {
    int r = 10;
    int c = 10;
    TwoDArray<int>* a = new TwoDArray<int>(r, c);
    a->insert(0, 0, 400);
    a->insert(0, 9, 900);
    a->insert(9, 9, 92939);
    a->insert(4, 4, 567658);
    a->print();
    delete a;
}

TEST(print, doubleTest) {
    int r = 10;
    int c = 10;
    TwoDArray<double>* a = new TwoDArray<double>(r, c);
    a->insert(0, 0, 4089.7678);
    a->insert(0, 9, 900.435468);
    a->insert(9, 9, 92939.765);
    a->insert(4, 4, 567658.12);
    a->print();
    delete a;
}

TEST(print, stringTest) {
    int r = 10;
    int c = 10;
    TwoDArray<string>* a = new TwoDArray<string>(r, c);
    a->insert(0, 0, "hey");
    a->insert(0, 9, "whats");
    a->insert(9, 9, "up");
    a->insert(4, 4, "yooooooooooo");
    a->print();
    delete a;
}

//int getNumRows();

TEST(numRows, integerTest) {
    int r = 10;
    int c = 5;
    TwoDArray<int>* a = new TwoDArray<int>(r, c);
    EXPECT_EQ(10, a->getNumRows());
    delete a;
}

TEST(numRows, doubleTest) {
    int r = 10;
    int c = 5;
    TwoDArray<double>* a = new TwoDArray<double>(r, c);
    EXPECT_EQ(10, a->getNumRows());
    delete a;
}

TEST(numRows, stringTest) {
    int r = 10;
    int c = 5;
    TwoDArray<string>* a = new TwoDArray<string>(r, c);
    EXPECT_EQ(10, a->getNumRows());
    delete a;
}

//int getNumCols();

TEST(numCols, integerTest) {
    int r = 5;
    int c = 10;
    TwoDArray<int>* a = new TwoDArray<int>(r, c);
    EXPECT_EQ(10, a->getNumCols());
    delete a;
}

TEST(numCols, doubleTest) {
    int r = 5;
    int c = 10;
    TwoDArray<double>* a = new TwoDArray<double>(r, c);
    EXPECT_EQ(10, a->getNumCols());
    delete a;
}

TEST(numCols, stringTest) {
    int r = 5;
    int c = 10;
    TwoDArray<string>* a = new TwoDArray<string>(r, c);
    EXPECT_EQ(10, a->getNumCols());
    delete a;
}

