#include "car.h"
#include <iostream>
 
using namespace std;
 
//  �R���X�g���N�^
CCar::CCar() : m_fuel(0),m_migration(0)
{
    cout << "CCar�I�u�W�F�N�g����" << endl;
}
//  �f�X�g���N�^
CCar::~CCar()
{
    cout << "CCar�I�u�W�F�N�g�j��" << endl;
}
void CCar::move()
{
    //  �R��������Ȃ�ړ�
    if(m_fuel >= 0){
        m_migration++;  //  �����ړ�
        m_fuel--;       //  �R������
    }
    cout << "�ړ�����:" << m_migration << endl;
    cout << "�R��" << m_fuel << endl;
}
//  �R���⋋���\�b�h
void CCar::supply(int fuel)
{
    if(fuel > 0){
        m_fuel += fuel; //  �R���⋋
    }
    cout << "�R��" << m_fuel << endl;
}
