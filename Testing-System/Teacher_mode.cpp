#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <Windows.h>
#include "Teacher_mode.h"
#include "EditQ.h"
#include "Encryption.h"
#include "CHAR.h"

#define MAX_LINE_LENGTH 256

const char* themes[] =
{
"Адреса и указатели",
"Массивы",
"Динамическая память",
"Файлы",
"Циклы",
"Рекурсия",
"Строки",
"Структуры"
};

int teacherMode() {


    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "Rus");
    

    const char* filename = "Students_2.txt";

    char password[20];
    char correctPassword[] = "1";
    int choice = 0, filter = 0, t = 0, num = 0;

    printf("\n");

    do {
        printf("Введите пароль преподавателя: ");
        scanf_s("%s", password, sizeof(password));

        if (strcmp(password, correctPassword) == 0) {
            printf("Доступ предоставлен\n");
        }
        else {
            printf("Некорректный ввод. Повторите попытку.\n");
        }
    } while (strcmp(password, correctPassword) != 0);

    while (1) {
        printf("|---------------МЕНЮ----------------|\n");
        printf("|Выберите режим:                    |\n");
        printf("|                                   |\n");
        printf("|1.Редактирование вопросов          |\n");
        printf("|2.Работа со списком студентов      |\n");
        printf("|                                   |\n");
        printf("|Для выхода нажмите '0'             |\n");
        printf("|-----------------------------------|\n");

        scanf_s("%d", &choice);
        if (choice == 0) {
            printf("Выход\n");
            break;
        }


        switch (choice) {
        case 1: {
            edit_que();
        } break;

        case 2: {
            DECRYPTION(input_2_Array_ans0, output_Array_ans0, input_2_Array_ans1, output_Array_ans1, input_2_Array_ans2, output_Array_ans2, input_2_Array_ans3, output_Array_ans3, input_2_Array_quest, output_Array_quest, input_2_Dynamic_ans0, output_Dynamic_ans0, input_2_Dynamic_ans1, output_Dynamic_ans1, input_2_Dynamic_ans2, output_Dynamic_ans2, input_2_Dynamic_ans3, output_Dynamic_ans3, input_2_Dynamic_quest, output_Dynamic_quest, input_2_File_ans0, output_File_ans0, input_2_File_ans1, output_File_ans1, input_2_File_ans2, output_File_ans2, input_2_File_ans3, output_File_ans3, input_2_File_quest, output_File_quest, input_2_Loop_ans0, output_Loop_ans0, input_2_Loop_ans1, output_Loop_ans1, input_2_Loop_ans2, output_Loop_ans2, input_2_Loop_ans3, output_Loop_ans3, input_2_Loop_quest, output_Loop_quest, input_2_Recursion_ans0, output_Recursion_ans0, input_2_Recursion_ans1, output_Recursion_ans1, input_2_Recursion_ans2, output_Recursion_ans2, input_2_Recursion_ans3, output_Recursion_ans3, input_2_Recursion_quest, output_Recursion_quest, input_2_String_ans0, output_String_ans0, input_2_String_ans1, output_String_ans1, input_2_String_ans2, output_String_ans2, input_2_String_ans3, output_String_ans3, input_2_String_quest, output_String_quest, input_2_Structure_ans0, output_Structure_ans0, input_2_Structure_ans1, output_Structure_ans1, input_2_Structure_ans2, output_Structure_ans2, input_2_Structure_ans3, output_Structure_ans3, input_2_Structure_quest, output_Structure_quest, input_2_Address_ans0, output_Address_ans0, input_2_Address_ans1, output_Address_ans1, input_2_Address_ans2, output_Address_ans2, input_2_Address_ans3, output_Address_ans3, input_2_Address_quest, output_Address_quest, input_2_Students, output_Students, shift);
            int ch2;
            do {
                printf("|----Работа-со-списком-студентов----|\n");
                printf("|Выберите действие:                 |\n");
                printf("|                                   |\n");
                printf("|1.Удаление и регистрация студентов |\n");
                printf("|2.Изменение прогресса студентов    |\n");
                printf("|3.Вывод списка студентов с оценками|\n");
                printf("|4.Сортировка по оценкам            |\n");
                printf("|                                   |\n");
                printf("|Для выхода нажмите '0'             |\n");
                printf("|-----------------------------------|\n");

                scanf_s("%d", &ch2);
                if (ch2 == 0) break;

                switch (ch2) {
                case 1: {
                    int ch3;
                    do {
                        printf("СПИСОК СТУДЕНТОВ\n");
                        list();
                        printf("|-----------------------------------|\n");
                        printf("|Выберите действие:                 |\n");
                        printf("|                                   |\n");
                        printf("|1.Регистрация студента             |\n");
                        printf("|2.Удаление студента                |\n");
                        printf("|                                   |\n");
                        printf("|Для выхода нажмите '0'             |\n");
                        printf("|-----------------------------------|\n");

                        scanf_s("%d", &ch3);
                        if (ch3 == 0) break;

                        switch (ch3) {
                        case 1: addStudent(filename); break;
                        case 2: {
                            printf("Введите логин студента для удаления: ");
                            char studentLogin[50];
                            scanf("%s", studentLogin);
                            deleteStudent(filename, studentLogin);
                        } break;
                        default: printf("Некорректный ввод. Повторите попытку.\n"); break;
                        }
                    } while (1);
                } break;
                case 2: {
                    char login[50];
                    printf("Введите логин студента для обновления прогресса: ");
                    scanf("%s", login);
                    updateStudentProgress(filename, login);
                } break;
                case 3: {
                    Student students[100];
                    num = readStudentData(filename, students);
                    int choice3;
                    do {
                        printf("Что вы желаете посмотреть?\n");
                        printf("1. Ответы по всем темам\n");
                        printf("2. Ответы по конкретной теме\n");
                        printf("3. Ответы по итоговому тесту\n");
                        printf("4. Средний балл\n");
                        printf("Для выхода нажмите 0\n");
                        scanf("%d", &choice3);
                        if (choice3 == 0) break;

                        switch (choice3) {
                        case 1:
                            printf("Введите желаемую оценку для фильтрации. Если не желаете фильтровать, введите 0\n");
                            scanf("%d", &filter);
                            if (filter < 0 || filter > 10) {
                                printf("Такой оценки не существует");
                                break;
                            }
                            printAllThemes(students, num, filter);
                            break;
                        case 2:
                            printf("По какой теме вы желаете увидеть результаты?\n");
                            for (int i = 0; i < 8; i++) {
                                printf("%d. %s.\n", i + 1, themes[i]);
                            }
                            scanf("%d", &t);
                            if (t < 1 || t > 8) {
                                printf("Отсутствует такой вариант\n");
                                break;
                            }
                            printf("Введите желаемую оценку для фильтрации. Если не желаете фильтровать, введите 0\n");
                            scanf("%d", &filter);
                            if (filter < 0 || filter > 10) {
                                printf("Такой оценки не существует");
                                break;
                            }
                            printCurTheme(students, num, t - 1, filter);
                            break;
                        case 3:
                            printf("Введите желаемую оценку для фильтрации. 0 - студент не сдавал тест. Если не желаете фильтровать, введите -1\n");
                            scanf("%d", &filter);
                            if (filter < -1 || filter > 5) {
                                printf("Такой оценки не существует");
                                break;
                            }
                            printFinalTest(students, num, filter);
                            break;
                        default: printf("Некорректный ввод. Повторите попытку.\n"); break;
                        }
                    } while (1);
                } break;
                case 4: {
                    int choice4;
                    do {
                        printf("Что вы желаете сделать?\n1. Сортировка по определённой теме.\n2. Сортировка по итоговому тесту\n3. Сортировка по среднему баллу.\nДля выхода нажмите 0\n");
                        scanf("%d", &choice4);
                        if (choice4 == 0) break;

                        Student students[100];
                        num = readStudentData(filename, students);
                        int order;
                        while (1) {
                            printf("Выберите порядок сортировки:\n1. По возрастанию\n2. По убыванию\n");
                            scanf("%d", &order);
                            if (order == 1 || order == 2)
                                break;
                            else
                                printf("Некорректный ввод. Повторите попытку");
                        }
                        int ascending;
                        if (order == 1)
                            ascending = 0;
                        else
                            ascending = 1;
                        switch (choice4) {
                        case 1:
                            printf("По какой теме вы хотите сортировать?\n");
                            for (int i = 0; i < 8; i++) {
                                printf("%d. %s\n", i + 1, themes[i]);
                            }
                            scanf("%d", &t);
                            if (t < 1 || t > 8) {
                                printf("Некорректный ввод. Повторите попытку.\n");
                                break;
                            }
                            sortStudentsByTheme(students, num, t - 1, ascending);
                            listCur(students, num);
                            break;
                        case 2:
                            sortStudentsByFinalTest(students, num, ascending);
                            listCur(students, num);
                            break;
                        case 3:
                            sortStudentsByAverageScore(students, num, ascending);
                            listCur(students, num);
                            break;
                        default:
                            printf("Некорректный ввод. Повторите попытку.\n");
                            break;
                        }
                    } while (1);
                } break;
                }
            } while (1);
        } break;
        default: printf("Некорректный ввод. Повторите попытку.\n"); break;
        }
    }

    return 0;
}


