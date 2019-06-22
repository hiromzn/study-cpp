#include <iostream>
#include <string>
#include "Sample.h"
 
using namespace std;
 
int main(){
    CSample s;
    cout << "’è”F" << s.m_cst << endl;
    s.setStr("ABC");                //  ’l‚ÌÝ’è
    cout << s.getStr() << endl;     //  ’l‚ÌŽæ“¾
    return 0;
}
