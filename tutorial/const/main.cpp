#include <iostream>
#include <string>
#include "Sample.h"
 
using namespace std;
 
int main(){
    CSample s;
    cout << "�萔�F" << s.m_cst << endl;
    s.setStr("ABC");                //  �l�̐ݒ�
    cout << s.getStr() << endl;     //  �l�̎擾
    return 0;
}