int readStudentData(const char* filename, Student* students) {
    FILE* file = fopen(filename, "r");
    if (!file) {
        perror("Не удалось открыть файл");
        return 0;
    }

    char line[MAX_LINE_LENGTH];
    int i = 0;
    while (fgets(line, sizeof(line), file)) {

        Student student;
        char* token = strtok(line, "|");
        if (token) {
            strcpy(student.firstName, token);
            token = strtok(NULL, "|");
        }
        if (token) {
            strcpy(student.lastName, token);
            token = strtok(NULL, "|");
        }
        if (token) {
            strcpy(student.login, token);
            token = strtok(NULL, "|");
        }
        if (token) {
            strcpy(student.password, token);
        }

        for (int scoreIndex = 0; scoreIndex < 9; scoreIndex++) {
            token = strtok(NULL, "|");
            student.scores[scoreIndex] = token ? atoi(token) : 0;
        }

        students[i] = student;
        i++;
    }
    fclose(file);
    return i;
}

int list() {
    const char* filename = "Students_2.txt";
    Student students[100];
    int num = readStudentData(filename, students);
    for (int i = 0; i < num; i++) {
        Student student = students[i];
        printf("Имя: %s\n", student.firstName);
        printf("Фамилия: %s\n", student.lastName);
        printf("Логин: %s\n", student.login);
        printf("Пароль: %s\n", student.password);
        for (int i = 0; i < 8; i++) {
            printf("Оценка по теме %s: %d\n", themes[i], student.scores[i]);
        }
        if (*student.scores != 9)
            printf("Итоговая оценка: %d\n", student.scores[8]);
        else
            printf("Студент не сдавал итоговый тест\n");
        printf("----------------------------\n");
    }
    return 0;
}

