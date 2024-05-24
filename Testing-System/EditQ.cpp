#include <locale.h>
#include <Windows.h>
#include <stdio.h>
#include "EditQ.h"
void readf(struct taskList* theme1, int th) {
    theme1->size = 0;
    switch (th)
    {
    case 1: //Адрес

        FILE * f1;
        fopen_s(&f1, "C:/Users/ADMIN/source/repos/c0rdyy/Testing-System/Testing-System/Address.quest_2.txt", "r");
        if (!f1) {
            printf("Файл не найден.\n");
        }
        else {

            for (int i = 0; !feof(f1); i++) {
                fgets(theme1->tasks[i].quest, 1000, f1);
                theme1->size++;
            }

        }
        fclose(f1);

        //1 ответ (правильный)
        FILE* f01;
        fopen_s(&f01, "C:/Users/ADMIN/source/repos/c0rdyy/Testing-System/Testing-System/Address.ans0_2.txt", "r");
        if (f01) {
            for (int i = 0; !feof(f01); i++) {
                fgets(theme1->tasks[i].ans[0], 1000, f01);
            }
        }
        fclose(f01);

        //2 ответ
        FILE* f11;
        fopen_s(&f11, "C:/Users/ADMIN/source/repos/c0rdyy/Testing-System/Testing-System/Address.ans1_2.txt", "r");
        if (f11) {
            for (int i = 0; !feof(f11); i++) {
                fgets(theme1->tasks[i].ans[1], 1000, f11);
            }
        }
        fclose(f11);

        //3 ответ
        FILE* f21;
        fopen_s(&f21, "C:/Users/ADMIN/source/repos/c0rdyy/Testing-System/Testing-System/Address.ans2_2.txt", "r");
        if (f21) {
            for (int i = 0; !feof(f21); i++) {
                fgets(theme1->tasks[i].ans[2], 1000, f21);
            }
        }
        fclose(f21);

        //4 ответ
        FILE* f31;
        fopen_s(&f31, "C:/Users/ADMIN/source/repos/c0rdyy/Testing-System/Testing-System/Address.ans3_2.txt", "r");
        if (f31) {
            for (int i = 0; !feof(f31); i++) {
                fgets(theme1->tasks[i].ans[3], 1000, f31);
            }
        }
        fclose(f31);

        break;
    case 2: //Массив

        FILE * f2;
        fopen_s(&f2, "C:/Users/ADMIN/source/repos/c0rdyy/Testing-System/Testing-System/Array.quest_2.txt", "r");
        if (!f2) {
            printf("Файл не найден.\n");
        }
        else {
            for (int i = 0; !feof(f2); i++) {
                fgets(theme1->tasks[i].quest, 1000, f2);
                theme1->size++;
            }
        }
        fclose(f2);

        //1 ответ (правильный)
        FILE* f02;
        fopen_s(&f02, "C:/Users/ADMIN/source/repos/c0rdyy/Testing-System/Testing-System/Array.ans0_2.txt", "r");
        if (f02) {
            for (int i = 0; !feof(f02); i++) {
                fgets(theme1->tasks[i].ans[0], 1000, f02);
            }
        }
        fclose(f02);

        //2 ответ
        FILE* f12;
        fopen_s(&f12, "C:/Users/ADMIN/source/repos/c0rdyy/Testing-System/Testing-System/Array.ans1_2.txt", "r");
        if (f12) {
            for (int i = 0; !feof(f12); i++) {
                fgets(theme1->tasks[i].ans[1], 1000, f12);
            }
        }
        fclose(f12);

        //3 ответ
        FILE* f22;
        fopen_s(&f22, "C:/Users/ADMIN/source/repos/c0rdyy/Testing-System/Testing-System/Array.ans2_2.txt", "r");
        if (f22) {
            for (int i = 0; !feof(f22); i++) {
                fgets(theme1->tasks[i].ans[2], 1000, f22);
            }
        }
        fclose(f22);

        //4 ответ
        FILE* f32;
        fopen_s(&f32, "C:/Users/ADMIN/source/repos/c0rdyy/Testing-System/Testing-System/Array.ans3_2.txt", "r");
        if (f32) {
            for (int i = 0; !feof(f32); i++) {
                fgets(theme1->tasks[i].ans[3], 1000, f32);
            }
        }
        fclose(f32);

        break;
    case 3: //Динамическая структура данных

        FILE * f3;
        fopen_s(&f3, "C:/Users/ADMIN/source/repos/c0rdyy/Testing-System/Testing-System/Dynamic.quest_2.txt", "r");
        if (!f3) {
            printf("Файл не найден.\n");
        }
        else {
            for (int i = 0; !feof(f3); i++) {
                fgets(theme1->tasks[i].quest, 1000, f3);
                theme1->size++;
            }
        }
        fclose(f3);

        //1 ответ (правильный)
        FILE* f03;
        fopen_s(&f03, "C:/Users/ADMIN/source/repos/c0rdyy/Testing-System/Testing-System/Dynamic.ans0_2.txt", "r");
        if (f03) {
            for (int i = 0; !feof(f03); i++) {
                fgets(theme1->tasks[i].ans[0], 1000, f03);
            }
        }
        fclose(f03);

        //2 ответ
        FILE* f13;
        fopen_s(&f13, "C:/Users/ADMIN/source/repos/c0rdyy/Testing-System/Testing-System/Dynamic.ans1_2.txt", "r");
        if (f13) {
            for (int i = 0; !feof(f13); i++) {
                fgets(theme1->tasks[i].ans[1], 1000, f13);
            }
        }
        fclose(f13);

        //3 ответ
        FILE* f23;
        fopen_s(&f23, "C:/Users/ADMIN/source/repos/c0rdyy/Testing-System/Testing-System/Dynamic.ans2_2.txt", "r");
        if (f23) {
            for (int i = 0; !feof(f23); i++) {
                fgets(theme1->tasks[i].ans[2], 1000, f23);
            }
        }
        fclose(f23);

        //4 ответ
        FILE* f33;
        fopen_s(&f33, "C:/Users/ADMIN/source/repos/c0rdyy/Testing-System/Testing-System/Dynamic.ans3_2.txt", "r");
        if (f33) {
            for (int i = 0; !feof(f33); i++) {
                fgets(theme1->tasks[i].ans[3], 1000, f33);
            }
        }
        fclose(f33);

        break;
    case 4: //Файл

        FILE * f4;
        fopen_s(&f4, "C:/Users/ADMIN/source/repos/c0rdyy/Testing-System/Testing-System/File.quest_2.txt", "r");
        if (!f4) {
            printf("Файл не найден.\n");
        }
        else {
            for (int i = 0; !feof(f4); i++) {
                fgets(theme1->tasks[i].quest, 1000, f4);
                theme1->size++;
            }
        }
        fclose(f4);

        //1 ответ (правильный)
        FILE* f04;
        fopen_s(&f04, "C:/Users/ADMIN/source/repos/c0rdyy/Testing-System/Testing-System/File.ans0_2.txt", "r");
        if (f04) {
            for (int i = 0; !feof(f04); i++) {
                fgets(theme1->tasks[i].ans[0], 1000, f04);
            }
        }
        fclose(f04);

        //2 ответ
        FILE* f14;
        fopen_s(&f14, "C:/Users/ADMIN/source/repos/c0rdyy/Testing-System/Testing-System/File.ans1_2.txt", "r");
        if (f14) {
            for (int i = 0; !feof(f14); i++) {
                fgets(theme1->tasks[i].ans[1], 1000, f14);
            }
        }
        fclose(f14);

        //3 ответ
        FILE* f24;
        fopen_s(&f24, "C:/Users/ADMIN/source/repos/c0rdyy/Testing-System/Testing-System/File.ans2_2.txt", "r");
        if (f24) {
            for (int i = 0; !feof(f24); i++) {
                fgets(theme1->tasks[i].ans[2], 1000, f24);
            }
        }
        fclose(f24);

        //4 ответ
        FILE* f34;
        fopen_s(&f34, "C:/Users/ADMIN/source/repos/c0rdyy/Testing-System/Testing-System/File.ans3_2.txt", "r");
        if (f34) {
            for (int i = 0; !feof(f34); i++) {
                fgets(theme1->tasks[i].ans[3], 1000, f34);
            }
        }
        fclose(f34);

        break;
    case 5: //Цикл

        FILE * f5;
        fopen_s(&f5, "C:/Users/ADMIN/source/repos/c0rdyy/Testing-System/Testing-System/Loop.quest_2.txt", "r");
        if (!f5) {
            printf("Файл не найден.\n");
        }
        else {
            for (int i = 0; !feof(f5); i++) {
                fgets(theme1->tasks[i].quest, 1000, f5);
                theme1->size++;
            }
        }
        fclose(f5);

        //1 ответ (правильный)
        FILE* f05;
        fopen_s(&f05, "C:/Users/ADMIN/source/repos/c0rdyy/Testing-System/Testing-System/Loop.ans0_2.txt", "r");
        if (f05) {
            for (int i = 0; !feof(f05); i++) {
                fgets(theme1->tasks[i].ans[0], 1000, f05);
            }
        }
        fclose(f05);

        //2 ответ
        FILE* f15;
        fopen_s(&f15, "C:/Users/ADMIN/source/repos/c0rdyy/Testing-System/Testing-System/Loop.ans1_2.txt", "r");
        if (f15) {
            for (int i = 0; !feof(f15); i++) {
                fgets(theme1->tasks[i].ans[1], 1000, f15);
            }
        }
        fclose(f15);

        //3 ответ
        FILE* f25;
        fopen_s(&f25, "C:/Users/ADMIN/source/repos/c0rdyy/Testing-System/Testing-System/Loop.ans2_2.txt", "r");
        if (f25) {
            for (int i = 0; !feof(f25); i++) {
                fgets(theme1->tasks[i].ans[2], 1000, f25);
            }
        }
        fclose(f25);

        //4 ответ
        FILE* f35;
        fopen_s(&f35, "C:/Users/ADMIN/source/repos/c0rdyy/Testing-System/Testing-System/Loop.ans3_2.txt", "r");
        if (f35) {
            for (int i = 0; !feof(f35); i++) {
                fgets(theme1->tasks[i].ans[3], 1000, f35);
            }
        }
        fclose(f35);

        break;
    case 6: //Рекурсия

        FILE * f6;
        fopen_s(&f6, "C:/Users/ADMIN/source/repos/c0rdyy/Testing-System/Testing-System/Recursion.quest_2.txt", "r");
        if (!f6) {
            printf("Файл не найден.\n");
        }
        else {
            for (int i = 0; !feof(f6); i++) {
                fgets(theme1->tasks[i].quest, 1000, f6);
                theme1->size++;
            }
        }
        fclose(f6);

        //1 ответ (правильный)
        FILE* f06;
        fopen_s(&f06, "C:/Users/ADMIN/source/repos/c0rdyy/Testing-System/Testing-System/Recursion.ans0_2.txt", "r");
        if (f06) {
            for (int i = 0; !feof(f06); i++) {
                fgets(theme1->tasks[i].ans[0], 1000, f06);
            }
        }
        fclose(f06);

        //2 ответ
        FILE* f16;
        fopen_s(&f16, "C:/Users/ADMIN/source/repos/c0rdyy/Testing-System/Testing-System/Recursion.ans1_2.txt", "r");
        if (f16) {
            for (int i = 0; !feof(f16); i++) {
                fgets(theme1->tasks[i].ans[1], 1000, f16);
            }
        }
        fclose(f16);

        //3 ответ
        FILE* f26;
        fopen_s(&f26, "C:/Users/ADMIN/source/repos/c0rdyy/Testing-System/Testing-System/Recursion.ans2_2.txt", "r");
        if (f26) {
            for (int i = 0; !feof(f26); i++) {
                fgets(theme1->tasks[i].ans[2], 1000, f26);
            }
        }
        fclose(f26);

        //4 ответ
        FILE* f36;
        fopen_s(&f36, "C:/Users/ADMIN/source/repos/c0rdyy/Testing-System/Testing-System/Recursion.ans3_2.txt", "r");
        if (f36) {
            for (int i = 0; !feof(f36); i++) {
                fgets(theme1->tasks[i].ans[3], 1000, f36);
            }
        }
        fclose(f36);

        break;
    case 7: //Строки

        FILE * f7;
        fopen_s(&f7, "C:/Users/ADMIN/source/repos/c0rdyy/Testing-System/Testing-System/String.quest_2.txt", "r");
        if (!f7) {
            printf("Файл не найден.\n");
        }
        else {
            for (int i = 0; !feof(f7); i++) {
                fgets(theme1->tasks[i].quest, 1000, f7);
                theme1->size++;
            }
        }
        fclose(f7);

        //1 ответ (правильный)
        FILE* f07;
        fopen_s(&f07, "C:/Users/ADMIN/source/repos/c0rdyy/Testing-System/Testing-System/String.ans0_2.txt", "r");
        if (f07) {
            for (int i = 0; !feof(f07); i++) {
                fgets(theme1->tasks[i].ans[0], 1000, f07);
            }
        }
        fclose(f07);

        //2 ответ
        FILE* f17;
        fopen_s(&f17, "C:/Users/ADMIN/source/repos/c0rdyy/Testing-System/Testing-System/String.ans1_2.txt", "r");
        if (f17) {
            for (int i = 0; !feof(f17); i++) {
                fgets(theme1->tasks[i].ans[1], 1000, f17);
            }
        }
        fclose(f17);

        //3 ответ
        FILE* f27;
        fopen_s(&f27, "C:/Users/ADMIN/source/repos/c0rdyy/Testing-System/Testing-System/String.ans2_2.txt", "r");
        if (f27) {
            for (int i = 0; !feof(f27); i++) {
                fgets(theme1->tasks[i].ans[2], 1000, f27);
            }
        }
        fclose(f27);

        //4 ответ
        FILE* f37;
        fopen_s(&f37, "C:/Users/ADMIN/source/repos/c0rdyy/Testing-System/Testing-System/String.ans3_2.txt", "r");
        if (f37) {
            for (int i = 0; !feof(f37); i++) {
                fgets(theme1->tasks[i].ans[3], 1000, f37);
            }
        }
        fclose(f37);

        break;
    case 8: //Структура

        FILE * f8;
        fopen_s(&f8, "C:/Users/ADMIN/source/repos/c0rdyy/Testing-System/Testing-System/Structure.quest_2.txt", "r");
        if (!f8) {
            printf("Файл не найден.\n");
        }
        else {
            for (int i = 0; !feof(f8); i++) {
                fgets(theme1->tasks[i].quest, 1000, f8);
                theme1->size++;
            }
        }
        fclose(f8);

        //1 ответ (правильный)
        FILE* f08;
        fopen_s(&f08, "C:/Users/ADMIN/source/repos/c0rdyy/Testing-System/Testing-System/Structure.ans0_2.txt", "r");
        if (f08) {
            for (int i = 0; !feof(f08); i++) {
                fgets(theme1->tasks[i].ans[0], 1000, f08);
            }
        }
        fclose(f08);

        //2 ответ
        FILE* f18;
        fopen_s(&f18, "C:/Users/ADMIN/source/repos/c0rdyy/Testing-System/Testing-System/Structure.ans1_2.txt", "r");
        if (f18) {
            for (int i = 0; !feof(f18); i++) {
                fgets(theme1->tasks[i].ans[1], 1000, f18);
            }
        }
        fclose(f18);

        //3 ответ
        FILE* f28;
        fopen_s(&f28, "C:/Users/ADMIN/source/repos/c0rdyy/Testing-System/Testing-System/Structure.ans2_2.txt", "r");
        if (f28) {
            for (int i = 0; !feof(f28); i++) {
                fgets(theme1->tasks[i].ans[2], 1000, f28);
            }
        }
        fclose(f28);

        //4 ответ
        FILE* f38;
        fopen_s(&f38, "C:/Users/ADMIN/source/repos/c0rdyy/Testing-System/Testing-System/Structure.ans3_2.txt", "r");
        if (f38) {
            for (int i = 0; !feof(f38); i++) {
                fgets(theme1->tasks[i].ans[3], 1000, f38);
            }
        }
        fclose(f38);

        break;
    }
}


