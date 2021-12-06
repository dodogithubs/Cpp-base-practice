#include "main.h"

int main()
{
    WorkerManager wm;

    int choice = 0;

    while (true)
    {
        wm.showManu();      //展示菜单成员函数
        cout << "请选择：" << endl;

        switch (choice)
        {
        case 0:     // 退出系统
            break;
        case 1:     // 添加职工 
            break;
        case 2:     // 显示职工
            break;
        case 3:     // 删除职工
            break;
        case 4:     // 修改职工
            break;
        case 5:     // 查找职工
            break;
        case 6:     // 排序职工
            break;
        case 7:     // 清空文件
            break;
        default:    //
            system("cls");
            break;
        }
        break;
    }

    system("pause");
    return 0;
}