void addStudent(const char* filename) {

    FILE* file; 
    fopen_s(&file,filename, "a");
    if (!file) {
        perror("Не удалось открыть файл");
        return;
    }

    Student newStudent;

    printf("Введите имя студента: "); scanf("%s", newStudent.firstName);
    printf("Введите фамилию студента: "); scanf("%s", newStudent.lastName);
    printf("Введите логин студента: "); scanf("%s", newStudent.login);
    printf("Введите пароль студента: "); scanf("%s", newStudent.password);

    printf("Введите оценки студента по 9 темам: ");
    for (int i = 0; i < 9; i++) {
        do {
            scanf("%d", &newStudent.scores[i]);
            if (newStudent.scores[i] < 0 || (newStudent.scores[i] > 5 && newStudent.scores[i] < 9) || newStudent.scores[i]>9) printf("Некорректный ввод. Повторите попытку.\n");
        } while (newStudent.scores[i] < 0 || (newStudent.scores[i] > 5 && newStudent.scores[i] < 9) || newStudent.scores[i]>9);
    }

    fprintf(file, "%s|%s|%s|%s", newStudent.firstName, newStudent.lastName, newStudent.login, newStudent.password);
    for (int i = 0; i < 9; i++) {
        fprintf(file, "|%d", newStudent.scores[i]);
    }
    fprintf(file, "\n");

    fclose(file);

    ENCRYPTION1(input_2_Array_ans0, output_Array_ans0, input_2_Array_ans1, output_Array_ans1, input_2_Array_ans2, output_Array_ans2, input_2_Array_ans3, output_Array_ans3, input_2_Array_quest, output_Array_quest, input_2_Dynamic_ans0, output_Dynamic_ans0, input_2_Dynamic_ans1, output_Dynamic_ans1, input_2_Dynamic_ans2, output_Dynamic_ans2, input_2_Dynamic_ans3, output_Dynamic_ans3, input_2_Dynamic_quest, output_Dynamic_quest, input_2_File_ans0, output_File_ans0, input_2_File_ans1, output_File_ans1, input_2_File_ans2, output_File_ans2, input_2_File_ans3, output_File_ans3, input_2_File_quest, output_File_quest, input_2_Loop_ans0, output_Loop_ans0, input_2_Loop_ans1, output_Loop_ans1, input_2_Loop_ans2, output_Loop_ans2, input_2_Loop_ans3, output_Loop_ans3, input_2_Loop_quest, output_Loop_quest, input_2_Recursion_ans0, output_Recursion_ans0, input_2_Recursion_ans1, output_Recursion_ans1, input_2_Recursion_ans2, output_Recursion_ans2, input_2_Recursion_ans3, output_Recursion_ans3, input_2_Recursion_quest, output_Recursion_quest, input_2_String_ans0, output_String_ans0, input_2_String_ans1, output_String_ans1, input_2_String_ans2, output_String_ans2, input_2_String_ans3, output_String_ans3, input_2_String_quest, output_String_quest, input_2_Structure_ans0, output_Structure_ans0, input_2_Structure_ans1, output_Structure_ans1, input_2_Structure_ans2, output_Structure_ans2, input_2_Structure_ans3, output_Structure_ans3, input_2_Structure_quest, output_Structure_quest, input_2_Address_ans0, output_Address_ans0, input_2_Address_ans1, output_Address_ans1, input_2_Address_ans2, output_Address_ans2, input_2_Address_ans3, output_Address_ans3, input_2_Address_quest, output_Address_quest, input_2_Students, output_Students, shift);
    DECRYPTION1(input_Array_ans0, output_Array_ans0, input_Array_ans1, output_Array_ans1, input_Array_ans2, output_Array_ans2, input_Array_ans3, output_Array_ans3, input_Array_quest, output_Array_quest, input_Dynamic_ans0, output_Dynamic_ans0, input_Dynamic_ans1, output_Dynamic_ans1, input_Dynamic_ans2, output_Dynamic_ans2, input_Dynamic_ans3, output_Dynamic_ans3, input_Dynamic_quest, output_Dynamic_quest, input_File_ans0, output_File_ans0, input_File_ans1, output_File_ans1, input_File_ans2, output_File_ans2, input_File_ans3, output_File_ans3, input_File_quest, output_File_quest, input_Loop_ans0, output_Loop_ans0, input_Loop_ans1, output_Loop_ans1, input_Loop_ans2, output_Loop_ans2, input_Loop_ans3, output_Loop_ans3, input_Loop_quest, output_Loop_quest, input_Recursion_ans0, output_Recursion_ans0, input_Recursion_ans1, output_Recursion_ans1, input_Recursion_ans2, output_Recursion_ans2, input_Recursion_ans3, output_Recursion_ans3, input_Recursion_quest, output_Recursion_quest, input_String_ans0, output_String_ans0, input_String_ans1, output_String_ans1, input_String_ans2, output_String_ans2, input_String_ans3, output_String_ans3, input_String_quest, output_String_quest, input_Structure_ans0, output_Structure_ans0, input_Structure_ans1, output_Structure_ans1, input_Structure_ans2, output_Structure_ans2, input_Structure_ans3, output_Structure_ans3, input_Structure_quest, output_Structure_quest, input_Address_ans0, output_Address_ans0, input_Address_ans1, output_Address_ans1, input_Address_ans2, output_Address_ans2, input_Address_ans3, output_Address_ans3, input_Address_quest, output_Address_quest, input_Students, output_Students, shift);
}

