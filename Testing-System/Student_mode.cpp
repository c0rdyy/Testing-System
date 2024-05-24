#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

// выбор тематики теста

struct list {
    char student_name[30];
    char student_surname[30];
    char login[30];
    char password[30];
    int rezult_address;
    int rezult_array;
    int rezult_dynamic;
    int rezult_file;
    int rezult_loop;
    int rezult_recursion;
    int rezult_string;
    int rezult_structure;
    int rezult_final;
};

int count_of_questions = 0;

struct test {
    char quest[1000]; // вопросы
    char ans[4][1000]; // ответы. 1- всегда правильный
};

int countLinesInFile(const char* filename) {
    FILE* file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error opening file: %s\n", filename);
        return 0;
    }

    int count = 0;
    char c;

    while ((c = fgetc(file)) != EOF) {
        if (c == '\n') {
            count++;
        }
    }

    fclose(file);
    return count;
}

int readf(struct test* proga, int prg1) {
    FILE* f;
    FILE* f0;
    FILE* f1;
    FILE* f2;
    FILE* f3;

    const char* quest_file;
    const char* ans0_file;
    const char* ans1_file;
    const char* ans2_file;
    const char* ans3_file;

    switch (prg1) {
    case 1:
        quest_file = "Loop.quest_2.txt";
        ans0_file = "Loop.ans0_2.txt";
        ans1_file = "Loop.ans1_2.txt";
        ans2_file = "Loop.ans2_2.txt";
        ans3_file = "Loop.ans3_2.txt";
        break;
    case 2:
        quest_file = "Array.quest_2.txt";
        ans0_file = "Array.ans0_2.txt";
        ans1_file = "Array.ans1_2.txt";
        ans2_file = "Array.ans2_2.txt";
        ans3_file = "Array.ans3_2.txt";
        break;
    case 3:
        quest_file = "String.quest_2.txt";
        ans0_file = "String.ans0_2.txt";
        ans1_file = "String.ans1_2.txt";
        ans2_file = "String.ans2_2.txt";
        ans3_file = "String.ans3_2.txt";
        break;
    case 4:
        quest_file = "Recursion.quest_2.txt";
        ans0_file = "Recursion.ans0_2.txt";
        ans1_file = "Recursion.ans1_2.txt";
        ans2_file = "Recursion.ans2_2.txt";
        ans3_file = "Recursion.ans3_2.txt";
        break;
    case 5:
        quest_file = "Structure.quest_2.txt";
        ans0_file = "Structure.ans0_2.txt";
        ans1_file = "Structure.ans1_2.txt";
        ans2_file = "Structure.ans2_2.txt";
        ans3_file = "Structure.ans3_2.txt";
        break;
    case 6:
        quest_file = "File.quest_2.txt";
        ans0_file = "File.ans0_2.txt";
        ans1_file = "File.ans1_2.txt";
        ans2_file = "File.ans2_2.txt";
        ans3_file = "File.ans3_2.txt";
        break;
    case 7:
        quest_file = "Address.quest_2.txt";
        ans0_file = "Address.ans0_2.txt";
        ans1_file = "Address.ans1_2.txt";
        ans2_file = "Address.ans2_2.txt";
        ans3_file = "Address.ans3_2.txt";
        break;
    case 8:
        quest_file = "Dynamic.quest_2.txt";
        ans0_file = "Dynamic.ans0_2.txt";
        ans1_file = "Dynamic.ans1_2.txt";
        ans2_file = "Dynamic.ans2_2.txt";
        ans3_file = "Dynamic.ans3_2.txt";
        break;
    default:
        printf("Invalid topic number\n");
        return 0;
    }

    count_of_questions = countLinesInFile(quest_file);

    f = fopen(quest_file, "r");
    f0 = fopen(ans0_file, "r");
    f1 = fopen(ans1_file, "r");
    f2 = fopen(ans2_file, "r");
    f3 = fopen(ans3_file, "r");

    if (!f || !f0 || !f1 || !f2 || !f3) {
        printf("Error opening question or answer files\n");
        return 0;
    }

    for (int i = 0; i < count_of_questions; i++) {
        fgets(proga[i].quest, 1000, f);
        fgets(proga[i].ans[0], 1000, f0);
        fgets(proga[i].ans[1], 1000, f1);
        fgets(proga[i].ans[2], 1000, f2);
        fgets(proga[i].ans[3], 1000, f3);
    }

    fclose(f);
    fclose(f0);
    fclose(f1);
    fclose(f2);
    fclose(f3);

    return count_of_questions;
}

