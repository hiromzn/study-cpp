#include "Sample.h"
#include <iostream>
 
using namespace std;
 
int main(){
    Sample s;
    s.a = 1;
    //s.b = 2; // private�ȃ����o�ւ̃A�N�Z�X�͂ł��Ȃ��B
    s.func1();
    //s.func2(); // private�ȃ��\�b�h�͗��p�ł��Ȃ��B
}
