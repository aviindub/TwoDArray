#ifndef __TWO_D_ARRAY_H__
#define __TWO_D_ARRAY_H__

using std::vector;

template <typename T>
class TwoDArray {
 private:
  vector< vector<T> > theArray;
  T defaultValue;

 public:
  TwoDArray<T>(int r, int c);
  ~TwoDArray<T>();
  void insert(int r, int c, T value);
  T access(int r, int c);
  void remove (int r, int c);
  void print();
  int getNumRows();
  int getNumCols();
};

#endif
