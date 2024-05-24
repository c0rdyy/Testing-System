#include "MainMenu.h"

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