void add_question(struct taskList* theme1) {
    struct task* newTask = &theme1->tasks[theme1->size];

    printf("Введите вопрос: "); getchar();
    gets_s(theme1->tasks[theme1->size].quest);
    strcat_s(theme1->tasks[theme1->size - 1].quest, "\n");
    printf("Введите правильный ответ: ");
    gets_s(theme1->tasks[theme1->size].ans[0]);
    strcat_s(theme1->tasks[theme1->size - 1].ans[0], "\n");
    printf("Введите 1-ый дополнительный ответ: ");
    gets_s(theme1->tasks[theme1->size].ans[1]);
    strcat_s(theme1->tasks[theme1->size - 1].ans[1], "\n");
    printf("Введите 2-ой дополнительный ответ: ");
    gets_s(theme1->tasks[theme1->size].ans[2]);
    strcat_s(theme1->tasks[theme1->size - 1].ans[2], "\n");
    printf("Введите 3-ий дополнительный ответ: ");
    gets_s(theme1->tasks[theme1->size].ans[3]);
    strcat_s(theme1->tasks[theme1->size - 1].ans[3], "\n");
    theme1->size++;
}

void del_question(struct taskList* theme1, int th, int num) {
    theme1->size -= 1;
    for (int i = num; i < theme1->size; i++) {
        theme1->tasks[i] = theme1->tasks[i + 1];
    }
}

