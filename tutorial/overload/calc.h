#ifndef _CALC_H_
#define _CALC_H_
 
class CCalc{
private:
    int m_a, m_b;
public:
    //  �f�t�H���g�R���X�g���N�^
    CCalc();
    //  �R���X�g���N�^�i�������j
    CCalc(int a, int b);
    //  �����Z�������̂P
    int add();
    //  �����Z�������̂Q
    int add(int a,int b);
    //  �l�̐ݒ�
    void setValue(int a, int b);
    //  �l�̎擾(m_a)
    int getA();
    //  �l�̎擾(m_b)
    int getB();
};
 
#endif _CALC_H_
