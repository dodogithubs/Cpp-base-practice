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
    cout << "\t0.退出系统" << endl;
    cout << "\t1.添加职工" << endl;
    cout << "\t2.显示职工" << endl;
    cout << "\t3.删除职工" << endl;
    cout << "\t4.修改职工" << endl;
    cout << "\t5.查找职工" << endl;
    cout << "\t6.排序职工" << endl;
    cout << "\t7.清空文件" << endl;
    cout << "********************************************" << endl;
}

void WorkerManager::exitManu()
{
    cout << "欢迎下次使用！" << endl;
    system("pause");
    exit(0);
}