void print_que(struct taskList* theme1, int num) {
    if (num != theme1->size - 1) {
        printf("Вопрос %d: %s\n", num + 1, theme1->tasks[num].quest);
        for (int j = 0; j < 4; j++) {
            printf("%d. %s\n", j + 1, theme1->tasks[num].ans[j]);
        }
    }
    else {
        printf("Вопрос %d: %s\n\n", num + 1, theme1->tasks[num].quest);
        for (int j = 0; j < 4; j++) {
            printf("%d. %s\n\n", j + 1, theme1->tasks[num].ans[j]);
        }
    }
}

void edit_question(struct taskList* theme1, int num) {
    char add_line[3] = "\n";
    int edit;
    do {
        printf("Что вы хотите сделать?\n\n 0 - Редактирование вопроса\n 1 - Редактирование 1-го ответа (ответ должен быть правильным!!!)\n 2 - Редактирование 2-го ответа\n 3 - Редактирование 3-го ответа\n 4 - Редактирование 4-го ответа\n\nДля выхода из режима редактирования вопросов введите 5.\n\nВаш выбор: ");
        scanf_s("%d", &edit);
        getchar();
        switch (edit) {
        case 0:
            printf("Ввод: ");
            gets_s(theme1->tasks[num].quest);
            if (num != theme1->size - 1) { strcat_s(theme1->tasks[num].quest, add_line); }
            break;
        case 1:
            printf("Ввод: ");
            gets_s(theme1->tasks[num].ans[0]);
            if (num != theme1->size - 1) { strcat_s(theme1->tasks[num].ans[0], add_line); }
            break;
        case 2:
            printf("Ввод: ");
            gets_s(theme1->tasks[num].ans[1]);
            if (num != theme1->size - 1) { strcat_s(theme1->tasks[num].ans[1], add_line); }
            break;
        case 3:
            printf("Ввод: ");
            gets_s(theme1->tasks[num].ans[2]);
            if (num != theme1->size - 1) { strcat_s(theme1->tasks[num].ans[2], add_line); }
            break;
        case 4:
            printf("Ввод: ");
            gets_s(theme1->tasks[num].ans[3]);
            if (num != theme1->size - 1) { strcat_s(theme1->tasks[num].ans[3], add_line); }
            break;
        case 5: printf("Выход из режима редактирования.\n\n"); break;
        default: printf("Некорректный ввод. Повторите попытку.\n\n"); break;
        }
    } while (edit != 5);
}

void print_task_list(struct taskList* theme1) {
    for (int i = 0; i < theme1->size - 1; i++) {
        printf("Вопрос %d: %s\n", i + 1, theme1->tasks[i].quest);
        for (int j = 0; j < 4; j++) {
            printf("%d. %s\n", j + 1, theme1->tasks[i].ans[j]);
        }
    }

    printf("Вопрос %d: %s\n\n", theme1->size, theme1->tasks[theme1->size - 1].quest);
    for (int j = 0; j < 4; j++) {
        printf("%d. %s\n\n", j + 1, theme1->tasks[theme1->size - 1].ans[j]);
    }
}


