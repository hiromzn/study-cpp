#ifndef _POSITION2D_H_
#define _POSITION2D_H_
 
#include  "Vector2D.h"
 
class Position2D : public Vector2D{
public:
    //  �ʒu�̃��Z�b�g
    void resetPosition();
    //  �ړ�
    void move(int dx,int dy);
};
 
#endif // _POSITION2D_H_
