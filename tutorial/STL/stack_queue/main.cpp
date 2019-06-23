#include <iostream>
#include <stack>
#include <queue>
 
using namespace std;
 
int main() {
    stack<int> stk;   // �X�^�b�N�̃f�[�^��錾
    queue<int> que;   // �L���[�̃N���X�錾
    int data[] = { 1, 2, 3 };   //  �o�^����f�[�^
    int i;
    //  �f�[�^�̓o�^
    for(i = 0; i < 3;i++){
        stk.push(data[i]);
        que.push(data[i]);
    }
    //  �f�[�^�̏o��(stack)
    cout << "stack : ";
    while (!stk.empty()) {
        // top�ŗv�f���擾���Apop�ł��̗v�f��stk�����菜��(2�i�K�̍�Ƃ��K�v)
        cout << stk.top() << " ";
        stk.pop();
    }
    cout << endl;
    //  �f�[�^�̏o��(queue)
    cout << "queue : ";
    while (!que.empty()) {
        // front�ŗv�f���擾���Apop�ł��̗v�f��que�����菜��(2�i�K�̍�Ƃ��K�v)
        cout << que.front() << " ";
        que.pop();
    }
    cout << endl;
    return 0;
}
