#include "MainMenu.h"

int main()
{
    system("COLOR F0");
    setlocale(LC_ALL, "Rus");

    unsigned short nNumber = 0;
    do
    {
        do
        {
            system("cls");
            printf("Выберите режим работы:\n\n");
            printf(" 1 - Войти как преподаватель\n");
            printf(" 2 - Войти как студент\n");
            printf(" 3 - Оформление командной строки\n\n");
            printf("Для выхода введите 0.\n");

            printf("Ваш выбор: ");
            scanf("%hu", &nNumber);
            while (getchar() != '\n');

        } while (nNumber < 0 || nNumber > 3);

        switch (nNumber)
        {
        case 1:
            AdminLogin();
            Admin_Menu();
            break;
        case 2:
            User_Menu();
            break;
        case 3:
            ThemeChoice();
            break;
        case 0:
            printf("Программа успешно завершена!\n");
            return EXIT_SUCCESS;
        }
    } while (true);

    return EXIT_SUCCESS;
}

