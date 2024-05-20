#include "MainMenu.h"

void User_Menu() 
{
    system("cls");
    printf("Вы вошли как студент.\n\n");

    unsigned short nPunkt = 0;

    do 
    {
        wprintf(L"Доступные команды:\n\n");
        wprintf(L"Введите номер команды: ");
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
        wprintf(L"Доступные команды.\n");
        wprintf(L"Введите номер команды: ");
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
    printf("Вы попытались войти как преподаватель.\n");
    const unsigned short cnPassword = 11;
    unsigned short nPassword = 0;
    do
    {
        printf("Введите пароль: ");
        scanf("%hu", &nPassword);
        while (getchar() != '\n');

        if (nPassword != cnPassword)
            printf("\nПароль введен неверно! Повторите попытку.\n");

        if (nPassword == cnPassword)
            printf("\nПароль введен верно!\n");

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
            printf("Выберите тему:\n\n");
            printf(" 1 - Стандартная\n");
            printf(" 2 - Тёмная с красным текстом\n");
            printf(" 3 - Тёмная с зеленым текстом\n");
            printf(" 4 - Светлая с черным текстом\n");
            printf(" 5 - Светлая с красным текстом\n");
            printf(" 6 - Светлая с зеленым текстом\n\n");
            printf("Для возврата в главное меню введите 0.\n");

            printf("Ваш выбор: ");
            scanf("%hu", &theme);
            while (getchar() != '\n');

        } while (theme < 0 || theme > 6);

        switch (theme)
        {
        case 1:
            system("COLOR 7");
            printf("\nТема успешно изменена.\n");
            _getch();
            break;
        case 2:
            system("COLOR 4");
            printf("\nТема успешно изменена.\n");
            _getch();
            break;
        case 3:
            system("COLOR 2");
            printf("\nТема успешно изменена.\n");
            _getch();
            break;
        case 4:
            system("COLOR F0");
            printf("\nТема успешно изменена.\n");
            _getch();
            break;
        case 5:
            system("COLOR F4");
            printf("\nТема успешно изменена.\n");
            _getch();
            break;
        case 6:
            system("COLOR F2");
            printf("\nТема успешно изменена.\n");
            _getch();
            break;
        case 0:
            return;
        }
    } while (true);
}