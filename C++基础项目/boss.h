#pragma once
#ifndef _BOSS_H_
#define _BOSS_H_
#include "main.h"

class Boss : public Worker
{
public:
    Boss(int, string, int);
    void showInfo();
    string getDeptName();
};



#endif
