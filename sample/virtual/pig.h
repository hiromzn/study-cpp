#ifndef _PIG_H_
#define _PIG_H_
 
#include <iostream>
#include <string>
 
using namespace std;
 
class CPig{
public:
    virtual void sing(){ cout << "sing pig !" << endl; }
    virtual void fly(){ cout << "fly pig !" << endl; }

    virtual ~CPig() { cout << "dead CPig" << endl; }
};
 
#endif // _PIG_H_
