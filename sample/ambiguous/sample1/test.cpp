#include <iostream>
using std::cout; using std::endl ;

class test
{
private:
  int data1, data2 ;
public:
  test(int data1 = 1) { 
    this->data1 = data1 ; this->data2 = -1;
  }
  test(int data1 = 1, int data2 = 2) { 
    this->data1 = data1 ; this->data2 = data2 ; 
  }
};

int main()
{
  test t1(1) ;
  test t2(1, 2);
  return 1 ;
}