void deleteStudent(const char* filename, const char* login) {

    FILE* file = fopen(filename, "r");
    if (!file) {
        perror("Не удалось открыть файл");
        return;
    }

    Student students[100];
    int count = 0;
    char line[MAX_LINE_LENGTH];

    while (fgets(line, sizeof(line), file)) {
        Student student;
        char* token = strtok(line, "|");
        if (token) {
            strcpy(student.firstName, token);
            token = strtok(NULL, "|");
        }
        if (token) {
            strcpy(student.lastName, token);
            token = strtok(NULL, "|");
        }
        if (token) {
            strcpy(student.login, token);
            token = strtok(NULL, "|");
        }
        if (token) {
            strcpy(student.password, token);
            token = strtok(NULL, "|");
        }
        for (int i = 0; i < 9; i++) {
            if (token) {
                token = strtok(NULL, "|");
                student.scores[i] = token ? atoi(token) : 0;
            }
        }

        if (strcmp(student.login, login) != 0) {
            students[count++] = student;
        }
    }
    fclose(file);

    file = fopen(filename, "w");
    if (!file) {
        perror("Не удалось открыть файл");
        return;
    }

    for (int i = 0; i < count; i++) {
        Student student = students[i];
        fprintf(file, "%s|%s|%s|%s", student.firstName, student.lastName, student.login, student.password);
        for (int j = 0; j < 9; j++) {
            fprintf(file, "|%d", student.scores[j]);
        }
        fprintf(file, "\n");
    }
    fclose(file);

    ENCRYPTION1(input_2_Array_ans0, output_Array_ans0, input_2_Array_ans1, output_Array_ans1, input_2_Array_ans2, output_Array_ans2, input_2_Array_ans3, output_Array_ans3, input_2_Array_quest, output_Array_quest, input_2_Dynamic_ans0, output_Dynamic_ans0, input_2_Dynamic_ans1, output_Dynamic_ans1, input_2_Dynamic_ans2, output_Dynamic_ans2, input_2_Dynamic_ans3, output_Dynamic_ans3, input_2_Dynamic_quest, output_Dynamic_quest, input_2_File_ans0, output_File_ans0, input_2_File_ans1, output_File_ans1, input_2_File_ans2, output_File_ans2, input_2_File_ans3, output_File_ans3, input_2_File_quest, output_File_quest, input_2_Loop_ans0, output_Loop_ans0, input_2_Loop_ans1, output_Loop_ans1, input_2_Loop_ans2, output_Loop_ans2, input_2_Loop_ans3, output_Loop_ans3, input_2_Loop_quest, output_Loop_quest, input_2_Recursion_ans0, output_Recursion_ans0, input_2_Recursion_ans1, output_Recursion_ans1, input_2_Recursion_ans2, output_Recursion_ans2, input_2_Recursion_ans3, output_Recursion_ans3, input_2_Recursion_quest, output_Recursion_quest, input_2_String_ans0, output_String_ans0, input_2_String_ans1, output_String_ans1, input_2_String_ans2, output_String_ans2, input_2_String_ans3, output_String_ans3, input_2_String_quest, output_String_quest, input_2_Structure_ans0, output_Structure_ans0, input_2_Structure_ans1, output_Structure_ans1, input_2_Structure_ans2, output_Structure_ans2, input_2_Structure_ans3, output_Structure_ans3, input_2_Structure_quest, output_Structure_quest, input_2_Address_ans0, output_Address_ans0, input_2_Address_ans1, output_Address_ans1, input_2_Address_ans2, output_Address_ans2, input_2_Address_ans3, output_Address_ans3, input_2_Address_quest, output_Address_quest, input_2_Students, output_Students, shift);
    DECRYPTION1(input_Array_ans0, output_Array_ans0, input_Array_ans1, output_Array_ans1, input_Array_ans2, output_Array_ans2, input_Array_ans3, output_Array_ans3, input_Array_quest, output_Array_quest, input_Dynamic_ans0, output_Dynamic_ans0, input_Dynamic_ans1, output_Dynamic_ans1, input_Dynamic_ans2, output_Dynamic_ans2, input_Dynamic_ans3, output_Dynamic_ans3, input_Dynamic_quest, output_Dynamic_quest, input_File_ans0, output_File_ans0, input_File_ans1, output_File_ans1, input_File_ans2, output_File_ans2, input_File_ans3, output_File_ans3, input_File_quest, output_File_quest, input_Loop_ans0, output_Loop_ans0, input_Loop_ans1, output_Loop_ans1, input_Loop_ans2, output_Loop_ans2, input_Loop_ans3, output_Loop_ans3, input_Loop_quest, output_Loop_quest, input_Recursion_ans0, output_Recursion_ans0, input_Recursion_ans1, output_Recursion_ans1, input_Recursion_ans2, output_Recursion_ans2, input_Recursion_ans3, output_Recursion_ans3, input_Recursion_quest, output_Recursion_quest, input_String_ans0, output_String_ans0, input_String_ans1, output_String_ans1, input_String_ans2, output_String_ans2, input_String_ans3, output_String_ans3, input_String_quest, output_String_quest, input_Structure_ans0, output_Structure_ans0, input_Structure_ans1, output_Structure_ans1, input_Structure_ans2, output_Structure_ans2, input_Structure_ans3, output_Structure_ans3, input_Structure_quest, output_Structure_quest, input_Address_ans0, output_Address_ans0, input_Address_ans1, output_Address_ans1, input_Address_ans2, output_Address_ans2, input_Address_ans3, output_Address_ans3, input_Address_quest, output_Address_quest, input_Students, output_Students, shift);

    printf("Студент с логином %s удален.\n", login);
}

