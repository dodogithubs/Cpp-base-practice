#include "workermanager.h"

WorkerManager::WorkerManager()
{

}

WorkerManager::~WorkerManager()
{

}

void WorkerManager::showManu()
{
    cout << "********************************************" << endl;
    cout << "\t0.�˳�ϵͳ" << endl;
    cout << "\t1.���ְ��" << endl;
    cout << "\t2.��ʾְ��" << endl;
    cout << "\t3.ɾ��ְ��" << endl;
    cout << "\t4.�޸�ְ��" << endl;
    cout << "\t5.����ְ��" << endl;
    cout << "\t6.����ְ��" << endl;
    cout << "\t7.����ļ�" << endl;
    cout << "********************************************" << endl;
}

void WorkerManager::exitManu()
{
    cout << "��ӭ�´�ʹ�ã�" << endl;
    system("pause");
    exit(0);
}



