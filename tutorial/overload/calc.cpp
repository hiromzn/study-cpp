#include "calc.h"
 
//  �f�t�H���g�R���X�g���N�^
CCalc::CCalc() : m_a(0), m_b(0)
{
}
//  �R���X�g���N�^�i�������j
CCalc::CCalc(int a, int b) : m_a(a), m_b(b)
{
 
}
//  �����Z�������̂P
int CCalc::add()
{
    return m_a + m_b;
}
//  �����Z�������̂Q
int CCalc::add(int a, int b)
{
    return a + b;
}
//  �l�̐ݒ�
void CCalc::setValue(int a, int b)
{
    m_a = a; m_b = b;
}
//  �l�̎擾(m_a)
int CCalc::getA()
{   
    return m_a;
}
//  �l�̎擾(m_b)
int CCalc::getB()
{
    return m_b;
}
