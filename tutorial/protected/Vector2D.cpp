#include "Vector2D.h"
 
//  �R���X�g���N�^
Vector2D::Vector2D()
{
    init();
}
//  �l�̐ݒ�
void Vector2D::setValue(int x,int y)
{
    m_x = x; m_y = y;
}
//  �w���W�̎擾
int Vector2D::getX()
{
    return m_x;
}
//  �x���W�̎擾
int Vector2D::getY()
{
    return m_y;
}
void Vector2D::init()
{
    m_x = 0; m_y = 0;
}
