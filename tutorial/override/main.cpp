#include <iostream>
#include "Super.h"
#include "Sub.h"

using namespace std;
 
int main(){
    Super *super1;
    Super *super2;
    Sub *sub1;
    super1 = new Super();
    super2 = new Sub();
    sub1 = new Sub();

    cout << "super1(= new Super();)->func() :==> ";
    super1->func();
    cout << "super2(= new Sub();  )->func() :==> ";
    super2->func();
    cout << "sub1  (= new Sub();  )->func() :==> ";
    sub1->func();

    cout << "super1(= new Super();)->vfunc() :==> ";
    super1->vfunc();
    cout << "super2(= new Sub();  )->vfunc() :==> ";
    super2->vfunc();
    cout << "sub1  (= new Sub();  )->vfunc() :==> ";
    sub1->vfunc();

    delete super1, super2, sub1;
    return 0;
}
