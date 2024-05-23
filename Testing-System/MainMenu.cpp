#include "MainMenu.h"

void User_Menu() 
{
    system("cls");
    printf("\nВы вошли как студент.\n\n");

    int nPunkt = 0;
    int code;

    do 
    {
        system("cls");
        printf("\nДоступные команды:\n\n");

        if (nPunkt == 0) printf("-> Команда 1\n");
        else printf("   Команда 1\n");
        if (nPunkt == 1) printf("-> Команда 2\n");
        else printf("   Команда 2\n");

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
            nPunkt = (nPunkt + 2) % 2; // Подстройте по количеству команд
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
        printf("\nВыберите тему:\n\n");

        printf("            Темные темы          \n\n");

        if (theme == 0) printf("-> Темная с белым текстом\n");
        else printf("   Темная с белым текстом\n");
        if (theme == 1) printf("-> Тёмная с красным текстом\n");
        else printf("   Тёмная с красным текстом\n");
        if (theme == 2) printf("-> Тёмная с зеленым текстом\n");
        else printf("   Тёмная с зеленым текстом\n");
        if (theme == 3) printf("-> Тёмная с Фиолетовым текстом\n");
        else printf("   Тёмная с Фиолетовым текстом\n");

        printf("\n            Светлые темы         \n\n");

        if (theme == 4) printf("-> Светлая с черным текстом\n");
        else printf("   Светлая с черным текстом\n");
        if (theme == 5) printf("-> Светлая с красным текстом\n");
        else printf("   Светлая с красным текстом\n");
        if (theme == 6) printf("-> Светлая с зеленым текстом\n");
        else printf("   Светлая с зеленым текстом\n");
        if (theme == 7) printf("-> Светлая с фиолетовым текстом\n");
        else printf("   Светлая с фиолетовым текстом\n");

        printf("\n");

        if (theme == 8) printf("-> Возврат в главное меню\n");
        else printf("   Возврат в главное меню\n");
        

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
                printf("\nТема успешно изменена.\n");
                _getch();
                break;
            case 1:
                system("COLOR 4");
                printf("\nТема успешно изменена.\n");
                _getch();
                break;
            case 2:
                system("COLOR 2");
                printf("\nТема успешно изменена.\n");
                _getch();
                break;
            case 3:
                system("COLOR 5");
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
            case 7:
                system("COLOR F5");
                printf("\nТема успешно изменена.\n");
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
//    printf("Вы вошли как студент.\n\n");
//
//    unsigned short nPunkt = 0;
//
//    do 
//    {
//        wprintf(L"Доступные команды:\n\n");
//        wprintf(L"Введите номер команды: ");
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
//        wprintf(L"Доступные команды.\n");
//        wprintf(L"Введите номер команды: ");
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
//    printf("Вы попытались войти как преподаватель.\n");
//    const unsigned short cnPassword = 11;
//    unsigned short nPassword = 0;
//    do
//    {
//        printf("Введите пароль: ");
//        scanf("%hu", &nPassword);
//        while (getchar() != '\n');
//
//        if (nPassword != cnPassword)
//            printf("\nПароль введен неверно! Повторите попытку.\n");
//
//        if (nPassword == cnPassword)
//            printf("\nПароль введен верно!\n");
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
//            printf("Выберите тему:\n\n");
//            printf("            Темные темы          \n\n");
//            printf(" 1 - Темная с белым текстом\n");
//            printf(" 2 - Тёмная с красным текстом\n");
//            printf(" 3 - Тёмная с зеленым текстом\n");
//            printf(" 4 - Тёмная с Фиолетовым текстом\n\n");
//            printf("            Светлые темы         \n\n");
//            printf(" 5 - Светлая с черным текстом\n");
//            printf(" 6 - Светлая с красным текстом\n");
//            printf(" 7 - Светлая с зеленым текстом\n");
//            printf(" 8 - Светлая с фиолетовым текстом\n\n");
//            printf("Для возврата в главное меню введите 0.\n");
//
//            printf("Ваш выбор: ");
//            scanf("%hu", &theme);
//            while (getchar() != '\n');
//
//        } while (theme < 0 || theme > 8);
//
//        switch (theme)
//        {
//        case 1:
//            // Стандартный
//            system("COLOR 7");
//            printf("\nТема успешно изменена.\n");
//            _getch();
//            break;
//        case 2:
//            // Черный - Красный
//            system("COLOR 4");
//            printf("\nТема успешно изменена.\n");
//            _getch();
//            break;
//        case 3:
//            // Черный - Зеленый
//            system("COLOR 2");
//            printf("\nТема успешно изменена.\n");
//            _getch();
//            break;
//        case 4:
//            // Темный - Фиолетовый
//            system("COLOR 5");
//            printf("\nТема успешно изменена.\n");
//            _getch();
//            break;
//        case 5:
//            // Светлый - Черный
//            system("COLOR F0");
//            printf("\nТема успешно изменена.\n");
//            _getch();
//            break;
//        case 6:
//            // Светлый - Красный
//            system("COLOR F4");
//            printf("\nТема успешно изменена.\n");
//            _getch();
//            break;
//        case 7:
//            // Светлый - Зеленый
//            system("COLOR F2");
//            printf("\nТема успешно изменена.\n");
//            _getch();
//            break;
//        case 8:
//            // Светлый - Фиолетовый
//            system("COLOR F5");
//            printf("\nТема успешно изменена.\n");
//            _getch();
//            break;
//        case 0:
//            return;
//        }
//    } while (true);
//}