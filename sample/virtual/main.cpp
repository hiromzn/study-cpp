#include <iostream>
#include <string>
#include "bird.h"
#include "chicken.h"
#include "crow.h"
 
using namespace std;
 
int main(){
    CBird *b1, *b2;
    CChicken *c1;

    b1 = new CCrow();
    b2 = new CChicken();
    b1->sing();
    b1->fly();
    b2->sing();
    b2->fly();
	delete b1;
	delete b2;

    c1 = new CChicken();
    c1->fly();
    c1->sing();
	delete c1;

    return 0;
}
