#pragma once

#ifndef _WORKER_H_
#define _WORKER_H_
#include "main.h"

// ������
class Worker
{
public:
    // ��ʾ������Ϣ
    virtual void showInfo() = 0;    // ���麯������ζ�Ÿ���Ϊ�����࣬���ܱ�ʵ����
    // ��ø�λ����
    virtual string getDeptName() = 0;

    int m_ID;       // ְ�����
    string m_name;  // ְ������
    int m_depID;    // ְ�����ڲ��ű��
};


#endif