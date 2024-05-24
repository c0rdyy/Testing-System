#include "MainMenu.h"

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
