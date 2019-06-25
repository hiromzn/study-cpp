#include <iostream>
#include "vector2.h"
 
using namespace std;
 
void vec(string, const Vector2&);
 
int main(){
    Vector2 v1,v2;
    Vector2 v3;
    Vector2 v4;

    //  �x�N�g���ɒl����
    v1.x = 1.0;
    v1.y = 2.0;
    v2 = v1;            //  �l����

    vec("v1=", v1);
    vec("v2=", v2);

    vec("v1 + v2=", v1 + v2 );

    v4 = v1 + v2;
    vec("v4=(v1 + v2)=", v4 );

    v3 = 4.0 * v1;      //  �x�N�g���̃X�J���[�{
    vec("v3=(4*v1)=", v3);

    v3 += v1;           //  ������Z�q�i+=�j
    vec("v3=(+=v1)=",v3);

    v1 -= v2;           //  ������Z�q�i-=�j
    vec("v1=(-=v2)=", v1);
    return 0;
}
 
void vec(string vecname, const Vector2& v)
{
    cout << vecname << "(" << v.x << "," << v.y << ")" << endl;
}
