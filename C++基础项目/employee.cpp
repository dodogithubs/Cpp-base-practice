#include "employee.h"

Employee::Employee(int id, string name, int depID)
{
    this->m_ID = id;
    this->m_name = name;
    this->m_depID = depID;
}

void Employee::showInfo()
{
    cout << "\tְ����ţ�" << this->m_ID;
    cout << "\n\tְ��������" << this->m_name;
    cout << "\n\t��    λ��" << this->getDeptName();
    cout << "\n\t��λְ����ɾ�����������" << endl;
}

string Employee::getDeptName()
{
    return string("Ա��");
}