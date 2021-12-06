#pragma once
#ifndef _EMPLOYEE_H_
#define _EMPLOYEE_H_

#include "main.h"

class Employee: public Worker
{
public:
    Employee(int, string, int);
    void showInfo();
    string getDeptName();
};

#endif