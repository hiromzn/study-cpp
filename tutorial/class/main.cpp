#include <iostream>
#include "sample.h"
 
using namespace std;
 
int main()
{
    CSample obj;  // CSample���C���X�^���X��
    int num;
     
    cout << "��������͂��ĉ�����:" << endl;
    cin >> num;
     
    obj.set( num );  // CSample�̃����o�ϐ����Z�b�g
    cout << obj.get() << endl;  // �����o�ϐ��̒l���o��
 
    return 0;
}
