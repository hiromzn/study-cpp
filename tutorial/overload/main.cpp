#include <iostream>
#include "calc.h"
 
using namespace std;
 
int main(){
    CCalc *pC1, *pC2;
    pC1 = new CCalc();      //  �f�t�H���g�R���X�g���N�^
    pC2 = new CCalc(1, 2);  //  �R���X�g���N�^�i��������j
    cout << 3 << " + " << 4 << " = " << pC1->add(3, 4) << endl;
    cout << pC2->getA() << " + " << pC2->getB() << " = " << pC2->add() << endl;    
    delete pC1;
    delete pC2;
}
