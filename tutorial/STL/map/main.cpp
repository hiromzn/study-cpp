#include <iostream>
#include <string>
#include <map>
 
using namespace std;
 
int main() {
    map <string, int> score;  // map �̃f�[�^�\����p�ӂ���B
    string names[] = { "Tom","Bob","Mike" };
    score[names[0]] = 100;          //  �L�[�ƒl�̊֘A�t���@ Tom : 100
    score[names[1]] = 80;           //  �L�[�ƒl�̊֘A�t���A Bob : 80
    score[names[2]] = 120;          //  �L�[�ƒl�̊֘A�t���B Mike : 120
    int i;
    for(i = 0; i < 3; i++){
            cout << names[i] << ":" << score[names[i]]  << endl;
    }
    return 0;
}
