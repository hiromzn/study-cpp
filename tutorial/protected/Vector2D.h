#ifndef _VECTOR2D_H_
#define _VECTOR2D_H_
 
//  �񎟌��x�N�g���N���X
class Vector2D{
protected:
    int m_x;
    int m_y;
public:
    //  �R���X�g���N�^
    Vector2D();
    //  �l�̐ݒ�
    void setValue(int x,int y);
    //  �w���W�̎擾
    int getX();
    //  �x���W�̎擾
    int getY();
protected:
    //  ������
    void init();
};
 
#endif // _VECTOR2D_H_
