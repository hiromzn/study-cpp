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
    void setStr(const string str);  //  ������const��
    string getStr() const;          //  �����o�֐���const
public:
    static const int m_cst = 100;  //  �萔
};
 
#endif // _SAMPLE_H_
