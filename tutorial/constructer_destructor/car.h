#ifndef _CAR_H_
#define _CAR_H_
 
//  �����ԃN���X
class CCar{
public:
    //  �R���X�g���N�^
    CCar();
    //  �f�X�g���N�^
    ~CCar();
    //  �ړ����\�b�h
    void move();
    //  �R���⋋���\�b�h
    void supply(int fuel);
private:
    int m_fuel;         //  �R��
    int m_migration;    //  �ړ�����
};
#endif // _CAR_H_