void tren(int* mass_ans, struct test* proga, int n) {
    for (int i = 0; i < n; i++) {
        int que = rand() % count_of_questions;
        while (mass_ans[que] == 1) {
            que = (que + 1) % count_of_questions;
        }
        mass_ans[que] = 1;

        printf("%d. %s\n", i + 1, proga[que].quest);

        int mass_anss[4] = { 0 };
        int right = 0;

        for (int j = 0; j < 4; j++) {
            int ans = rand() % 4;
            while (mass_anss[ans] == 1) {
                ans = (ans + 1) % 4;
            }
            mass_anss[ans] = 1;
            printf("%d - %s\n", j + 1, proga[que].ans[ans]);
            if (ans == 0) right = j + 1;
        }

        int ot;
        do {
            scanf("%d", &ot);
            if (ot == right) {
                printf("Вы ответили верно\n");
            }
            else {
                printf("Вы ответили неверно\n");
            }
        } while (ot != right);
    }
}

int exam(int n, int* mass_ans, struct test* proga) {
    int rez = 0, osh = 0;
    char q_osh[n][1000];
    char a_osh[n][1000];
    int n_osh[n];

    for (int i = 0; i < n; i++) {
        int que = rand() % count_of_questions;
        while (mass_ans[que] == 1) {
            que = (que + 1) % count_of_questions;
        }
        mass_ans[que] = 1;

        printf("%d. %s\n", i + 1, proga[que].quest);

        int mass_anss[4] = { 0 };
        int right = 0;

        for (int j = 0; j < 4; j++) {
            int ans = rand() % 4;
            while (mass_anss[ans] == 1) {
                ans = (ans + 1) % 4;
            }
            mass_anss[ans] = 1;
            printf(" %d - %s\n", j + 1, proga[que].ans[ans]);
            if (ans == 0) right = j + 1;
        }

        int ot;
        do {
            printf("Введите ответ (1, 2, 3 или 4):\n");
            scanf("%d", &ot);
            if (ot == right) {
                rez++;
            }
            else {
                strcpy(q_osh[osh], proga[que].quest);
                strcpy(a_osh[osh], proga[que].ans[0]);
                n_osh[osh] = que;
                osh++;
            }
        } while (ot < 1 || ot > 4);
    }

    printf("Результат экзамена: %d из %d\nОценка: %d\nКоличество ошибок: %d\n", rez, n, ((rez * 5) / n) + 1, osh);
    for (int i = 0; i < osh; i++) {
        printf("Ошибка %d: %s\n", i + 1, q_osh[i]);
        printf("Правильный ответ: %s\n", a_osh[i]);
    }

    if (osh > 0) {
        int prg1;
        printf("Хотите сделать работу над ошибками?\n 1 - да\n любое другое целое число - нет\n");
        scanf("%d", &prg1);
        if (prg1 == 1) {
            for (int i1 = 0; i1 < osh; i1++) {
                printf("%d. %s\n", i1, proga[n_osh[i1]].quest);

                int mass_anss[4] = { 0 };
                int right = 0;

                for (int j = 0; j < 4; j++) {
                    int ans = rand() % 4;
                    while (mass_anss[ans] == 1) {
                        ans = (ans + 1) % 4;
                    }
                    mass_anss[ans] = 1;
                    printf("%d - %s\n", j + 1, proga[n_osh[i1]].ans[ans]);
                    if (ans == 0) right = j + 1;
                }

                int ot;
                do {
                    scanf("%d", &ot);
                    if (ot == right) {
                        printf("Вы ответили верно\n");
                    }
                    else {
                        printf("Вы ответили неверно\n");
                    }
                } while (ot != right);
            }
        }
    }
    return ((rez * 5) / n) + 1;
}

