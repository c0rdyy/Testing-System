#pragma once
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include "Student_mode.h"
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
struct test {
    char quest[1000]; // вопросы
    char ans[4][1000]; // ответы. 1- всегда правильный
};

int countLinesInFile(const char* filename);
int readf(struct test* proga, int prg1);
void tren(int* mass_ans, struct test* proga, int n);
int exam(int n, int* mass_ans, struct test* proga);
int Final_exam(int n, int* mass_ans, struct test* proga);
int Working_with_themes(int x);
int Final_Test(void);
int student_mode(struct list* student, int correct_login);
void Student_mode();