void write_into_f(struct taskList* theme1, int th) {

    switch (th)
    {
    case 1:

        FILE * f1;
        fopen_s(&f1, "C:/Users/ADMIN/source/repos/c0rdyy/Testing-System/Testing-System/Address.quest_2.txt", "w");
        if (!f1) {
            printf("Файл не найден.\n");
        }
        else {
            for (int i = 0; i < theme1->size; i++) {
                if (i < theme1->size - 1) {
                    fprintf(f1, "%s", theme1->tasks[i].quest);
                }
                else {
                    int length = strlen(theme1->tasks[i].quest);
                    if (length > 0 && theme1->tasks[i].quest[length - 1] == '\n') {
                        theme1->tasks[i].quest[length - 1] = '\0';
                    }
                    fprintf(f1, "%s", theme1->tasks[i].quest);
                }
            }
        }
        fclose(f1);

        //1 ответ (правильный)
        FILE* f01;
        fopen_s(&f01, "C:/Users/ADMIN/source/repos/c0rdyy/Testing-System/Testing-System/Address.ans0_2.txt", "w");
        if (f01) {
            for (int i = 0; i < theme1->size; i++) {
                if (i < theme1->size - 1) {
                    fprintf(f01, "%s", theme1->tasks[i].ans[0]);
                }
                else {
                    int length = strlen(theme1->tasks[i].ans[0]);
                    if (length > 0 && theme1->tasks[i].ans[0][length - 1] == '\n') {
                        theme1->tasks[i].ans[0][length - 1] = '\0';
                    }
                    fprintf(f01, "%s", theme1->tasks[i].ans[0]);
                }
            }
        }
        fclose(f01);

        //2 ответ
        FILE* f11;
        fopen_s(&f11, "C:/Users/ADMIN/source/repos/c0rdyy/Testing-System/Testing-System/Address.ans1_2.txt", "w");
        if (f11) {

            for (int i = 0; i < theme1->size; i++) {
                if (i < theme1->size - 1) {
                    fprintf(f11, "%s", theme1->tasks[i].ans[1]);
                }
                else {
                    int length = strlen(theme1->tasks[i].ans[1]);
                    if (length > 0 && theme1->tasks[i].ans[1][length - 1] == '\n') {
                        theme1->tasks[i].ans[1][length - 1] = '\0';
                    }
                    fprintf(f11, "%s", theme1->tasks[i].ans[1]);
                }
            }
        }
        fclose(f11);

        //3 ответ
        FILE* f21;
        fopen_s(&f21, "C:/Users/ADMIN/source/repos/c0rdyy/Testing-System/Testing-System/Address.ans2_2.txt", "w");
        if (f21) {

            for (int i = 0; i < theme1->size; i++) {
                if (i < theme1->size - 1) {
                    fprintf(f21, "%s", theme1->tasks[i].ans[2]);
                }
                else {
                    int length = strlen(theme1->tasks[i].ans[2]);
                    if (length > 0 && theme1->tasks[i].ans[2][length - 1] == '\n') {
                        theme1->tasks[i].ans[2][length - 1] = '\0';
                    }
                    fprintf(f21, "%s", theme1->tasks[i].ans[2]);
                }
            }
        }
        fclose(f21);

        //4 ответ
        FILE* f31;
        fopen_s(&f31, "C:/Users/ADMIN/source/repos/c0rdyy/Testing-System/Testing-System/Address.ans3_2.txt", "w");
        if (f31) {
            for (int i = 0; i < theme1->size; i++) {
                if (i < theme1->size - 1) {
                    fprintf(f31, "%s", theme1->tasks[i].ans[3]);
                }
                else {
                    int length = strlen(theme1->tasks[i].ans[3]);
                    if (length > 0 && theme1->tasks[i].ans[3][length - 1] == '\n') {
                        theme1->tasks[i].ans[3][length - 1] = '\0';
                    }
                    fprintf(f31, "%s", theme1->tasks[i].ans[3]);
                }
            }
        }
        fclose(f31);

        break;
    case 2:

        FILE * f2;
        fopen_s(&f2, "C:/Users/ADMIN/source/repos/c0rdyy/Testing-System/Testing-System/Array.quest_2.txt", "w");
        if (!f2) {
            printf("Файл не найден.\n");
        }
        else {
            for (int i = 0; i < theme1->size; i++) {
                if (i < theme1->size - 1) {
                    fprintf(f2, "%s", theme1->tasks[i].quest);
                }
                else {
                    int length = strlen(theme1->tasks[i].quest);
                    if (length > 0 && theme1->tasks[i].quest[length - 1] == '\n') {
                        theme1->tasks[i].quest[length - 1] = '\0';
                    }
                    fprintf(f2, "%s", theme1->tasks[i].quest);
                }
            }
        }
        fclose(f2);

        //1 ответ (правильный)
        FILE* f02;
        fopen_s(&f02, "C:/Users/ADMIN/source/repos/c0rdyy/Testing-System/Testing-System/Array.ans0_2.txt", "w");
        if (f02) {
            for (int i = 0; i < theme1->size; i++) {
                if (i < theme1->size - 1) {
                    fprintf(f02, "%s", theme1->tasks[i].ans[0]);
                }
                else {
                    int length = strlen(theme1->tasks[i].ans[0]);
                    if (length > 0 && theme1->tasks[i].ans[0][length - 1] == '\n') {
                        theme1->tasks[i].ans[0][length - 1] = '\0';
                    }
                    fprintf(f02, "%s", theme1->tasks[i].ans[0]);
                }
            }
        }
        fclose(f02);

        //2 ответ
        FILE* f12;
        fopen_s(&f12, "C:/Users/ADMIN/source/repos/c0rdyy/Testing-System/Testing-System/Array.ans1_2.txt", "w");
        if (f12) {
            for (int i = 0; i < theme1->size; i++) {
                if (i < theme1->size - 1) {
                    fprintf(f12, "%s", theme1->tasks[i].ans[1]);
                }
                else {
                    int length = strlen(theme1->tasks[i].ans[1]);
                    if (length > 0 && theme1->tasks[i].ans[1][length - 1] == '\n') {
                        theme1->tasks[i].ans[1][length - 1] = '\0';
                    }
                    fprintf(f12, "%s", theme1->tasks[i].ans[1]);
                }
            }
        }
        fclose(f12);

        //3 ответ
        FILE* f22;
        fopen_s(&f22, "C:/Users/ADMIN/source/repos/c0rdyy/Testing-System/Testing-System/Array.ans2_2.txt", "w");
        if (f22) {
            for (int i = 0; i < theme1->size; i++) {
                if (i < theme1->size - 1) {
                    fprintf(f22, "%s", theme1->tasks[i].ans[2]);
                }
                else {
                    int length = strlen(theme1->tasks[i].ans[2]);
                    if (length > 0 && theme1->tasks[i].ans[2][length - 1] == '\n') {
                        theme1->tasks[i].ans[2][length - 1] = '\0';
                    }
                    fprintf(f22, "%s", theme1->tasks[i].ans[2]);
                }
            }
        }
        fclose(f22);

        //4 ответ
        FILE* f32;
        fopen_s(&f32, "C:/Users/ADMIN/source/repos/c0rdyy/Testing-System/Testing-System/Array.ans3_2.txt", "w");
        if (f32) {
            for (int i = 0; i < theme1->size; i++) {
                if (i < theme1->size - 1) {
                    fprintf(f32, "%s", theme1->tasks[i].ans[3]);
                }
                else {
                    int length = strlen(theme1->tasks[i].ans[3]);
                    if (length > 0 && theme1->tasks[i].ans[3][length - 1] == '\n') {
                        theme1->tasks[i].ans[3][length - 1] = '\0';
                    }
                    fprintf(f32, "%s", theme1->tasks[i].ans[3]);
                }
            }
        }
        fclose(f32);

        break;
    case 3:

        FILE * f3;
        fopen_s(&f3, "C:/Users/ADMIN/source/repos/c0rdyy/Testing-System/Testing-System/Dynamic.quest_2.txt", "w");
        if (!f3) {
            printf("Файл не найден.\n");
        }
        else {
            for (int i = 0; i < theme1->size; i++) {
                if (i < theme1->size - 1) {
                    fprintf(f3, "%s", theme1->tasks[i].quest);
                }
                else {
                    int length = strlen(theme1->tasks[i].quest);
                    if (length > 0 && theme1->tasks[i].quest[length - 1] == '\n') {
                        theme1->tasks[i].quest[length - 1] = '\0';
                    }
                    fprintf(f3, "%s", theme1->tasks[i].quest);
                }
            }
        }
        fclose(f3);

        //1 ответ (правильный)
        FILE* f03;
        fopen_s(&f03, "C:/Users/ADMIN/source/repos/c0rdyy/Testing-System/Testing-System/Dynamic.ans0_2.txt", "w");
        if (f03) {
            for (int i = 0; i < theme1->size; i++) {
                if (i < theme1->size - 1) {
                    fprintf(f03, "%s", theme1->tasks[i].ans[0]);
                }
                else {
                    int length = strlen(theme1->tasks[i].ans[0]);
                    if (length > 0 && theme1->tasks[i].ans[0][length - 1] == '\n') {
                        theme1->tasks[i].ans[0][length - 1] = '\0';
                    }
                    fprintf(f03, "%s", theme1->tasks[i].ans[0]);
                }
            }
        }
        fclose(f03);

        //2 ответ
        FILE* f13;
        fopen_s(&f13, "C:/Users/ADMIN/source/repos/c0rdyy/Testing-System/Testing-System/Dynamic.ans1_2.txt", "w");
        if (f13) {
            for (int i = 0; i < theme1->size; i++) {
                if (i < theme1->size - 1) {
                    fprintf(f13, "%s", theme1->tasks[i].ans[1]);
                }
                else {
                    int length = strlen(theme1->tasks[i].ans[1]);
                    if (length > 0 && theme1->tasks[i].ans[1][length - 1] == '\n') {
                        theme1->tasks[i].ans[1][length - 1] = '\0';
                    }
                    fprintf(f13, "%s", theme1->tasks[i].ans[1]);
                }
            }
        }
        fclose(f13);

        //3 ответ
        FILE* f23;
        fopen_s(&f23, "C:/Users/ADMIN/source/repos/c0rdyy/Testing-System/Testing-System/Dynamic.ans2_2.txt", "w");
        if (f23) {
            for (int i = 0; i < theme1->size; i++) {
                if (i < theme1->size - 1) {
                    fprintf(f23, "%s", theme1->tasks[i].ans[2]);
                }
                else {
                    int length = strlen(theme1->tasks[i].ans[2]);
                    if (length > 0 && theme1->tasks[i].ans[2][length - 1] == '\n') {
                        theme1->tasks[i].ans[2][length - 1] = '\0';
                    }
                    fprintf(f23, "%s", theme1->tasks[i].ans[2]);
                }
            }
        }
        fclose(f23);

        //4 ответ
        FILE* f33;
        fopen_s(&f33, "C:/Users/ADMIN/source/repos/c0rdyy/Testing-System/Testing-System/Dynamic.ans3_2.txt", "w");
        if (f33) {
            for (int i = 0; i < theme1->size; i++) {
                if (i < theme1->size - 1) {
                    fprintf(f33, "%s", theme1->tasks[i].ans[3]);
                }
                else {
                    int length = strlen(theme1->tasks[i].ans[3]);
                    if (length > 0 && theme1->tasks[i].ans[3][length - 1] == '\n') {
                        theme1->tasks[i].ans[3][length - 1] = '\0';
                    }
                    fprintf(f33, "%s", theme1->tasks[i].ans[3]);
                }
            }
        }
        fclose(f33);

        break;
    case 4:

        FILE * f4;
        fopen_s(&f4, "C:/Users/ADMIN/source/repos/c0rdyy/Testing-System/Testing-System/File.quest_2.txt", "w");
        if (!f4) {
            printf("Файл не найден.\n");
        }
        else {
            for (int i = 0; i < theme1->size; i++) {
                if (i < theme1->size - 1) {
                    fprintf(f4, "%s", theme1->tasks[i].quest);
                }
                else {
                    int length = strlen(theme1->tasks[i].quest);
                    if (length > 0 && theme1->tasks[i].quest[length - 1] == '\n') {
                        theme1->tasks[i].quest[length - 1] = '\0';
                    }
                    fprintf(f4, "%s", theme1->tasks[i].quest);
                }
            }
        }
        fclose(f4);

        //1 ответ (правильный)
        FILE* f04;
        fopen_s(&f04, "C:/Users/ADMIN/source/repos/c0rdyy/Testing-System/Testing-System/File.ans0_2.txt", "w");
        if (f04) {
            for (int i = 0; i < theme1->size; i++) {
                if (i < theme1->size - 1) {
                    fprintf(f04, "%s", theme1->tasks[i].ans[0]);
                }
                else {
                    int length = strlen(theme1->tasks[i].ans[0]);
                    if (length > 0 && theme1->tasks[i].ans[0][length - 1] == '\n') {
                        theme1->tasks[i].ans[0][length - 1] = '\0';
                    }
                    fprintf(f04, "%s", theme1->tasks[i].ans[0]);
                }
            }
        }
        fclose(f04);

        //2 ответ
        FILE* f14;
        fopen_s(&f14, "C:/Users/ADMIN/source/repos/c0rdyy/Testing-System/Testing-System/File.ans1_2.txt", "w");
        if (f14) {
            for (int i = 0; i < theme1->size; i++) {
                if (i < theme1->size - 1) {
                    fprintf(f14, "%s", theme1->tasks[i].ans[1]);
                }
                else {
                    int length = strlen(theme1->tasks[i].ans[1]);
                    if (length > 0 && theme1->tasks[i].ans[1][length - 1] == '\n') {
                        theme1->tasks[i].ans[1][length - 1] = '\0';
                    }
                    fprintf(f14, "%s", theme1->tasks[i].ans[1]);
                }
            }
        }
        fclose(f14);

        //3 ответ
        FILE* f24;
        fopen_s(&f24, "C:/Users/ADMIN/source/repos/c0rdyy/Testing-System/Testing-System/File.ans2_2.txt", "w");
        if (f24) {
            for (int i = 0; i < theme1->size; i++) {
                if (i < theme1->size - 1) {
                    fprintf(f24, "%s", theme1->tasks[i].ans[2]);
                }
                else {
                    int length = strlen(theme1->tasks[i].ans[2]);
                    if (length > 0 && theme1->tasks[i].ans[2][length - 1] == '\n') {
                        theme1->tasks[i].ans[2][length - 1] = '\0';
                    }
                    fprintf(f24, "%s", theme1->tasks[i].ans[2]);
                }
            }
        }
        fclose(f24);

        //4 ответ
        FILE* f34;
        fopen_s(&f34, "C:/Users/ADMIN/source/repos/c0rdyy/Testing-System/Testing-System/File.ans3_2.txt", "w");
        if (f34) {
            for (int i = 0; i < theme1->size; i++) {
                if (i < theme1->size - 1) {
                    fprintf(f34, "%s", theme1->tasks[i].ans[3]);
                }
                else {
                    int length = strlen(theme1->tasks[i].ans[3]);
                    if (length > 0 && theme1->tasks[i].ans[3][length - 1] == '\n') {
                        theme1->tasks[i].ans[3][length - 1] = '\0';
                    }
                    fprintf(f34, "%s", theme1->tasks[i].ans[3]);
                }
            }
        }
        fclose(f34);

        break;
    case 5:

        FILE * f5;
        fopen_s(&f5, "C:/Users/ADMIN/source/repos/c0rdyy/Testing-System/Testing-System/Loop.quest_2.txt", "w");
        if (!f5) {
            printf("Файл не найден.\n");
        }
        else {
            for (int i = 0; i < theme1->size; i++) {
                if (i < theme1->size - 1) {
                    fprintf(f5, "%s", theme1->tasks[i].quest);
                }
                else {
                    int length = strlen(theme1->tasks[i].quest);
                    if (length > 0 && theme1->tasks[i].quest[length - 1] == '\n') {
                        theme1->tasks[i].quest[length - 1] = '\0';
                    }
                    fprintf(f5, "%s", theme1->tasks[i].quest);
                }
            }
        }
        fclose(f5);

        //1 ответ (правильный)
        FILE* f05;
        fopen_s(&f05, "C:/Users/ADMIN/source/repos/c0rdyy/Testing-System/Testing-System/Loop.ans0_2.txt", "w");
        if (f05) {
            for (int i = 0; i < theme1->size; i++) {
                if (i < theme1->size - 1) {
                    fprintf(f05, "%s", theme1->tasks[i].ans[0]);
                }
                else {
                    int length = strlen(theme1->tasks[i].ans[0]);
                    if (length > 0 && theme1->tasks[i].ans[0][length - 1] == '\n') {
                        theme1->tasks[i].ans[0][length - 1] = '\0';
                    }
                    fprintf(f05, "%s", theme1->tasks[i].ans[0]);
                }
            }
        }
        fclose(f05);

        //2 ответ
        FILE* f15;
        fopen_s(&f15, "C:/Users/ADMIN/source/repos/c0rdyy/Testing-System/Testing-System/Loop.ans1_2.txt", "w");
        if (f15) {
            for (int i = 0; i < theme1->size; i++) {
                if (i < theme1->size - 1) {
                    fprintf(f15, "%s", theme1->tasks[i].ans[1]);
                }
                else {
                    int length = strlen(theme1->tasks[i].ans[1]);
                    if (length > 0 && theme1->tasks[i].ans[1][length - 1] == '\n') {
                        theme1->tasks[i].ans[1][length - 1] = '\0';
                    }
                    fprintf(f15, "%s", theme1->tasks[i].ans[1]);
                }
            }
        }
        fclose(f15);

        //3 ответ
        FILE* f25;
        fopen_s(&f25, "C:/Users/ADMIN/source/repos/c0rdyy/Testing-System/Testing-System/Loop.ans2_2.txt", "w");
        if (f25) {
            for (int i = 0; i < theme1->size; i++) {
                if (i < theme1->size - 1) {
                    fprintf(f25, "%s", theme1->tasks[i].ans[2]);
                }
                else {
                    int length = strlen(theme1->tasks[i].ans[2]);
                    if (length > 0 && theme1->tasks[i].ans[2][length - 1] == '\n') {
                        theme1->tasks[i].ans[2][length - 1] = '\0';
                    }
                    fprintf(f25, "%s", theme1->tasks[i].ans[2]);
                }
            }
        }
        fclose(f25);

        //4 ответ
        FILE* f35;
        fopen_s(&f35, "C:/Users/ADMIN/source/repos/c0rdyy/Testing-System/Testing-System/Loop.ans3_2.txt", "w");
        if (f35) {
            for (int i = 0; i < theme1->size; i++) {
                if (i < theme1->size - 1) {
                    fprintf(f35, "%s", theme1->tasks[i].ans[3]);
                }
                else {
                    int length = strlen(theme1->tasks[i].ans[3]);
                    if (length > 0 && theme1->tasks[i].ans[3][length - 1] == '\n') {
                        theme1->tasks[i].ans[3][length - 1] = '\0';
                    }
                    fprintf(f35, "%s", theme1->tasks[i].ans[3]);
                }
            }
        }
        fclose(f35);

        break;
    case 6:

        FILE * f6;
        fopen_s(&f6, "C:/Users/ADMIN/source/repos/c0rdyy/Testing-System/Testing-System/Recursion.quest_2.txt", "w");
        if (!f6) {
            printf("Файл не найден.\n");
        }
        else {
            for (int i = 0; i < theme1->size; i++) {
                if (i < theme1->size - 1) {
                    fprintf(f6, "%s", theme1->tasks[i].quest);
                }
                else {
                    int length = strlen(theme1->tasks[i].quest);
                    if (length > 0 && theme1->tasks[i].quest[length - 1] == '\n') {
                        theme1->tasks[i].quest[length - 1] = '\0';
                    }
                    fprintf(f6, "%s", theme1->tasks[i].quest);
                }
            }
        }
        fclose(f6);

        //1 ответ (правильный)
        FILE* f06;
        fopen_s(&f06, "C:/Users/ADMIN/source/repos/c0rdyy/Testing-System/Testing-System/Recursion.ans0_2.txt", "w");
        if (f06) {
            for (int i = 0; i < theme1->size; i++) {
                if (i < theme1->size - 1) {
                    fprintf(f06, "%s", theme1->tasks[i].ans[0]);
                }
                else {
                    int length = strlen(theme1->tasks[i].ans[0]);
                    if (length > 0 && theme1->tasks[i].ans[0][length - 1] == '\n') {
                        theme1->tasks[i].ans[0][length - 1] = '\0';
                    }
                    fprintf(f06, "%s", theme1->tasks[i].ans[0]);
                }
            }
        }
        fclose(f06);

        //2 ответ
        FILE* f16;
        fopen_s(&f16, "C:/Users/ADMIN/source/repos/c0rdyy/Testing-System/Testing-System/Recursion.ans1_2.txt", "w");
        if (f16) {
            for (int i = 0; i < theme1->size; i++) {
                if (i < theme1->size - 1) {
                    fprintf(f16, "%s", theme1->tasks[i].ans[1]);
                }
                else {
                    int length = strlen(theme1->tasks[i].ans[1]);
                    if (length > 0 && theme1->tasks[i].ans[1][length - 1] == '\n') {
                        theme1->tasks[i].ans[1][length - 1] = '\0';
                    }
                    fprintf(f16, "%s", theme1->tasks[i].ans[1]);
                }
            }
        }
        fclose(f16);

        //3 ответ
        FILE* f26;
        fopen_s(&f26, "C:/Users/ADMIN/source/repos/c0rdyy/Testing-System/Testing-System/Recursion.ans2_2.txt", "w");
        if (f26) {
            for (int i = 0; i < theme1->size; i++) {
                if (i < theme1->size - 1) {
                    fprintf(f26, "%s", theme1->tasks[i].ans[2]);
                }
                else {
                    int length = strlen(theme1->tasks[i].ans[2]);
                    if (length > 0 && theme1->tasks[i].ans[2][length - 1] == '\n') {
                        theme1->tasks[i].ans[2][length - 1] = '\0';
                    }
                    fprintf(f26, "%s", theme1->tasks[i].ans[2]);
                }
            }
        }
        fclose(f26);

        //4 ответ
        FILE* f36;
        fopen_s(&f36, "C:/Users/ADMIN/source/repos/c0rdyy/Testing-System/Testing-System/Recursion.ans3_2.txt", "w");
        if (f36) {
            for (int i = 0; i < theme1->size; i++) {
                if (i < theme1->size - 1) {
                    fprintf(f36, "%s", theme1->tasks[i].ans[3]);
                }
                else {
                    int length = strlen(theme1->tasks[i].ans[3]);
                    if (length > 0 && theme1->tasks[i].ans[3][length - 1] == '\n') {
                        theme1->tasks[i].ans[3][length - 1] = '\0';
                    }
                    fprintf(f36, "%s", theme1->tasks[i].ans[3]);
                }
            }
        }

        fclose(f36);

        break;
    case 7:

        FILE * f7;
        fopen_s(&f7, "C:/Users/ADMIN/source/repos/c0rdyy/Testing-System/Testing-System/String.quest_2.txt", "w");
        if (!f7) {
            printf("Файл не найден.\n");
        }
        else {
            for (int i = 0; i < theme1->size; i++) {
                if (i < theme1->size - 1) {
                    fprintf(f7, "%s", theme1->tasks[i].quest);
                }
                else {
                    int length = strlen(theme1->tasks[i].quest);
                    if (length > 0 && theme1->tasks[i].quest[length - 1] == '\n') {
                        theme1->tasks[i].quest[length - 1] = '\0';
                    }
                    fprintf(f7, "%s", theme1->tasks[i].quest);
                }
            }
        }
        fclose(f7);

        //1 ответ (правильный)
        FILE* f07;
        fopen_s(&f07, "C:/Users/ADMIN/source/repos/c0rdyy/Testing-System/Testing-System/String.ans0_2.txt", "w");
        if (f07) {
            for (int i = 0; i < theme1->size; i++) {
                if (i < theme1->size - 1) {
                    fprintf(f07, "%s", theme1->tasks[i].ans[0]);
                }
                else {
                    int length = strlen(theme1->tasks[i].ans[0]);
                    if (length > 0 && theme1->tasks[i].ans[0][length - 1] == '\n') {
                        theme1->tasks[i].ans[0][length - 1] = '\0';
                    }
                    fprintf(f07, "%s", theme1->tasks[i].ans[0]);
                }
            }
        }
        fclose(f07);

        //2 ответ
        FILE* f17;
        fopen_s(&f17, "C:/Users/ADMIN/source/repos/c0rdyy/Testing-System/Testing-System/String.ans1_2.txt", "w");
        if (f17) {
            for (int i = 0; i < theme1->size; i++) {
                if (i < theme1->size - 1) {
                    fprintf(f17, "%s", theme1->tasks[i].ans[1]);
                }
                else {
                    int length = strlen(theme1->tasks[i].ans[1]);
                    if (length > 0 && theme1->tasks[i].ans[1][length - 1] == '\n') {
                        theme1->tasks[i].ans[1][length - 1] = '\0';
                    }
                    fprintf(f17, "%s", theme1->tasks[i].ans[1]);
                }
            }
        }
        fclose(f17);

        //3 ответ
        FILE* f27;
        fopen_s(&f27, "C:/Users/ADMIN/source/repos/c0rdyy/Testing-System/Testing-System/String.ans2_2.txt", "w");
        if (f27) {
            for (int i = 0; i < theme1->size; i++) {
                if (i < theme1->size - 1) {
                    fprintf(f27, "%s", theme1->tasks[i].ans[2]);
                }
                else {
                    int length = strlen(theme1->tasks[i].ans[2]);
                    if (length > 0 && theme1->tasks[i].ans[2][length - 1] == '\n') {
                        theme1->tasks[i].ans[2][length - 1] = '\0';
                    }
                    fprintf(f27, "%s", theme1->tasks[i].ans[2]);
                }
            }
        }
        fclose(f27);

        //4 ответ
        FILE* f37;
        fopen_s(&f37, "C:/Users/ADMIN/source/repos/c0rdyy/Testing-System/Testing-System/String.ans3_2.txt", "w");
        if (f37) {
            for (int i = 0; i < theme1->size; i++) {
                if (i < theme1->size - 1) {
                    fprintf(f37, "%s", theme1->tasks[i].ans[3]);
                }
                else {
                    int length = strlen(theme1->tasks[i].ans[3]);
                    if (length > 0 && theme1->tasks[i].ans[3][length - 1] == '\n') {
                        theme1->tasks[i].ans[3][length - 1] = '\0';
                    }
                    fprintf(f37, "%s", theme1->tasks[i].ans[3]);
                }
            }
        }
        fclose(f37);

        break;
    case 8:

        FILE * f8;
        fopen_s(&f8, "C:/Users/ADMIN/source/repos/c0rdyy/Testing-System/Testing-System/Structure.quest_2.txt", "w");
        if (!f8) {
            printf("Файл не найден.\n");
        }
        else {
            for (int i = 0; i < theme1->size; i++) {
                if (i < theme1->size - 1) {
                    fprintf(f8, "%s", theme1->tasks[i].quest);
                }
                else {
                    int length = strlen(theme1->tasks[i].quest);
                    if (length > 0 && theme1->tasks[i].quest[length - 1] == '\n') {
                        theme1->tasks[i].quest[length - 1] = '\0';
                    }
                    fprintf(f8, "%s", theme1->tasks[i].quest);
                }
            }
        }
        fclose(f8);

        //1 ответ (правильный)
        FILE* f08;
        fopen_s(&f08, "C:/Users/ADMIN/source/repos/c0rdyy/Testing-System/Testing-System/Structure.ans0_2.txt", "w");
        if (f08) {
            for (int i = 0; i < theme1->size; i++) {
                if (i < theme1->size - 1) {
                    fprintf(f08, "%s", theme1->tasks[i].ans[0]);
                }
                else {
                    int length = strlen(theme1->tasks[i].ans[0]);
                    if (length > 0 && theme1->tasks[i].ans[0][length - 1] == '\n') {
                        theme1->tasks[i].ans[0][length - 1] = '\0';
                    }
                    fprintf(f08, "%s", theme1->tasks[i].ans[0]);
                }
            }
        }
        fclose(f08);

        //2 ответ
        FILE* f18;
        fopen_s(&f18, "C:/Users/ADMIN/source/repos/c0rdyy/Testing-System/Testing-System/Structure.ans1_2.txt", "w");
        if (f18) {
            for (int i = 0; i < theme1->size; i++) {
                if (i < theme1->size - 1) {
                    fprintf(f18, "%s", theme1->tasks[i].ans[1]);
                }
                else {
                    int length = strlen(theme1->tasks[i].ans[1]);
                    if (length > 0 && theme1->tasks[i].ans[1][length - 1] == '\n') {
                        theme1->tasks[i].ans[1][length - 1] = '\0';
                    }
                    fprintf(f18, "%s", theme1->tasks[i].ans[1]);
                }
            }
        }
        fclose(f18);

        //3 ответ
        FILE* f28;
        fopen_s(&f28, "C:/Users/ADMIN/source/repos/c0rdyy/Testing-System/Testing-System/Structure.ans2_2.txt", "w");
        if (f28) {
            for (int i = 0; i < theme1->size; i++) {
                if (i < theme1->size - 1) {
                    fprintf(f28, "%s", theme1->tasks[i].ans[2]);
                }
                else {
                    int length = strlen(theme1->tasks[i].ans[2]);
                    if (length > 0 && theme1->tasks[i].ans[2][length - 1] == '\n') {
                        theme1->tasks[i].ans[2][length - 1] = '\0';
                    }
                    fprintf(f28, "%s", theme1->tasks[i].ans[2]);
                }
            }
        }
        fclose(f28);

        //4 ответ
        FILE* f38;
        fopen_s(&f38, "C:/Users/ADMIN/source/repos/c0rdyy/Testing-System/Testing-System/Structure.ans3_2.txt", "w");
        if (f38) {
            for (int i = 0; i < theme1->size; i++) {
                if (i < theme1->size - 1) {
                    fprintf(f38, "%s", theme1->tasks[i].ans[3]);
                }
                else {
                    int length = strlen(theme1->tasks[i].ans[3]);
                    if (length > 0 && theme1->tasks[i].ans[3][length - 1] == '\n') {
                        theme1->tasks[i].ans[3][length - 1] = '\0';
                    }
                    fprintf(f38, "%s", theme1->tasks[i].ans[3]);
                }
            }
        }
        fclose(f38);
        break;
    }
}

