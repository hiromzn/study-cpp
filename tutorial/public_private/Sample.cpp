#include "Sample.h"
#include <iostream>
 
using namespace std;
 
void Sample::func1(){
    cout << "func1" << endl;
    a = 1;
    b = 1;
    func2();                    //  func1“à‚©‚çAfunc2‚ðŒÄ‚Ño‚·
}
void Sample::func2(){
    a = 2;
    b = 2;
    cout << "a=" << a  << "," << "b=" << b << endl;
}
