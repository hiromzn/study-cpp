#include "car.h"
#include <iostream>
 
using namespace std;
 
int main() {
    CCar* pC = 0;
    pC = new CCar();    //  �C���X�^���X����
    pC->supply(10);      //  �R���⋋
    pC->move();          //  �ړ�
    pC->move();          //  �ړ�
    delete pC;          //  �C���X�^���X�̏���
    cout << "�C���X�^���X�̏����I��" << endl;
    return 0;
}
