#include <iostream>
 
using namespace std;
 
int main()
{
    int *p = 0;
    int i;
    p = new int[10];  // int�^10���̗̈�𓮓I�m��
    for(i=0; i<10; ++i)
    {
        p[i] = i;
        cout << p[i] << endl;
    }
    delete [] p;       // ���I�Ɋm�ۂ����̈�����
    return 0;
}
