#include "MainMenu.h"

void User_Menu() 
{
    system("cls");
    printf("\n�� ����� ��� �������.\n\n");

    int nPunkt = 0;
    int code;

    do 
    {
        system("cls");
        printf("\n��������� �������:\n\n");

        if (nPunkt == 0) printf("-> ������� 1\n");
        else printf("   ������� 1\n");
        if (nPunkt == 1) printf("-> ������� 2\n");
        else printf("   ������� 2\n");

        code = _getch();
        if (code == 224) 
        {
            code = _getch();
            if (code == 80)
            {
                nPunkt++;
            }
            if (code == 72)
            {
                nPunkt--;
            }
            nPunkt = (nPunkt + 2) % 2; // ���������� �� ���������� ������
        }
        else if (code == 13) 
        {
            switch (nPunkt) 
            {
            case 0:
                
                break;
            case 1:
                
                break;
            default:
                break;
            }
        }
    } while (true);
}

void ThemeChoice() 
{
    int theme = 0;
    int code;

    do 
    {
        system("cls");
        printf("\n�������� ����:\n\n");

        printf("            ������ ����          \n\n");

        if (theme == 0) printf("-> ������ � ����� �������\n");
        else printf("   ������ � ����� �������\n");
        if (theme == 1) printf("-> Ҹ���� � ������� �������\n");
        else printf("   Ҹ���� � ������� �������\n");
        if (theme == 2) printf("-> Ҹ���� � ������� �������\n");
        else printf("   Ҹ���� � ������� �������\n");
        if (theme == 3) printf("-> Ҹ���� � ���������� �������\n");
        else printf("   Ҹ���� � ���������� �������\n");

        printf("\n            ������� ����         \n\n");

        if (theme == 4) printf("-> ������� � ������ �������\n");
        else printf("   ������� � ������ �������\n");
        if (theme == 5) printf("-> ������� � ������� �������\n");
        else printf("   ������� � ������� �������\n");
        if (theme == 6) printf("-> ������� � ������� �������\n");
        else printf("   ������� � ������� �������\n");
        if (theme == 7) printf("-> ������� � ���������� �������\n");
        else printf("   ������� � ���������� �������\n");

        printf("\n");

        if (theme == 8) printf("-> ������� � ������� ����\n");
        else printf("   ������� � ������� ����\n");
        

        code = _getch();
        if (code == 224) 
        {
            code = _getch();
            if (code == 80) 
            {
                theme++;
            }
            if (code == 72) 
            {
                theme--;
            }
            theme = (theme + 9) % 9;
        }
        else if (code == 13) 
        {
            switch (theme) 
            {
            case 0:
                system("COLOR 7");
                printf("\n���� ������� ��������.\n");
                _getch();
                break;
            case 1:
                system("COLOR 4");
                printf("\n���� ������� ��������.\n");
                _getch();
                break;
            case 2:
                system("COLOR 2");
                printf("\n���� ������� ��������.\n");
                _getch();
                break;
            case 3:
                system("COLOR 5");
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
            case 7:
                system("COLOR F5");
                printf("\n���� ������� ��������.\n");
                _getch();
                break;
            case 8:
                return;
            }
        }
    } while (true);
}


//void User_Menu() 
//{
//    system("cls");
//    printf("�� ����� ��� �������.\n\n");
//
//    unsigned short nPunkt = 0;
//
//    do 
//    {
//        wprintf(L"��������� �������:\n\n");
//        wprintf(L"������� ����� �������: ");
//        scanf("%hu", &nPunkt);
//        while (getchar() != '\n');
//
//        switch (nPunkt) 
//        {
//        case 1:
//            break;
//        default:
//            break;
//        }
//        _getch();
//        system("cls");
//    } while (true);
//}
//
//void Admin_Menu() 
//{
//    system("cls");
//    unsigned short nPunkt = 0;
//
//    do 
//    {
//        wprintf(L"��������� �������.\n");
//        wprintf(L"������� ����� �������: ");
//        scanf("%hu", &nPunkt);
//        while (getchar() != '\n');
//
//        switch (nPunkt) 
//        {
//        case 1:
//
//            break;
//        default:
//            break;
//        }
//        _getch();
//        system("cls");
//    } while (true);
//}
//
//void AdminLogin()
//{
//    system("cls");
//    printf("�� ���������� ����� ��� �������������.\n");
//    const unsigned short cnPassword = 11;
//    unsigned short nPassword = 0;
//    do
//    {
//        printf("������� ������: ");
//        scanf("%hu", &nPassword);
//        while (getchar() != '\n');
//
//        if (nPassword != cnPassword)
//            printf("\n������ ������ �������! ��������� �������.\n");
//
//        if (nPassword == cnPassword)
//            printf("\n������ ������ �����!\n");
//
//        _getch();
//        system("cls");
//    } while (cnPassword != nPassword);
//}
//
//void ThemeChoice()
//{
//    unsigned short theme = 0;
//
//    do
//    {
//        do
//        {
//            system("cls");
//            printf("�������� ����:\n\n");
//            printf("            ������ ����          \n\n");
//            printf(" 1 - ������ � ����� �������\n");
//            printf(" 2 - Ҹ���� � ������� �������\n");
//            printf(" 3 - Ҹ���� � ������� �������\n");
//            printf(" 4 - Ҹ���� � ���������� �������\n\n");
//            printf("            ������� ����         \n\n");
//            printf(" 5 - ������� � ������ �������\n");
//            printf(" 6 - ������� � ������� �������\n");
//            printf(" 7 - ������� � ������� �������\n");
//            printf(" 8 - ������� � ���������� �������\n\n");
//            printf("��� �������� � ������� ���� ������� 0.\n");
//
//            printf("��� �����: ");
//            scanf("%hu", &theme);
//            while (getchar() != '\n');
//
//        } while (theme < 0 || theme > 8);
//
//        switch (theme)
//        {
//        case 1:
//            // �����������
//            system("COLOR 7");
//            printf("\n���� ������� ��������.\n");
//            _getch();
//            break;
//        case 2:
//            // ������ - �������
//            system("COLOR 4");
//            printf("\n���� ������� ��������.\n");
//            _getch();
//            break;
//        case 3:
//            // ������ - �������
//            system("COLOR 2");
//            printf("\n���� ������� ��������.\n");
//            _getch();
//            break;
//        case 4:
//            // ������ - ����������
//            system("COLOR 5");
//            printf("\n���� ������� ��������.\n");
//            _getch();
//            break;
//        case 5:
//            // ������� - ������
//            system("COLOR F0");
//            printf("\n���� ������� ��������.\n");
//            _getch();
//            break;
//        case 6:
//            // ������� - �������
//            system("COLOR F4");
//            printf("\n���� ������� ��������.\n");
//            _getch();
//            break;
//        case 7:
//            // ������� - �������
//            system("COLOR F2");
//            printf("\n���� ������� ��������.\n");
//            _getch();
//            break;
//        case 8:
//            // ������� - ����������
//            system("COLOR F5");
//            printf("\n���� ������� ��������.\n");
//            _getch();
//            break;
//        case 0:
//            return;
//        }
//    } while (true);
//}