#include "main.h"

int main()
{
    WorkerManager wm;

    int choice = 0;

    while (true)
    {
        wm.showManu();      //չʾ�˵���Ա����
        cout << "��ѡ��" << endl;

        switch (choice)
        {
        case 0:     // �˳�ϵͳ
            break;
        case 1:     // ���ְ�� 
            break;
        case 2:     // ��ʾְ��
            break;
        case 3:     // ɾ��ְ��
            break;
        case 4:     // �޸�ְ��
            break;
        case 5:     // ����ְ��
            break;
        case 6:     // ����ְ��
            break;
        case 7:     // ����ļ�
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
