#include <iostream>
#include <list>
 
using namespace std;
 
int main(){
    list<int> li;
    li.push_back(1);    //  ���Ƀf�[�^��}��
    li.push_back(2);    //  ���Ƀf�[�^��}��
    li.push_front(3);   //  �O�Ƀf�[�^��}��
    list<int>::iterator itr;
    //  �f�[�^�̑}��
    itr = li.begin();   //  �C�e���[�^��擪�ɐݒ�
    itr++;              //  ��ړ�
    li.insert(itr,4);   //  �l�̑}��
    //  �f�[�^�̕\��
    for (itr = li.begin(); itr != li.end(); itr++){
        cout << *itr << " ";
    }
    cout << endl;
    return 0;
}
