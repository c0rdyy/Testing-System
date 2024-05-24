#pragma once
struct task {
    char quest[1000];//вопросы [256]
    char ans[4][1000];//ответы. 1- всегда правильный. [4][256]
};
struct taskList {
    struct task tasks[100];
    int size;
};
int isEmptyLine(const char* str);
void readf(struct taskList* theme, int th);
void add_question(struct taskList* theme);
void del_question(struct taskList* theme, int th, int num);
void print_que(struct taskList* theme, int num);
void edit_question(struct taskList* theme, int num);
void print_task_list(struct taskList* theme);
void write_into_f(struct taskList* theme, int th);
void edit_que();