#ifndef _SAMPLE_H_
#define _SAMPLE_H_
  
#include <iostream>
#include <string>
  
using namespace std;
  
class CSample{
private:
    string m_str;
public:
    CSample();
    void setStr(const string str);  //  ˆø”‚ğconst‚É
    string getStr() const;          //  ƒƒ“ƒoŠÖ”‚Ìconst
public:
    static const int m_cst = 100;  //  ’è”
};
 
#endif // _SAMPLE_H_