void updateStudentProgress(const char* filename, const char* login) {

    FILE* file = fopen(filename, "r");
    if (!file) {
        perror("Не удалось открыть файл");
        return;
    }

    Student students[100];
    int count = 0;
    char line[MAX_LINE_LENGTH];

    while (fgets(line, sizeof(line), file)) {
        size_t len = strlen(line);
        if (len > 0 && line[len - 1] == '\n') {
            line[len - 1] = '\0';
        }

        Student student;
        char* token = strtok(line, "|");
        if (token) {
            strcpy(student.firstName, token);
            token = strtok(NULL, "|");
        }
        if (token) {
            strcpy(student.lastName, token);
            token = strtok(NULL, "|");
        }
        if (token) {
            strcpy(student.login, token);
            token = strtok(NULL, "|");
        }
        if (token) {
            strcpy(student.password, token);
            token = strtok(NULL, "|");
        }
        for (int j = 0; j < 9; j++) {
            if (token) {
                token = strtok(NULL, "|");
                student.scores[j] = token ? atoi(token) : 0;
            }
        }

        if (strcmp(student.login, login) == 0) {
            printf("Введите новые оценки студента по 9 темам: ");
            for (int j = 0; j < 9; j++) {
                do {
                    scanf("%d", &student.scores[j]);
                    if ((student.scores[j] < 0 || student.scores[j] > 5) && (student.scores[j] < 9 || student.scores[j] > 9)) {
                        printf("Некорректный ввод. Повторите попытку.\n");
                    }
                } while ((student.scores[j] < 0 || student.scores[j] > 5) && (student.scores[j] < 9 || student.scores[j] > 9));
            }
        }

        students[count++] = student;
    }
    fclose(file);

    file = fopen(filename, "w");
    if (!file) {
        perror("Не удалось открыть файл");
        return;
    }

    for (int i = 0; i < count; i++) {
        Student student = students[i];
        fprintf(file, "%s|%s|%s|%s", student.firstName, student.lastName, student.login, student.password);
        for (int j = 0; j < 9; j++) {
            fprintf(file, "|%d", student.scores[j]);
        }
        fprintf(file, "\n");
    }
    fclose(file);

    ENCRYPTION1(input_2_Array_ans0, output_Array_ans0, input_2_Array_ans1, output_Array_ans1, input_2_Array_ans2, output_Array_ans2, input_2_Array_ans3, output_Array_ans3, input_2_Array_quest, output_Array_quest, input_2_Dynamic_ans0, output_Dynamic_ans0, input_2_Dynamic_ans1, output_Dynamic_ans1, input_2_Dynamic_ans2, output_Dynamic_ans2, input_2_Dynamic_ans3, output_Dynamic_ans3, input_2_Dynamic_quest, output_Dynamic_quest, input_2_File_ans0, output_File_ans0, input_2_File_ans1, output_File_ans1, input_2_File_ans2, output_File_ans2, input_2_File_ans3, output_File_ans3, input_2_File_quest, output_File_quest, input_2_Loop_ans0, output_Loop_ans0, input_2_Loop_ans1, output_Loop_ans1, input_2_Loop_ans2, output_Loop_ans2, input_2_Loop_ans3, output_Loop_ans3, input_2_Loop_quest, output_Loop_quest, input_2_Recursion_ans0, output_Recursion_ans0, input_2_Recursion_ans1, output_Recursion_ans1, input_2_Recursion_ans2, output_Recursion_ans2, input_2_Recursion_ans3, output_Recursion_ans3, input_2_Recursion_quest, output_Recursion_quest, input_2_String_ans0, output_String_ans0, input_2_String_ans1, output_String_ans1, input_2_String_ans2, output_String_ans2, input_2_String_ans3, output_String_ans3, input_2_String_quest, output_String_quest, input_2_Structure_ans0, output_Structure_ans0, input_2_Structure_ans1, output_Structure_ans1, input_2_Structure_ans2, output_Structure_ans2, input_2_Structure_ans3, output_Structure_ans3, input_2_Structure_quest, output_Structure_quest, input_2_Address_ans0, output_Address_ans0, input_2_Address_ans1, output_Address_ans1, input_2_Address_ans2, output_Address_ans2, input_2_Address_ans3, output_Address_ans3, input_2_Address_quest, output_Address_quest, input_2_Students, output_Students, shift);
    DECRYPTION1(input_Array_ans0, output_Array_ans0, input_Array_ans1, output_Array_ans1, input_Array_ans2, output_Array_ans2, input_Array_ans3, output_Array_ans3, input_Array_quest, output_Array_quest, input_Dynamic_ans0, output_Dynamic_ans0, input_Dynamic_ans1, output_Dynamic_ans1, input_Dynamic_ans2, output_Dynamic_ans2, input_Dynamic_ans3, output_Dynamic_ans3, input_Dynamic_quest, output_Dynamic_quest, input_File_ans0, output_File_ans0, input_File_ans1, output_File_ans1, input_File_ans2, output_File_ans2, input_File_ans3, output_File_ans3, input_File_quest, output_File_quest, input_Loop_ans0, output_Loop_ans0, input_Loop_ans1, output_Loop_ans1, input_Loop_ans2, output_Loop_ans2, input_Loop_ans3, output_Loop_ans3, input_Loop_quest, output_Loop_quest, input_Recursion_ans0, output_Recursion_ans0, input_Recursion_ans1, output_Recursion_ans1, input_Recursion_ans2, output_Recursion_ans2, input_Recursion_ans3, output_Recursion_ans3, input_Recursion_quest, output_Recursion_quest, input_String_ans0, output_String_ans0, input_String_ans1, output_String_ans1, input_String_ans2, output_String_ans2, input_String_ans3, output_String_ans3, input_String_quest, output_String_quest, input_Structure_ans0, output_Structure_ans0, input_Structure_ans1, output_Structure_ans1, input_Structure_ans2, output_Structure_ans2, input_Structure_ans3, output_Structure_ans3, input_Structure_quest, output_Structure_quest, input_Address_ans0, output_Address_ans0, input_Address_ans1, output_Address_ans1, input_Address_ans2, output_Address_ans2, input_Address_ans3, output_Address_ans3, input_Address_quest, output_Address_quest, input_Students, output_Students, shift);

    printf("Прогресс студента с логином %s обновлен.\n", login);
}