int Final_exam(int n, int* mass_ans, struct test* proga) {
    int rez = 0, osh = 0;
    char q_osh[n][1000];
    char a_osh[n][1000];
    int n_osh[n];

    for (int i = 0; i < n; i++) {
        int que = i;
        while (mass_ans[que] == 1) {
            que = (que + 1) % count_of_questions;
        }
        mass_ans[que] = 1;

        printf("%d. %s\n", i + 1, proga[que].quest);

        int mass_anss[4] = { 0 };
        int right = 0;

        for (int j = 0; j < 4; j++) {
            int ans = rand() % 4;
            while (mass_anss[ans] == 1) {
                ans = (ans + 1) % 4;
            }
            mass_anss[ans] = 1;
            printf(" %d - %s\n", j + 1, proga[que].ans[ans]);
            if (ans == 0) right = j + 1;
        }

        int ot;
        do {
            printf("Введите ответ (1, 2, 3 или 4):\n");
            scanf("%d", &ot);
            if (ot == right) {
                rez++;
            }
            else {
                strcpy(q_osh[osh], proga[que].quest);
                strcpy(a_osh[osh], proga[que].ans[0]);
                n_osh[osh] = que;
                osh++;
            }
        } while (ot < 1 || ot > 4);
    }

    printf("Результат экзамена: %d из %d\nОценка: %d\nКоличество ошибок: %d\n", rez, n, ((rez * 5) / n) + 1, osh);
    for (int i = 0; i < osh; i++) {
        printf("Ошибка %d: %s\n", i + 1, q_osh[i]);
        printf("Правильный ответ: %s\n", a_osh[i]);
    }

    if (osh > 0) {
        int prg1;
        printf("Хотите сделать работу над ошибками?\n 1 - да\n любое другое целое число - нет\n");
        scanf("%d", &prg1);
        if (prg1 == 1) {
            for (int i1 = 0; i1 < osh; i1++) {
                printf("%d. %s\n", i1, proga[n_osh[i1]].quest);

                int mass_anss[4] = { 0 };
                int right = 0;

                for (int j = 0; j < 4; j++) {
                    int ans = rand() % 4;
                    while (mass_anss[ans] == 1) {
                        ans = (ans + 1) % 4;
                    }
                    mass_anss[ans] = 1;
                    printf("%d - %s\n", j + 1, proga[n_osh[i1]].ans[ans]);
                    if (ans == 0) right = j + 1;
                }

                int ot;
                do {
                    scanf("%d", &ot);
                    if (ot == right) {
                        printf("Вы ответили верно\n");
                    }
                    else {
                        printf("Вы ответили неверно\n");
                    }
                } while (ot != right);
            }
        }
    }
    return ((rez * 5) / n) + 1;
}

int Working_with_themes(int x) {
    int rez = 0;
    struct test proga[100];
    readf(proga, x);

    int mass_ans[100] = { 0 };

    int rezim;
    do {
        printf("Выберите режим\n 1 - Тренинг по теме\n 2 - Тестирование по теме\n");
        scanf("%d", &rezim);
    } while (rezim < 1 || rezim > 2);

    if (rezim == 1) {
        rez = -1;
        tren(mass_ans, proga, 10);
    }
    else {
        rez = exam(10, mass_ans, proga);
    }

    return rez;
}

int Final_Test(void) {
    int assessment = 0;
    int order_questions[8][5];
    struct test Final_Proga[40];

    struct test theme_1[100];
    int n1 = readf(theme_1, 1);
    struct test theme_2[100];
    int n2 = readf(theme_2, 2);
    struct test theme_3[100];
    int n3 = readf(theme_3, 3);
    struct test theme_4[100];
    int n4 = readf(theme_4, 4);
    struct test theme_5[100];
    int n5 = readf(theme_5, 5);
    struct test theme_6[100];
    int n6 = readf(theme_6, 6);
    struct test theme_7[100];
    int n7 = readf(theme_7, 7);
    struct test theme_8[100];
    int n8 = readf(theme_8, 8);

    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 5; j++) {
            int n;
            switch (i + 1) {
            case 1: n = n1; break;
            case 2: n = n2; break;
            case 3: n = n3; break;
            case 4: n = n4; break;
            case 5: n = n5; break;
            case 6: n = n6; break;
            case 7: n = n7; break;
            case 8: n = n8; break;
            }
            int number_of_repetitions = 0;
            do {
                number_of_repetitions = 0;
                order_questions[i][j] = rand() % n;
                for (int e = 0; e < j; e++) {
                    if (order_questions[i][j] == order_questions[i][e]) {
                        number_of_repetitions++;
                    }
                }
            } while (number_of_repetitions > 0);
        }
    }

    for (int j = 0; j < 5; j++) {
        for (int i = 0; i < 8; i++) {
            switch (i + 1) {
            case 1: Final_Proga[j * 8 + i] = theme_1[order_questions[i][j]]; break;
            case 2: Final_Proga[j * 8 + i] = theme_2[order_questions[i][j]]; break;
            case 3: Final_Proga[j * 8 + i] = theme_3[order_questions[i][j]]; break;
            case 4: Final_Proga[j * 8 + i] = theme_4[order_questions[i][j]]; break;
            case 5: Final_Proga[j * 8 + i] = theme_5[order_questions[i][j]]; break;
            case 6: Final_Proga[j * 8 + i] = theme_6[order_questions[i][j]]; break;
            case 7: Final_Proga[j * 8 + i] = theme_7[order_questions[i][j]]; break;
            case 8: Final_Proga[j * 8 + i] = theme_8[order_questions[i][j]]; break;
            }
        }
    }

    int mass_ans[40] = { 0 };
    int w = Final_exam(40, mass_ans, Final_Proga);

    return w;
}

