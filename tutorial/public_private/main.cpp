#include "Sample.h"
#include <iostream>
 
using namespace std;
 
int main(){
    Sample s;
    s.a = 1;
    //s.b = 2; // privateなメンバへのアクセスはできない。
    s.func1();
    //s.func2(); // privateなメソッドは利用できない。
}