void printAllThemes(Student* students, int count, int filter) {
    int is_showed_flag = 0;
    for (int i = 0; i < count; i++) {
        Student student = students[i];
        if (filter != 0) {
            int to_show_flag = 0;
            for (int i = 0; i < 8; i++) {
                if (student.scores[i] == filter)
                {
                    to_show_flag = 1;
                    break;
                }
            }
            if (!to_show_flag)
                continue;
        }
        is_showed_flag = 1;
        printf("Имя: %s\n", student.firstName);
        printf("Фамилия: %s\n", student.lastName);
        for (int i = 0; i < 8; i++) {
            if (student.scores[i] == filter || filter == 0)
                printf("Оценка по теме %s: %d\n", themes[i], student.scores[i]);
        }
        printf("----------------------------\n");
    }
    if (!is_showed_flag)
        printf("Отсутствуют результаты по данным параметрам");
}

void printCurTheme(Student* students, int count, int theme, int filter) {
    int is_showed_flag = 0;
    for (int i = 0; i < count; i++) {
        Student student = students[i];
        if (filter != 0) {
            if (student.scores[theme] != filter)
            {
                continue;
            }
        }
        is_showed_flag = 1;
        printf("Имя: %s\n", student.firstName);
        printf("Фамилия: %s\n", student.lastName);
        printf("Оценка по теме %s: %d\n", themes[theme], student.scores[theme]);
        printf("----------------------------\n");
    }
    if (!is_showed_flag)
        printf("Отсутствуют результаты по данным параметрам");
}

