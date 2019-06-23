#ifndef _SUB1_H_
#define _SUB1_H_
 
#include "Super.h"
 
class Sub : public Super{
public:
    //  オーバーライドされた関数
    void func();
    void vfunc();
};
 
#endif // _SUB1_H_
