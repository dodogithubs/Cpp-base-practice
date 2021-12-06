#include "boss.h"

Boss::Boss(int id, string name, int depID)
{
    this->m_ID = id;
    this->m_name = name;
    this->m_depID = depID;
}

void Boss::showInfo()
{
    cout << "\t职工编号：" << this->m_ID;
    cout << "\n\t职工姓名：" << this->m_name;
    cout << "\n\t岗    位：" << this->getDeptName();
    cout << "\n\t岗位职责：管理所有员工和任务" << endl;
}

string Boss::getDeptName()
{
    return string("老板");
}