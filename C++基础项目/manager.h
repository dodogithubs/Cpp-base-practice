#pragma once
#ifndef _MANAGER_H_
#define _MANAGER_H_

#include "main.h"

class Manager : public Worker
{
public:
    Manager(int, string, int);
    void showInfo();
    string getDeptName();
};

#endif