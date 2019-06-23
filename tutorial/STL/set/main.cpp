#include <iostream>
#include <string>
#include <set>
 
using namespace std;
 
int main() {
    set<string> names;  // set �̃f�[�^�\����p�ӂ���B
    //  ����������
    names.insert("Tom");
    names.insert("Mike");
    names.insert("Mike");   //  �������O���_�u���đ��������
    names.insert("Bob");
    //  �o�^����Ă���S�f�[�^��\��
    set<string>::iterator it; //  �C�e���[�^��p��
    for(it = names.begin() ; it != names.end(); it++){
        cout << *it << endl;
    }
    //  Bob,Steve���f�[�^���ɑ��݂��邩���ׂ�
    string n[] = {"Bob","Steve"};
    int i;
    for(i = 0; i < 2;i++){
        it = names.find(n[i]);
        if(it == names.end()){
            //  �f�[�^���Aset���ɑ��݂��Ȃ���
            cout << n[i] << " is not in a set." << endl;
        }else{
            //  �f�[�^��set���ɑ��݂���B
            cout << n[i] << " is in a set." << endl;
        }
    }
    return 0;
}