void edit_que() {
    getchar();
    char d;
    int n;
    char th;

    struct taskList database;

    do {
        printf("|------Редактирование-вопросов------|\n");
        printf("|Выберете действие:                 |\n");
        printf("|                                   |\n");
        printf("|1.Добавление                       |\n");
        printf("|2.Удаление                         |\n");
        printf("|3.Изменение                        |\n");
        printf("|                                   |\n");
        printf("|Для выхода нажмите '0'             |\n");
        printf("|-----------------------------------|\n");

        do {
            printf("Ваш выбор: ");
            scanf_s("%c", &d); getchar(); printf("\n");
            if (d < 48 || d > 51) { printf("Некорректный ввод. Повторите попытку.\n"); }
        } while (d < 48 || d > 51);
        d = d - '0';

        if (d != 0) {
            printf("Темы:\n\n1 - Адрес\n2 - Массив\n3 - Динамическая структура данных\n4 - Файл\n5 - Цикл\n6 - Рекурсия\n7 - Строки\n8 - Структура\n\n");
            do {
                printf("Выберите тему: "); scanf_s("%c", &th); printf("\n");
                if (th < 49 || th > 56) { printf("Некорректный ввод. Повторите ввод.\n");  getchar(); }
            } while (th < 49 || th > 56);
            th = th - '0';


            readf(&database, th);
            print_task_list(&database);
        }

        switch (d) {

            //Добавление вопроса
        case 1:
            add_question(&database);
            write_into_f(&database, th);
            printf("\nНовые вопросы:\n");
            print_task_list(&database);
            printf("\n");
            break;

            //Удаление вопроса
        case 2:
            do {
                printf("Введите номер удаляемого вопроса: "); scanf_s("%d", &n); printf("\n"); getchar();
                if (n < 1 || n > database.size) { printf("Такого номера не существует. Повторите попытку.\n"); getchar(); }
            } while (n < 1 || n > database.size);

            del_question(&database, 1, n - 1);
            write_into_f(&database, th);
            print_task_list(&database);
            printf("\n");
            break;

            //Редактирование вопроса
        case 3:
            do {
                printf("Введите номер редактируемого вопроса: "); scanf_s("%d", &n); printf("\n");
                if (n < 1 || n > database.size) { printf("Такого номера не существует. Повторите попытку.\n"); getchar(); }
            } while (n < 1 || n > database.size);

            print_que(&database, n - 1);
            edit_question(&database, n - 1);
            write_into_f(&database, th);
            print_que(&database, n - 1);
            print_task_list(&database);
            printf("\n");
            break;
        case 0: printf("Выход.\n"); break;
        }
    } while (d != 0);
}