#include "ambulance.h"
#include <iostream>
 
using namespace std;
 
 
//  �R���X�g���N�^
CAmbulance::CAmbulance() : m_number(119)
{
    cout << "CAmbulance�I�u�W�F�N�g����" << endl;
}
//  �f�X�g���N�^
CAmbulance::~CAmbulance()
{
    cout << "CAmbulance�I�u�W�F�N�g�j��" << endl;
}
//  �~�}�~������
void CAmbulance::sevePeople(){
    cout << "�~�}�~������" << endl << "�Ăяo����" << m_number << "��" << endl;
}
