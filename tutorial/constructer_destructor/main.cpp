#include <iostream>
#include "car.h"
 
using namespace std;

int main() {
    CCar c;
    c.supply(10);   //  �R���⋋
    c.move();   //  �ړ�
    c.move();   //  �ړ�
    cout << "exit main()" << endl;
    return 0;
}
