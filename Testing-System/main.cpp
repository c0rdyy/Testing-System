#include "MainMenu.h"

int main() 
{
    system("COLOR F0");
    setlocale(LC_ALL, "Rus");

    int nNumber = 0;
    int code;

    do 
    {
        do 
        {
            system("cls");
            printf("\nВыберите режим работы:\n\n");

            if (nNumber == 0) printf("-> 1 - Войти как преподаватель\n");
            else printf("   1 - Войти как преподаватель\n");

            if (nNumber == 1) printf("-> 2 - Войти как студент\n");
            else printf("   2 - Войти как студент\n");

            if (nNumber == 2) printf("-> 3 - Оформление командной строки\n");
            else printf("   3 - Оформление командной строки\n");
            
            if (nNumber == 3) printf("-> 4 - Кнопка выхода\n");
            else printf("   4 - Кнопка выхода\n");

            code = _getch();
            if (code == 224) 
            {
                code = _getch();
                if (code == 80)
                {
                    nNumber++;
                }
                if (code == 72)
                {
                    nNumber--;
                }
                nNumber = (nNumber + 4) % 4;
            }
        } while (code != 13); // 13 - код клавиши Enter

        switch (nNumber) 
        {
        case 0:
            AdminLogin();
            Admin_Menu();
            break;
        case 1:
            User_Menu();
            break;
        case 2:
            ThemeChoice();
            break;
        case 3:
            system("cls");
            printf("Программа успешно завершена!\n");
            return EXIT_SUCCESS;
        }
    } while (1);

    return EXIT_SUCCESS;
}

