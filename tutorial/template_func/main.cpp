#include <iostream>
#include <string>
 
using namespace std;
 
//  �e���v���[�g�֐�
template <typename T>
T add(T x, T y){
    return x + y;
}
 
int main(){
    cout << add<int>(4, 3) << endl;           //  ���l��add�֐��𗘗p
    cout << add<string>("ABC", "DEF") << endl;    //  string��add�𗘗p
    cout << add(1, 2) << endl;                  //  �����Ƃ�int�̏ꍇ�A�^�w��ȗ��\
    //  cout << add("abc", "def") << endl;      //  string�̏ꍇ�A�^�w�肪�K�v
    //  cout << add(1,2.3) << endl;             //  �^���s��v�����ꍇ�A�g���Ȃ��B
    return 0;
}
