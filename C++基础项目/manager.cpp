#include "manager.h"

Manager::Manager(int id, string name, int depID)
{
    this->m_ID = id;
    this->m_name = name;
    this->m_depID = depID;
}

void Manager::showInfo()
{
    cout << "\t职工编号：" << this->m_ID;
    cout << "\n\t职工姓名：" << this->m_name;
    cout << "\n\t岗    位：" << this->getDeptName();
    cout << "\n\t岗位职责：完成老板交给的任务" << endl;
}

string Manager::getDeptName()
{
    return string("经理");
}