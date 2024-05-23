#include "MainMenu.h"
#include "Encryption.h"
#include "Teacher_mode.h"

int main() 
{
    system("COLOR F0");
    setlocale(LC_ALL, "Rus");

    int shift = 3;


    char input_Array_ans0[] = "Array.ans0.txt";
    char output_Array_ans0[] = "Array.ans0_1.txt";
    char input_2_Array_ans0[] = "Array.ans0_2.txt";

    char input_Array_ans1[] = "Array.ans1.txt";
    char output_Array_ans1[] = "Array.ans1_1.txt";
    char input_2_Array_ans1[] = "Array.ans1_2.txt";

    char input_Array_ans2[] = "Array.ans2.txt";
    char output_Array_ans2[] = "Array.ans2_1.txt";
    char input_2_Array_ans2[] = "Array.ans2_2.txt";

    char input_Array_ans3[] = "Array.ans3.txt";
    char output_Array_ans3[] = "Array.ans3_1.txt";
    char input_2_Array_ans3[] = "Array.ans3_2.txt";

    char input_Array_quest[] = "Array.quest.txt";
    char output_Array_quest[] = "Array.ans1_1.txt";
    char input_2_Array_quest[] = "Array.quest_2.txt";


    char input_Dynamic_ans0[] = "Dynamic.ans0.txt";
    char output_Dynamic_ans0[] = "Dynamic.ans0_1.txt";
    char input_2_Dynamic_ans0[] = "Dynamic.ans0_2.txt";

    char input_Dynamic_ans1[] = "Dynamic.ans1.txt";
    char output_Dynamic_ans1[] = "Dynamic.ans1_1.txt";
    char input_2_Dynamic_ans1[] = "Dynamic.ans1_2.txt";

    char input_Dynamic_ans2[] = "Dynamic.ans2.txt";
    char output_Dynamic_ans2[] = "Dynamic.ans2_1.txt";
    char input_2_Dynamic_ans2[] = "Dynamic.ans2_2.txt";

    char input_Dynamic_ans3[] = "Dynamic.ans3.txt";
    char output_Dynamic_ans3[] = "Dynamic.ans3_1.txt";
    char input_2_Dynamic_ans3[] = "Dynamic.ans3_2.txt";

    char input_Dynamic_quest[] = "Dynamic.quest.txt";
    char output_Dynamic_quest[] = "Dynamic.quest_1.txt";
    char input_2_Dynamic_quest[] = "Dynamic.quest_2.txt";


    char input_File_ans0[] = "File.ans0.txt";
    char output_File_ans0[] = "File.ans0_1.txt";
    char input_2_File_ans0[] = "File.ans0_2.txt";

    char input_File_ans1[] = "File.ans1.txt";
    char output_File_ans1[] = "File.ans1_1.txt";
    char input_2_File_ans1[] = "File.ans1_2.txt";

    char input_File_ans2[] = "File.ans2.txt";
    char output_File_ans2[] = "File.ans2_1.txt";
    char input_2_File_ans2[] = "File.ans2_2.txt";

    char input_File_ans3[] = "File.ans3.txt";
    char output_File_ans3[] = "File.ans3_1.txt";
    char input_2_File_ans3[] = "File.ans3_2.txt";

    char input_File_quest[] = "File.quest.txt";
    char output_File_quest[] = "File.quest_1.txt";
    char input_2_File_quest[] = "File.quest_2.txt";


    char input_Loop_ans0[] = "Loop.ans0.txt";
    char output_Loop_ans0[] = "Loop.ans0_1.txt";
    char input_2_Loop_ans0[] = "Loop.ans0_2.txt";

    char input_Loop_ans1[] = "Loop.ans1.txt";
    char output_Loop_ans1[] = "Loop.ans1_1.txt";
    char input_2_Loop_ans1[] = "Loop.ans1_2.txt";

    char input_Loop_ans2[] = "Loop.ans2.txt";
    char output_Loop_ans2[] = "Loop.ans2_1.txt";
    char input_2_Loop_ans2[] = "Loop.ans2_2.txt";

    char input_Loop_ans3[] = "Loop.ans3.txt";
    char output_Loop_ans3[] = "Loop.ans3_1.txt";
    char input_2_Loop_ans3[] = "Loop.ans3_2.txt";

    char input_Loop_quest[] = "Loop.quest.txt";
    char output_Loop_quest[] = "Loop.quest_1.txt";
    char input_2_Loop_quest[] = "Loop.quest_2.txt";


    char input_Recursion_ans0[] = "Recursion.ans0.txt";
    char output_Recursion_ans0[] = "Recursion.ans0_1.txt";
    char input_2_Recursion_ans0[] = "Recursion.ans0_2.txt";

    char input_Recursion_ans1[] = "Recursion.ans1.txt";
    char output_Recursion_ans1[] = "Recursion.ans1_1.txt";
    char input_2_Recursion_ans1[] = "Recursion.ans1_2.txt";

    char input_Recursion_ans2[] = "Recursion.ans2.txt";
    char output_Recursion_ans2[] = "Recursion.ans2_1.txt";
    char input_2_Recursion_ans2[] = "Recursion.ans2_2.txt";

    char input_Recursion_ans3[] = "Recursion.ans3.txt";
    char output_Recursion_ans3[] = "Recursion.ans3_1.txt";
    char input_2_Recursion_ans3[] = "Recursion.ans3_2.txt";

    char input_Recursion_quest[] = "Recursion.quest.txt";
    char output_Recursion_quest[] = "Recursion.quest_1.txt";
    char input_2_Recursion_quest[] = "Recursion.quest_2.txt";


    char input_String_ans0[] = "String.ans0.txt";
    char output_String_ans0[] = "String.ans0_1.txt";
    char input_2_String_ans0[] = "String.ans0_2.txt";

    char input_String_ans1[] = "String.ans1.txt";
    char output_String_ans1[] = "String.ans1_1.txt";
    char input_2_String_ans1[] = "String.ans1_2.txt";

    char input_String_ans2[] = "String.ans2.txt";
    char output_String_ans2[] = "String.ans2_1.txt";
    char input_2_String_ans2[] = "String.ans2_2.txt";

    char input_String_ans3[] = "String.ans3.txt";
    char output_String_ans3[] = "String.ans3_1.txt";
    char input_2_String_ans3[] = "String.ans3_2.txt";

    char input_String_quest[] = "String.quest.txt";
    char output_String_quest[] = "String.quest_1.txt";
    char input_2_String_quest[] = "String.quest_2.txt";


    char input_Structure_ans0[] = "Structure.ans0.txt";
    char output_Structure_ans0[] = "Structure.ans0_1.txt";
    char input_2_Structure_ans0[] = "Structure.ans0_2.txt";

    char input_Structure_ans1[] = "Structure.ans1.txt";
    char output_Structure_ans1[] = "Structure.ans1_1.txt";
    char input_2_Structure_ans1[] = "Structure.ans1_2.txt";

    char input_Structure_ans2[] = "Structure.ans2.txt";
    char output_Structure_ans2[] = "Structure.ans2_1.txt";
    char input_2_Structure_ans2[] = "Structure.ans2_2.txt";

    char input_Structure_ans3[] = "Structure.ans3.txt";
    char output_Structure_ans3[] = "Structure.ans3_1.txt";
    char input_2_Structure_ans3[] = "Structure.ans3_2.txt";

    char input_Structure_quest[] = "Structure.quest.txt";
    char output_Structure_quest[] = "Structure.quest_1.txt";
    char input_2_Structure_quest[] = "Structure.quest_2.txt";


    char input_Address_ans0[] = "Address.ans0.txt";
    char output_Address_ans0[] = "Address.ans0_1.txt";
    char input_2_Address_ans0[] = "Address.ans0_2.txt";

    char input_Address_ans1[] = "Address.ans1.txt";
    char output_Address_ans1[] = "Address.ans1_1.txt";
    char input_2_Address_ans1[] = "Address.ans1_2.txt";

    char input_Address_ans2[] = "Address.ans2.txt";
    char output_Address_ans2[] = "Address.ans2_1.txt";
    char input_2_Address_ans2[] = "Address.ans2_2.txt";

    char input_Address_ans3[] = "Address.ans3.txt";
    char output_Address_ans3[] = "Address.ans3_1.txt";
    char input_2_Address_ans3[] = "Address.ans3_2.txt";

    char input_Address_quest[] = "Address.quest.txt";
    char output_Address_quest[] = "Address.quest_1.txt";
    char input_2_Address_quest[] = "Address.quest_2.txt";

    char input_Students[] = "Students.txt";
    char output_Students[] = "Students_1.txt";
    char input_2_Students[] = "Students_2.txt";

    ENCRYPTION(input_Array_ans0, output_Array_ans0, input_Array_ans1, output_Array_ans1, input_Array_ans2, output_Array_ans2, input_Array_ans3, output_Array_ans3, input_Array_quest, output_Array_quest, input_Dynamic_ans0, output_Dynamic_ans0, input_Dynamic_ans1, output_Dynamic_ans1, input_Dynamic_ans2, output_Dynamic_ans2, input_Dynamic_ans3, output_Dynamic_ans3, input_Dynamic_quest, output_Dynamic_quest, input_File_ans0, output_File_ans0, input_File_ans1, output_File_ans1, input_File_ans2, output_File_ans2, input_File_ans3, output_File_ans3, input_File_quest, output_File_quest, input_Loop_ans0, output_Loop_ans0, input_Loop_ans1, output_Loop_ans1, input_Loop_ans2, output_Loop_ans2, input_Loop_ans3, output_Loop_ans3, input_Loop_quest, output_Loop_quest, input_Recursion_ans0, output_Recursion_ans0, input_Recursion_ans1, output_Recursion_ans1, input_Recursion_ans2, output_Recursion_ans2, input_Recursion_ans3, output_Recursion_ans3, input_Recursion_quest, output_Recursion_quest, input_String_ans0, output_String_ans0, input_String_ans1, output_String_ans1, input_String_ans2, output_String_ans2, input_String_ans3, output_String_ans3, input_String_quest, output_String_quest, input_Structure_ans0, output_Structure_ans0, input_Structure_ans1, output_Structure_ans1, input_Structure_ans2, output_Structure_ans2, input_Structure_ans3, output_Structure_ans3, input_Structure_quest, output_Structure_quest, input_Address_ans0, output_Address_ans0, input_Address_ans1, output_Address_ans1, input_Address_ans2, output_Address_ans2, input_Address_ans3, output_Address_ans3, input_Address_quest, output_Address_quest, input_Students, output_Students, shift);
    //DECRYPTION(input_2_Array_ans0, output_Array_ans0, input_2_Array_ans1, output_Array_ans1, input_2_Array_ans2, output_Array_ans2, input_2_Array_ans3, output_Array_ans3, input_2_Array_quest, output_Array_quest, input_2_Dynamic_ans0, output_Dynamic_ans0, input_2_Dynamic_ans1, output_Dynamic_ans1, input_2_Dynamic_ans2, output_Dynamic_ans2, input_2_Dynamic_ans3, output_Dynamic_ans3, input_2_Dynamic_quest, output_Dynamic_quest, input_2_File_ans0, output_File_ans0, input_2_File_ans1, output_File_ans1, input_2_File_ans2, output_File_ans2, input_2_File_ans3, output_File_ans3, input_2_File_quest, output_File_quest, input_2_Loop_ans0, output_Loop_ans0, input_2_Loop_ans1, output_Loop_ans1, input_2_Loop_ans2, output_Loop_ans2, input_2_Loop_ans3, output_Loop_ans3, input_2_Loop_quest, output_Loop_quest, input_2_Recursion_ans0, output_Recursion_ans0, input_2_Recursion_ans1, output_Recursion_ans1, input_2_Recursion_ans2, output_Recursion_ans2, input_2_Recursion_ans3, output_Recursion_ans3, input_2_Recursion_quest, output_Recursion_quest, input_2_String_ans0, output_String_ans0, input_2_String_ans1, output_String_ans1, input_2_String_ans2, output_String_ans2, input_2_String_ans3, output_String_ans3, input_2_String_quest, output_String_quest, input_2_Structure_ans0, output_Structure_ans0, input_2_Structure_ans1, output_Structure_ans1, input_2_Structure_ans2, output_Structure_ans2, input_2_Structure_ans3, output_Structure_ans3, input_2_Structure_quest, output_Structure_quest, input_2_Address_ans0, output_Address_ans0,input_2_Address_ans1, output_Address_ans1, input_2_Address_ans2, output_Address_ans2, input_2_Address_ans3, output_Address_ans3, input_2_Address_quest, output_Address_quest, input_2_Students, output_Students, shift);
    //ENCRYPTION1(input_2_Array_ans0, output_Array_ans0, input_2_Array_ans1, output_Array_ans1, input_2_Array_ans2, output_Array_ans2, input_2_Array_ans3, output_Array_ans3, input_2_Array_quest, output_Array_quest, input_2_Dynamic_ans0, output_Dynamic_ans0, input_2_Dynamic_ans1, output_Dynamic_ans1, input_2_Dynamic_ans2, output_Dynamic_ans2, input_2_Dynamic_ans3, output_Dynamic_ans3, input_2_Dynamic_quest, output_Dynamic_quest, input_2_File_ans0, output_File_ans0, input_2_File_ans1, output_File_ans1, input_2_File_ans2, output_File_ans2, input_2_File_ans3, output_File_ans3, input_2_File_quest, output_File_quest, input_2_Loop_ans0, output_Loop_ans0, input_2_Loop_ans1, output_Loop_ans1, input_2_Loop_ans2, output_Loop_ans2, input_2_Loop_ans3, output_Loop_ans3, input_2_Loop_quest, output_Loop_quest, input_2_Recursion_ans0, output_Recursion_ans0, input_2_Recursion_ans1, output_Recursion_ans1, input_2_Recursion_ans2, output_Recursion_ans2, input_2_Recursion_ans3, output_Recursion_ans3, input_2_Recursion_quest, output_Recursion_quest, input_2_String_ans0, output_String_ans0, input_2_String_ans1, output_String_ans1, input_2_String_ans2, output_String_ans2, input_2_String_ans3, output_String_ans3, input_2_String_quest, output_String_quest, input_2_Structure_ans0, output_Structure_ans0, input_2_Structure_ans1, output_Structure_ans1, input_2_Structure_ans2, output_Structure_ans2, input_2_Structure_ans3, output_Structure_ans3, input_2_Structure_quest, output_Structure_quest, input_2_Address_ans0, output_Address_ans0,input_2_Address_ans1, output_Address_ans1, input_2_Address_ans2, output_Address_ans2, input_2_Address_ans3, output_Address_ans3, input_2_Address_quest, output_Address_quest, input_2_Students, output_Students, shift);
    //DECRYPTION1(input_Array_ans0, output_Array_ans0, input_Array_ans1, output_Array_ans1, input_Array_ans2, output_Array_ans2, input_Array_ans3, output_Array_ans3, input_Array_quest, output_Array_quest, input_Dynamic_ans0, output_Dynamic_ans0, input_Dynamic_ans1, output_Dynamic_ans1, input_Dynamic_ans2, output_Dynamic_ans2, input_Dynamic_ans3, output_Dynamic_ans3, input_Dynamic_quest, output_Dynamic_quest, input_File_ans0, output_File_ans0, input_File_ans1, output_File_ans1, input_File_ans2, output_File_ans2, input_File_ans3, output_File_ans3, input_File_quest, output_File_quest, input_Loop_ans0, output_Loop_ans0, input_Loop_ans1, output_Loop_ans1, input_Loop_ans2, output_Loop_ans2, input_Loop_ans3, output_Loop_ans3, input_Loop_quest, output_Loop_quest, input_Recursion_ans0, output_Recursion_ans0, input_Recursion_ans1, output_Recursion_ans1, input_Recursion_ans2, output_Recursion_ans2, input_Recursion_ans3, output_Recursion_ans3, input_Recursion_quest, output_Recursion_quest, input_String_ans0, output_String_ans0, input_String_ans1, output_String_ans1, input_String_ans2, output_String_ans2, input_String_ans3, output_String_ans3, input_String_quest, output_String_quest, input_Structure_ans0, output_Structure_ans0, input_Structure_ans1, output_Structure_ans1, input_Structure_ans2, output_Structure_ans2, input_Structure_ans3, output_Structure_ans3, input_Structure_quest, output_Structure_quest, input_Address_ans0, output_Address_ans0,input_Address_ans1, output_Address_ans1, input_Address_ans2, output_Address_ans2, input_Address_ans3, output_Address_ans3, input_Address_quest, output_Address_quest, input_Students, output_Students, shift);
    int nNumber = 0;
    int code;

    do 
    {
        do 
        {
            system("cls");
            printf("\nВыберите режим работы:\n\n");
            printf("                   Внимание!                      \n");
            printf("Управление осуществляется стрелочками 'вверх' и 'вниз'\n\n");

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
            teacherMode();
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

