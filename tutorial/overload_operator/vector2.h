#ifndef _VECTOR2_H_
#define _VECTOR2_H_
 
#include <iostream>
#include <string>
 
using namespace std;
 
class Vector2{
public:
    double x;
    double y;
public:
    //  =���Z�q�̃I�[�o�[���[�h
    Vector2& operator=(const Vector2& v);
    //  +=���Z�q�̃I�[�o�[���[�h
    Vector2& operator+=(const Vector2& v);
    //  -=���Z�q�̃I�[�o�[���[�h
    Vector2& operator-=(const Vector2& v);
};
 
//  +���Z�q�̃I�[�o�[���[�h
Vector2 operator+(const Vector2&, const Vector2&);
//  -���Z�q�̃I�[�o�[���[�h
Vector2 operator-(const Vector2&, const Vector2&);
//  *���Z�q�̃I�[�o�[���[�h
Vector2 operator*(const double,const Vector2& v);
 
#endif // _VECTOR2_H_
