#ifndef _AMBULANCE_H_
#define _AMBULANCE_H_
 
#include "car.h"
 
class CAmbulance : public CCar{
public:
    //  �R���X�g���N�^
    CAmbulance();
    //  �f�X�g���N�^
    virtual ~CAmbulance();
    //  �~�}�~������
    void sevePeople();
private:
    int m_number;
};
 
#endif // _AMBULANCE_H_
