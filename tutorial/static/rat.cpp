#include "rat.h"
#include <iostream>
 
using namespace std;
 
//  �l�Y�~�̐��̏����l��0�ɐݒ�
int CRat::m_count = 0;
 
//  �R���X�g���N�^
CRat::CRat() : m_id(0){
    m_id = m_count;    //  �l�Y�~�̐����AID�Ƃ���B
    m_count++;        //  �l�Y�~�̐�������₷
}
//  �f�X�g���N�^
CRat::~CRat() {
    cout << "�l�Y�~:" << m_id << "����" << endl;
    m_count--;        //  �l�Y�~�̐�������炷
}
//  �l�Y�~�̐��̏o��
void CRat::showNum()
{
    cout << "���݂̃l�Y�~�̐��́A" << m_count << " �C�ł��B" << endl;
}
//  �l�Y�~����
void CRat::squeak()
{
    cout << m_id << ":" << "�`���[�`���[" << endl;
}
