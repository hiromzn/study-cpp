#include "car.h"
#include "ambulance.h"
 
int main() {
    CCar c;
    c.supply(10);   //  �R���⋋
    c.move();   //  �ړ�
    c.move();   //  �ړ�
    CAmbulance a;
    a.supply(10);
    a.move();
    a.sevePeople();
    return 0;
}
