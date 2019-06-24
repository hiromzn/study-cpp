#include <iostream>
#include "IInf1.h"
#include "IInf2.h"
#include "Sample.h"
 
//  IInf1�݂̂��g����֐�
void foo(IInf1*);
//  IInf2�݂̂��g����֐�
void bar(IInf2*);
 
int main(){
    CSample * s = new CSample();
    foo((IInf1*)s);
    bar((IInf2*)s);
    return 0;
}
 
//  IInf1�݂̂��g����֐�
void foo(IInf1* p)
{
    p->func1();
    p->func2();
    //p->func3();
    //p->func4();
}
//  IInf2�݂̂��g����֐�
void bar(IInf2* p)
{
    //p->func1();
    //p->func2();
    p->func3();
    p->func4();
}