int student_mode(struct list* student, int correct_login) {
    int qwerty = 0;
    do {
        srand(time(NULL));
        int prg, prg1;
        do {
            printf("Выберите режим работы\n 1 - Тренинги и Тесты по темам\n 2 - Итоговый тест\n");
            scanf("%d", &prg);
            if (prg != 1 && prg != 2) printf("Неверный ввод. Попробуйте снова\n");
        } while (prg != 1 && prg != 2);

        switch (prg) {
        case 1: {
            do {
                printf("Выберите режим работы\n 1 - Циклы\n 2 - Массивы\n 3 - Строки\n 4 - Рекурсия\n 5 - Структуры\n 6 - Файлы\n 7 - Адреса и указатели\n 8 - Динамическая память\n");
                scanf("%d", &prg1);
                if (prg1 < 1 || prg1 > 8) printf("Неверный ввод. Попробуйте снова\n");
            } while (prg1 < 1 || prg1 > 8);

            int n = Working_with_themes(prg1);
            if (n > 0) {
                switch (prg1) {
                case 1: if (n > student[correct_login].rezult_loop || n == 9) student[correct_login].rezult_loop = n; break;
                case 2: if (n > student[correct_login].rezult_array || n == 9) student[correct_login].rezult_array = n; break;
                case 3: if (n > student[correct_login].rezult_string || n == 9) student[correct_login].rezult_string = n; break;
                case 4: if (n > student[correct_login].rezult_recursion || n == 9) student[correct_login].rezult_recursion = n; break;
                case 5: if (n > student[correct_login].rezult_structure || n == 9) student[correct_login].rezult_structure = n; break;
                case 6: if (n > student[correct_login].rezult_file || n == 9) student[correct_login].rezult_file = n; break;
                case 7: if (n > student[correct_login].rezult_address || n == 9) student[correct_login].rezult_address = n; break;
                case 8: if (n > student[correct_login].rezult_dynamic || n == 9) student[correct_login].rezult_dynamic = n; break;
                }
            }
            break;
        }
        case 2:
            student[correct_login].rezult_final = Final_Test();
            break;
        }

        printf("0 - Вернуться в меню студента\nДругое целое число - Вернуться в общее меню\n");
        scanf("%d", &qwerty);
    } while (qwerty == 0);

    return 0;
}

int Student_mode(void) {
    int count_of_lines = countLinesInFile("Students_2.txt");

    FILE* file_of_student = fopen("Students_2.txt", "r");
    if (file_of_student == NULL) {
        printf("Error opening student file\n");
        return 1;
    }

    struct list students[1000];

    for (int i = 0; i < count_of_lines; i++) {
        fscanf(file_of_student, "%29[^|]|%29[^|]|%29[^|]|%29[^|]|%d|%d|%d|%d|%d|%d|%d|%d|%d|\n",
            students[i].student_name,
            students[i].student_surname,
            students[i].login,
            students[i].password,
            &students[i].rezult_address,
            &students[i].rezult_array,
            &students[i].rezult_dynamic,
            &students[i].rezult_file,
            &students[i].rezult_loop,
            &students[i].rezult_recursion,
            &students[i].rezult_string,
            &students[i].rezult_structure,
            &students[i].rezult_final);
    }

    printf("Введите данные студента\n");
    char input_login[30];
    char input_password[30];
    int correct_login = -1;

    do {
        printf("    - Логин: "); scanf("%s", input_login);
        for (int i = 0; i < count_of_lines; i++) {
            if (strcmp(input_login, students[i].login) == 0) {
                correct_login = i;
                break;
            }
        }
        if (correct_login < 0) printf("Неверный ввод. Попробуйте снова\n");
    } while (correct_login < 0);

    do {
        printf("    - Пароль: "); scanf("%s", input_password);
        if (strcmp(input_password, students[correct_login].password) != 0) {
            printf("Неверный ввод. Попробуйте снова\n");
        }
    } while (strcmp(input_password, students[correct_login].password) != 0);

    fclose(file_of_student);
    student_mode(students, correct_login);

    FILE* write_rezults = fopen("Students_2.txt", "w");
    if (write_rezults == NULL) {
        printf("Error opening file for writing\n");
        return 1;
    }

    for (int i = 0; i < count_of_lines; i++) {
        fprintf(write_rezults, "%s|%s|%s|%s|%d|%d|%d|%d|%d|%d|%d|%d|%d|\n",
            students[i].student_name,
            students[i].student_surname,
            students[i].login,
            students[i].password,
            students[i].rezult_address,
            students[i].rezult_array,
            students[i].rezult_dynamic,
            students[i].rezult_file,
            students[i].rezult_loop,
            students[i].rezult_recursion,
            students[i].rezult_string,
            students[i].rezult_structure,
            students[i].rezult_final);
    }

    fclose(write_rezults);
    return 0;
}

int main() {
    Student_mode();
    return 0;
}
