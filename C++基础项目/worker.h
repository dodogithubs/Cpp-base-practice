#pragma once

#ifndef _WORKER_H_
#define _WORKER_H_
#include "main.h"

// 抽象类
class Worker
{
public:
    // 显示个人信息
    virtual void showInfo() = 0;    // 纯虚函数，意味着该类为抽象类，不能被实例化
    // 获得岗位名称
    virtual string getDeptName() = 0;

    int m_ID;       // 职工编号
    string m_name;  // 职工姓名
    int m_depID;    // 职工所在部门编号
};


#endif