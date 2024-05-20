#include "MainMenu.h"

void User_Menu() 
{
    system("cls");
    printf("�� ����� ��� �������.\n\n");

    unsigned short nPunkt = 0;

    do 
    {
        wprintf(L"��������� �������:\n\n");
        wprintf(L"������� ����� �������: ");
        scanf("%hu", &nPunkt);
        while (getchar() != '\n');

        switch (nPunkt) 
        {
        case 1:
            break;
        default:
            break;
        }
        _getch();
        system("cls");
    } while (true);
}

void Admin_Menu() 
{
    system("cls");
    unsigned short nPunkt = 0;

    do 
    {
        wprintf(L"��������� �������.\n");
        wprintf(L"������� ����� �������: ");
        scanf("%hu", &nPunkt);
        while (getchar() != '\n');

        switch (nPunkt) 
        {
        case 1:

            break;
        default:
            break;
        }
        _getch();
        system("cls");
    } while (true);
}

void AdminLogin()
{
    system("cls");
    printf("�� ���������� ����� ��� �������������.\n");
    const unsigned short cnPassword = 11;
    unsigned short nPassword = 0;
    do
    {
        printf("������� ������: ");
        scanf("%hu", &nPassword);
        while (getchar() != '\n');

        if (nPassword != cnPassword)
            printf("\n������ ������ �������! ��������� �������.\n");

        if (nPassword == cnPassword)
            printf("\n������ ������ �����!\n");

        _getch();
        system("cls");
    } while (cnPassword != nPassword);
}

void ThemeChoice()
{
    unsigned short theme = 0;

    do
    {
        do
        {
            system("cls");
            printf("�������� ����:\n\n");
            printf(" 1 - �����������\n");
            printf(" 2 - Ҹ���� � ������� �������\n");
            printf(" 3 - Ҹ���� � ������� �������\n");
            printf(" 4 - ������� � ������ �������\n");
            printf(" 5 - ������� � ������� �������\n");
            printf(" 6 - ������� � ������� �������\n\n");
            printf("��� �������� � ������� ���� ������� 0.\n");

            printf("��� �����: ");
            scanf("%hu", &theme);
            while (getchar() != '\n');

        } while (theme < 0 || theme > 6);

        switch (theme)
        {
        case 1:
            system("COLOR 7");
            printf("\n���� ������� ��������.\n");
            _getch();
            break;
        case 2:
            system("COLOR 4");
            printf("\n���� ������� ��������.\n");
            _getch();
            break;
        case 3:
            system("COLOR 2");
            printf("\n���� ������� ��������.\n");
            _getch();
            break;
        case 4:
            system("COLOR F0");
            printf("\n���� ������� ��������.\n");
            _getch();
            break;
        case 5:
            system("COLOR F4");
            printf("\n���� ������� ��������.\n");
            _getch();
            break;
        case 6:
            system("COLOR F2");
            printf("\n���� ������� ��������.\n");
            _getch();
            break;
        case 0:
            return;
        }
    } while (true);
}