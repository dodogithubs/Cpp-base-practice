#include "boss.h"

Boss::Boss(int id, string name, int depID)
{
    this->m_ID = id;
    this->m_name = name;
    this->m_depID = depID;
}

void Boss::showInfo()
{
    cout << "\tְ����ţ�" << this->m_ID;
    cout << "\n\tְ��������" << this->m_name;
    cout << "\n\t��    λ��" << this->getDeptName();
    cout << "\n\t��λְ�𣺹�������Ա��������" << endl;
}

string Boss::getDeptName()
{
    return string("�ϰ�");
}