void printFinalTest(Student* students, int count, int filter) {
    int is_showed_flag = 0;
    for (int i = 0; i < count; i++) {
        Student student = students[i];
        if (filter != -1) {
            if (student.scores[8] != filter)
            {
                continue;
            }
        }
        is_showed_flag = 1;
        printf("Имя: %s\n", student.firstName);
        printf("Фамилия: %s\n", student.lastName);
        if (student.scores[8] == 9)
            printf("Студент не проходил финальное тестирование\n");
        else
            printf("Оценка за финальный тест: %d\n", student.scores[8]);
        printf("----------------------------\n");
    }
    if (!is_showed_flag)
        printf("Отсутствуют результаты по данным параметрам");
}

void swap(Student* a, Student* b) {
    Student temp = *a;
    *a = *b;
    *b = temp;
}

void sortStudentsByTheme(Student* students, int count, int theme, int ascending) {
    for (int i = 0; i < count - 1; i++) {
        for (int j = 0; j < count - i - 1; j++) {
            int score1 = getComparableScore((students[j]).scores[theme]);
            int score2 = getComparableScore((students[j + 1]).scores[theme]);
            if ((ascending && score1 > score2) || (!ascending && score1 < score2)) {
                swap(&students[j], &students[j + 1]);
            }
        }
    }
}


