#include "Position2D.h"
#include <iostream>
 
using namespace std;
 
int main(int argc,char** args) {
    Position2D p;
    cout << "p:("  << p.getX() << "," << p.getY() << ")" << endl;
    p.setValue(1,1);
    cout << "p:("  << p.getX() << "," << p.getY() << ")" << endl;
    p.move(2,3);
    cout << "p:("  << p.getX() << "," << p.getY() << ")" << endl;
    p.resetPosition();
    cout << "p:("  << p.getX() << "," << p.getY() << ")" << endl;
    return 0;
}
