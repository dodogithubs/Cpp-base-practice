#include "employee.h"

Employee::Employee(int id, string name, int depID)
{
    this->m_ID = id;
    this->m_name = name;
    this->m_depID = depID;
}

void Employee::showInfo()
{
    cout << "\t职工编号：" << this->m_ID;
    cout << "\n\t职工姓名：" << this->m_name;
    cout << "\n\t岗    位：" << this->getDeptName();
    cout << "\n\t岗位职责：完成经理交给的任务" << endl;
}

string Employee::getDeptName()
{
    return string("员工");
}