void sortStudentsByFinalTest(Student* students, int count, int ascending) {
    for (int i = 0; i < count - 1; i++) {
        for (int j = 0; j < count - i - 1; j++) {
            int score1 = getComparableScore((students[j]).scores[8]);
            int score2 = getComparableScore((students[j + 1]).scores[8]);
            int comparison = score1 - score2;
            if ((ascending && comparison > 0) || (!ascending && comparison < 0)) {
                swap(&students[j], &students[j + 1]);
            }
        }
    }
}

void sortStudentsByAverageScore(Student* students, int count, int ascending) {
    for (int i = 0; i < count - 1; i++) {
        for (int j = 0; j < count - i - 1; j++) {
            int sumA = 0, sumB = 0;
            for (int k = 0; k < 8; k++) {
                sumA += getComparableScore(((students[j]).scores[k]));
                sumB += getComparableScore((students[j + 1]).scores[k]);
            }
            int avgA = sumA / 8;
            int avgB = sumB / 8;
            if ((ascending && avgA > avgB) || (!ascending && avgA < avgB)) {
                swap(&students[j], &students[j + 1]);
            }
        }
    }
}

int getComparableScore(int score) {
    return (score == 9) ? -1 : score;
}

void listCur(Student* students, int num) {
    for (int i = 0; i < num; i++) {
        Student student = students[i];
        printf("Имя: %s\n", student.firstName);
        printf("Фамилия: %s\n", student.lastName);
        printf("Логин: %s\n", student.login);
        printf("Пароль: %s\n", student.password);
        for (int i = 0; i < 8; i++) {
            printf("Оценка по теме %s: %d\n", themes[i], student.scores[i]);
        }
        if (*student.scores != 9)
            printf("Итоговая оценка: %d\n", student.scores[8]);
        else
            printf("Студент не сдавал итоговый тест\n");
        printf("----------------------------\n");
    }
}


