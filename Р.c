#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
int mode_working_theme=-1;
//выбор тематики теста
struct list{
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
int count_of_questions=0;
struct test{
    char quest[1000];//вопросы [256]
    char ans[4][1000];//ответы. 1- всегда правильный. [4][256]
};
int countLinesInFile(const char* filename) {
    FILE* file = fopen(filename, "r");
    int count = 0;
    char c;
    while((c = fgetc(file)) != EOF) {
        if(c == '\n') {
            count++;
        }
    }
    fclose(file);
    return count;
}
int stringLength(const char* str) {
    int length = 0;
    while(str[length] != '\0') {
        length++;
    }
    return length;
}
int readf(struct test *proga, int prg1){
    FILE* f = NULL;
    FILE* f0 = NULL;
    FILE* f1 = NULL;
    FILE* f2 = NULL;
    FILE* f3 = NULL;
    if (prg1==1)
    {const char *filename="Loop.quest_2.txt";
        count_of_questions = countLinesInFile(filename);
        f=fopen("Loop.quest_2.txt","r");
        f0=fopen("Loop.ans0_2.txt","r");
        f1=fopen("Loop.ans1_2.txt","r");
        f2=fopen("Loop.ans2_2.txt","r");
        f3=fopen("Loop.ans3_2.txt","r");
    }
    if (prg1==2)
    {const char *filename="Array.quest_2.txt";
        count_of_questions = countLinesInFile(filename);
//        count_of_questions = countLinesInFile("Array.quest.txt");
        f=fopen("Array.quest_2.txt","r");
        f0=fopen("Array.ans0_2.txt","r");
        f1=fopen("Array.ans1_2.txt","r");
        f2=fopen("Array.ans2_2.txt","r");
        f3=fopen("Array.ans3_2.txt","r");
    }
    if (prg1==3)
    {const char *filename="String.quest_2.txt";
        count_of_questions = countLinesInFile(filename);
//        count_of_questions = countLinesInFile("String.quest.txt");
        f=fopen("String.quest_2.txt","r");
        f0=fopen("String.ans0_2.txt","r");
        f1=fopen("String.ans1_2.txt","r");
        f2=fopen("String.ans2_2.txt","r");
        f3=fopen("String.ans3_2.txt","r");
    }
    if (prg1==4)
    {const char *filename="Recursion.quest_2.txt";
        count_of_questions = countLinesInFile(filename);
        f=fopen("Recursion.quest_2.txt","r");
        f0=fopen("Recursion.ans0_2.txt","r");
        f1=fopen("Recursion.ans1_2.txt","r");
        f2=fopen("Recursion.ans2_2.txt","r");
        f3=fopen("Recursion.ans3_2.txt","r");
    }
    if (prg1==5)
        {const char *filename="Structure.quest_2.txt";
            count_of_questions = countLinesInFile(filename);
            f=fopen("Structure.quest_2.txt","r");
            f0=fopen("Structure.ans0_2.txt","r");
            f1=fopen("Structure.ans1_2.txt","r");
            f2=fopen("Structure.ans2_2.txt","r");
            f3=fopen("Structure.ans3_2.txt","r");
        }
    if (prg1==6)
    {const char *filename="File.quest_2.txt";
        count_of_questions = countLinesInFile(filename);
        f=fopen("File.quest_2.txt","r");
        f0=fopen("File.ans0_2.txt","r");
        f1=fopen("File.ans1_2.txt","r");
        f2=fopen("File.ans2_2.txt","r");
        f3=fopen("File.ans3_2.txt","r");
    }
    if (prg1==7)
    {const char *filename="Address.quest_2.txt";
        count_of_questions = countLinesInFile(filename);
        f=fopen("Address.quest_2.txt","r");
        f0=fopen("Address.ans0_2.txt","r");
        f1=fopen("Address.ans1_2.txt","r");
        f2=fopen("Address.ans2_2.txt","r");
        f3=fopen("Address.ans3_2.txt","r");
    }
    if (prg1==8)
    {const char *filename="Dynamic.quest_2.txt";
        count_of_questions = countLinesInFile(filename);
        f=fopen("Dynamic.quest_2.txt","r");
        f0=fopen("Dynamic.ans0_2.txt","r");
        f1=fopen("Dynamic.ans1_2.txt","r");
        f2=fopen("Dynamic.ans2_2.txt","r");
        f3=fopen("Dynamic.ans3_2.txt","r");
    }
    int n1=count_of_questions;
    for (int i=0; i<n1; i++){
        fgets(proga[i].quest, 1000, f);
    }
    fclose(f);
    for (int i=0; i<n1; i++){
        fgets(proga[i].ans[0], 1000, f0);
    }
    fclose(f0);
    for (int i=0; i<n1; i++){
        fgets(proga[i].ans[1], 1000, f1);
    }
    fclose(f1);
    for (int i=0; i<n1; i++){
        fgets(proga[i].ans[2], 1000, f2);
    }
    fclose(f2);
    for (int i=0; i<n1; i++){
        fgets(proga[i].ans[3], 1000, f3);
    }
    fclose(f3);
    return count_of_questions;
}
void tren(int *mass_ans, struct test *proga, int n){
    for (int i=0; i<n; i++){
    int que;
    que=rand()%(count_of_questions);
    do
    {
        if (mass_ans[que]==1) que=(que+1)%count_of_questions;
    }while (mass_ans[que]==1);
    mass_ans[que]=1;
    printf("%d. %s\n", i+1, proga[que].quest);//выводим вопрос на экран
    int mass_anss[4]={0};
    int right = 0;//инициализировала, зачем?????
    for (int j=0; j<4;j++){
        int ans;
        ans=rand()%4;
        do
        {
            if (mass_anss[ans]==1) ans=(ans+1)%4;
        }while (mass_anss[ans]==1);
        mass_anss[ans]=1;
        printf("%d - %s\n", j+1,proga[que].ans[ans]);//выводим ответы по очереди на экран
        if (ans==0) right=j+1;//запоминаем индекс правильного ответа
    }
    int ot;
    do{
        scanf("%d", &ot);
        if (ot==right) printf("вы ответили верно\n");
        else{printf("вы ответили неверно\n");}
    }while(ot!=right);
}
}
int exam(int n, int *mass_ans,struct test *proga){
    //для экзамена
    int rez=0, osh=0;
    char q_osh[10][1000];//массив вопросов с ошибками
    char a_osh[10][1000];//правильный ответ
    int n_osh[10];//номера вопросов с неправильными ответами
    for (int i=0; i<n; i++)
    {
        int que;
        if (n==10){
            que=rand()%(count_of_questions);}//для тест по теме
        else{
            que=rand()%(40);//для экзамена
        }
        do
        {
            if (mass_ans[que]==1) que=(que+1)%count_of_questions;
        }while (mass_ans[que]==1);
        mass_ans[que]=1;
        printf("%d. %s\n", i+1, proga[que].quest);//выводим вопрос на экран
        int mass_anss[4]={0};
        int right = 0;//инициализировала, зачем?????

        for (int j=0; j<4;j++)
        {
            int ans;
            ans=rand()%4;
            do
            {
                if (mass_anss[ans]==1) ans=(ans+1)%4;
            }while (mass_anss[ans]==1);
            mass_anss[ans]=1;
            printf(" %d - %s\n", j+1,proga[que].ans[ans]);//выводим ответы по очереди на экран
            if (ans==0) right=j+1;//запоминаем индекс правильного ответа
        }
        //для экзамена нужна переменная с общей суммой, потом поделить на общее количество вопросов
        //тест
        int ot;
        do{
            printf("введите ответ (1, 2, 3 или 4)\n");
            scanf("%d", &ot);
            if (ot==right) rez++;
            else
            {
                strcpy(q_osh[osh], proga[que].quest);
                strcpy(a_osh[osh], proga[que].ans[0]);
                n_osh[osh]=que;//вводим номер вопроса, где была допущена ошибка.
                osh++;
            }
        }while(ot<1 || ot>4);
    }
    printf("Результат экзамена: %d из %d\nОценка: %d\nКоличество ошибок: %d\n", rez, n, ((rez*5)/n)+1, osh);
    for (int i=0; i<osh; i++){
        printf("Ошибка %d: %s\n", i+1, q_osh[i]);
        printf("Правильный ответ: %s\n", a_osh[i]);
    }
    if (osh>0)
    {
    int prg1=0;
    printf("Хотите сделать работу над ошибками?\n 1 - да\n любое другое целое число - нет \n");scanf("%d", &prg1);
        if (prg1==1){
            for (int i1=0; i1<osh; i1++)
            {
                printf("%d. %s\n", i1,proga[n_osh[i1]].quest);
                int mass_anss[4]={0};
                int right = 0;//инициализировала, зачем?????

                for (int j=0; j<4;j++){
                    int ans;
                    ans=rand()%4;
                    do
                    {
                        if (mass_anss[ans]==1) ans=(ans+1)%4;
                    }while (mass_anss[ans]==1);
                    mass_anss[ans]=1;
                    printf("%d - %s\n", j+1,proga[n_osh[i1]].ans[ans]);//выводим ответы по очереди на экран
                    if (ans==0) right=j+1;//запоминаем индекс правильного ответа
                }
                //для экзамена нужна переменная с общей суммой, потом поделить на общее количество вопросов
                //тест
                int ot;
                do{
                    scanf("%d", &ot);
                    if (ot==right) printf("вы ответили верно\n");
                    else{printf("вы ответили неверно\n");}
                }while(ot!=right);
            }
        }
    }
    return ((rez*5)/n)+1;
}
int Final_exam(int n, int *mass_ans,struct test *proga){
    //для экзамена
    int rez=0, osh=0;
    char q_osh[40][1000];//массив вопросов с ошибками
    char a_osh[40][1000];//правильный ответ
    int n_osh[40];//номера вопросов с неправильными ответами
    for (int i=0; i<n; i++)
    {
        int que=i;
        do
        {
            if (mass_ans[que]==1) que=(que+1)%count_of_questions;
        }while (mass_ans[que]==1);
        mass_ans[que]=1;
        printf("%d. %s\n", i+1, proga[que].quest);//выводим вопрос на экран
        int mass_anss[4]={0};
        int right = 0;//инициализировала, зачем?????

        for (int j=0; j<4;j++)
        {
            int ans;
            ans=rand()%4;
            do
            {
                if (mass_anss[ans]==1) ans=(ans+1)%4;
            }while (mass_anss[ans]==1);
            mass_anss[ans]=1;
            printf(" %d - %s\n", j+1,proga[que].ans[ans]);//выводим ответы по очереди на экран
            if (ans==0) right=j+1;//запоминаем индекс правильного ответа
        }
        //для экзамена нужна переменная с общей суммой, потом поделить на общее количество вопросов
        //тест
        int ot;
        do{
            printf("введите ответ (1, 2, 3 или 4)\n");
            scanf("%d", &ot);
            if (ot==right) rez++;
            else
            {
                strcpy(q_osh[osh], proga[que].quest);
                strcpy(a_osh[osh], proga[que].ans[0]);
                n_osh[osh]=que;//вводим номер вопроса, где была допущена ошибка.
                osh++;
            }
        }while(ot<1 || ot>4);
    }
    printf("Результат экзамена: %d из %d\nОценка: %d\nКоличество ошибок: %d\n", rez, n, ((rez*5)/n)+1, osh);
    for (int i=0; i<osh; i++){
        printf("Ошибка %d: %s\n", i+1, q_osh[i]);
        printf("Правильный ответ: %s\n", a_osh[i]);
    }
    if (osh>0)
    {
    int prg1=0;
    printf("Хотите сделать работу над ошибками?\n 1 - да\n любое другое целое число - нет \n");scanf("%d", &prg1);
        if (prg1==1){
            for (int i1=0; i1<osh; i1++)
            {
                printf("%d. %s\n", i1,proga[n_osh[i1]].quest);

                int mass_anss[4]={0};
                int right = 0;//инициализировала, зачем?????

                for (int j=0; j<4;j++){
                    int ans;
                    ans=rand()%4;
                    do
                    {
                        if (mass_anss[ans]==1) ans=(ans+1)%4;
                    }while (mass_anss[ans]==1);
                    mass_anss[ans]=1;
                    printf("%d - %s\n", j+1,proga[n_osh[i1]].ans[ans]);//выводим ответы по очереди на экран
                    if (ans==0) right=j+1;//запоминаем индекс правильного ответа
                }
                //для экзамена нужна переменная с общей суммой, потом поделить на общее количество вопросов
                //тест
                int ot;
                do{
                    scanf("%d", &ot);
                    if (ot==right) printf("вы ответили верно\n");
                    else{printf("вы ответили неверно\n");}
                }while(ot!=right);
            }
        }
    }
    return ((rez*5)/40)+1;
}
int Working_with_themes(int x)
{
    int rez=0;
        struct test proga[100];//считать с файла вопросы и ответы к ним (должно быть 5 файлов)
        readf(proga, x);
        int mass_ans[100]={0};//массив ответов
        //выбор режима( тренировка или экзамен)
        do{
            printf("Выберите режим\n 1 - Тренинг по теме\n 2 - Тестирование по теме\n");
            scanf("%d", &mode_working_theme);
        }while (mode_working_theme<1 || mode_working_theme>2);

        if (mode_working_theme==1){//тренировка
            rez=7;
            tren(mass_ans, proga, 10);
            return rez;
        }
        else{//экзамен
            rez=exam(10, mass_ans, proga);
            return rez;
        }
}
int Final_Test(void){
    int order_questions[8][5]={23456};//8 строк, 5 столбцов. 8-темы. 5-номера вопросов.
    struct test Final_Proga[40];

    struct test theme_1[100];
    int n1=readf(theme_1, 1);
    struct test theme_2[100];
    int n2=readf(theme_2, 2);
    struct test theme_3[100];
    int n3=readf(theme_3, 3);
    struct test theme_4[100];
    int n4=readf(theme_4, 4);
    struct test theme_5[100];
    int n5=readf(theme_5, 5);
    struct test theme_6[100];
    int n6=readf(theme_6, 6);
    struct test theme_7[100];
    int n7=readf(theme_7, 7);
    struct test theme_8[100];
    int n8=readf(theme_8, 8);

    for (int i=0; i<8; i++){
        for (int j=0; j<5; j++){
            int n=-1;
            int u=i+1;
            switch(u){
                case 1: n=n1;break;
                case 2: n=n2;break;
                case 3: n=n3;break;
                case 4: n=n4;break;
                case 5: n=n5;break;
                case 6: n=n6;break;
                case 7: n=n7;break;
                case 8: n=n8;break;
            }
            int number_of_repetitions=0;//количество повторений вопросов
            do{
                number_of_repetitions=0;
                order_questions[i][j]=rand()%(n);//задаём ячейке номер вопроса, который будет учавствовать в тесте
                for (int e=0; e<j; e++){
                    if (order_questions[i][j]==order_questions[i][e]){
                        number_of_repetitions++;
                    }
                }
            }while (number_of_repetitions>0);//пока есть одинаковые вопросы, программа не завершается
        }
    }
    //на данный момент нам известны вопросы, которые мы будем использовать в структуре. Теперь составим структуру финального теста
    for (int j=0; j<5; j++){
        for (int i=0; i<8; i++){
            int uwu=i+1;
            switch(uwu){
                case 1: Final_Proga[j*8+i]=theme_1[j];break;
                case 2: Final_Proga[j*8+i]=theme_2[j];break;
                case 3: Final_Proga[j*8+i]=theme_3[j];break;
                case 4: Final_Proga[j*8+i]=theme_4[j];break;
                case 5: Final_Proga[j*8+i]=theme_5[j];break;
                case 6: Final_Proga[j*8+i]=theme_6[j];break;
                case 7: Final_Proga[j*8+i]=theme_7[j];break;
                case 8: Final_Proga[j*8+i]=theme_8[j];break;
            }
        }
    }
    int mass_ans[40]={0};
    int w=Final_exam(40, mass_ans, Final_Proga);
    mode_working_theme=2;

    return w;
}
//выбор режима работы в меню студента
int student_mode(struct list *student, int correct_login){
    int qwerty=0;
    do{
        srand(time(NULL));
        //выбор режима работы
        int prg, prg1;
        do{
            printf("Выберите режим работы\n 1 - Тренинги и Тесты по темам\n 2 - Итоговый тест\n"); scanf("%d", &prg);
            if (prg!=1 && prg!=2) printf("Неверный ввод. Попробуйте снова\n");
        }while (prg!=1 && prg!=2);
        
        switch(prg)
        {
            case 1:{
                do{
                    printf("Выберите режим работы\n 1 - Циклы\n 2 - массивы\n 3 - строки\n 4 - рекурсия\n 5 - структуры\n 6 - файлы\n 7 - адреса и указатели\n 8 - динамическая память"); scanf("%d", &prg1);
                    if (!(prg1>0 && prg1<=8)) printf("Неверный ввод. Попробуйте снова\n");
                }while (prg1<=0 || prg1>8);
                int n=0;//оценка
                
                    switch(prg1){
                        case 1: {
                            n=Working_with_themes(1);
                            if (mode_working_theme==2 && (n!=7)){
                                student[correct_login].rezult_loop = n;
                            }
                            break;}
                        case 2: {
                            n=Working_with_themes(2);
                            if (mode_working_theme==2 && (n!=7)){
                                student[correct_login].rezult_array = n;
                            }
                            break;}
                        case 3: {
                            n=Working_with_themes(3);
                            if (mode_working_theme==2 && (n!=7)){
                                
                                student[correct_login].rezult_string = n;
                            }
                            break;}
                        case 4: {
                            n=Working_with_themes(4);
                            if (mode_working_theme==2 && (n!=7)){
                                
                                student[correct_login].rezult_recursion = n;
                            }
                            break;}
                        case 5: {
                            n=Working_with_themes(5);
                            if (mode_working_theme==2 && (n!=7)){
                                student[correct_login].rezult_structure = n;
                            }
                            break;}
                        case 6: {
                            n=Working_with_themes(6);
                            if (mode_working_theme==2 && (n!=7)){
                                student[correct_login].rezult_file = n;
                            }
                            break;}
                        case 7: {
                            n=Working_with_themes(7);
                            if (mode_working_theme==2 && (n!=7)){
                                student[correct_login].rezult_address = n;
                            }break;
                        }
                        case 8: {
                            n=Working_with_themes(8);
                            if (mode_working_theme==2 && (n!=7)){
                                student[correct_login].rezult_dynamic = n;
                            } break;
                        }
                            break;
                    }
                case 2: {if (prg==2){ student[correct_login].rezult_final=Final_Test(); break;}}
                }
        }
        printf("0 - вернуться в меню студента\nдругое целое число - вернуться в общее меню\n");scanf("%d", &qwerty);
    }while (qwerty==0);
    return 0;
}
int main (void){
    int count_of_lines=0;
    count_of_lines=countLinesInFile("Students_2.txt");
    FILE *file_of_student=fopen("Students_2.txt","r");
    struct list students[1000];
    char string_information[1000][120];//100 строк по 120 символов
    for (int i=0; i<count_of_lines; i++){
        fgets(string_information[i], 120, file_of_student);
        int count_of_symbols=stringLength(string_information[i]);
        int count_not=0;
        int count=0;
        for (int j=0; j<count_of_symbols; j++){
            int end_of_string=0;
            if (string_information[i][j]!='|' && end_of_string==0){
                switch (count){
                    case 0:{
                        students[i].student_name[count_not]=string_information[i][j];
                        count_not++;break;}
                    case 1:{
                        students[i].student_surname[count_not]=string_information[i][j];
                        count_not++;break;}
                    case 2:{
                        students[i].login[count_not]=string_information[i][j];
                        count_not++;break;}
                    case 3:{
                        students[i].password[count_not]=string_information[i][j];
                        count_not++;break;}
                    case 4:{
                        students[i].rezult_address=atoi(&string_information[i][j]);
                        count_not++;break;}
                    case 5:{
                        students[i].rezult_array=atoi(&string_information[i][j]);
                        count_not++;break;}
                    case 6:{
                        students[i].rezult_dynamic=atoi(&string_information[i][j]);
                        count_not++;break; }
                    case 7:{
                        students[i].rezult_file=atoi(&string_information[i][j]);
                        count_not++;break;}
                    case 8:{
                        students[i].rezult_loop=atoi(&string_information[i][j]);
                        count_not++;break;}
                    case 9:{
                        students[i].rezult_recursion=atoi(&string_information[i][j]);
                        count_not++;break;}
                    case 10:{
                        students[i].rezult_string=atoi(&string_information[i][j]);
                        count_not++;break;}
                    case 11:{
                        students[i].rezult_structure=atoi(&string_information[i][j]);
                        count_not++;break;}
                    case 12:{
                        students[i].rezult_final=atoi(&string_information[i][j]);
                        end_of_string=1;break;}
                }
            }
            else if (end_of_string==1){
                j=120;
            }
            else{
                count++;
                count_not=0;
            }
            
        }
    }
    printf("Введите данные студента\n");
    char input_login[30];
    char input_password[30];
    int correct_login=-1;//номер студента в списке
    do{
        printf("    - логин:"); scanf("%s", input_login);
        for (int i=0; i<count_of_lines;i++){
            if (strcmp(input_login, students[i].login)==0){//0-строки равны
                correct_login=i;
            }
        }
        if (correct_login<0) printf("Неверный ввод. Попробуйте снова\n");
    }while (correct_login<0);
    do{
        printf("    - пароль:"); scanf("%s", input_password);
        if (strcmp(input_password, students[correct_login].password)!=0) printf("Неверный ввод. Попробуйте снова\n");
        for (int i=stringLength(input_password); i<30; i++){
            input_login[i]='~';
        }
    }while (strcmp(input_password, students[correct_login].password)!=0);
    fclose(file_of_student);
    student_mode(students, correct_login);
    FILE *write_rezults=fopen("Students_2.txt", "w");
    for (int i=0; i<count_of_lines; i++){
        fprintf(write_rezults, "%s|%s|%s|%s|%d|%d|%d|%d|%d|%d|%d|%d|%d|\n", students[i].student_name, students[i].student_surname, students[i].login, students[i].password, students[i].rezult_address, students[i].rezult_array, students[i].rezult_dynamic, students[i].rezult_file, students[i].rezult_loop, students[i].rezult_recursion, students[i].rezult_string, students[i].rezult_string, students[i].rezult_final);
    }
    fclose(write_rezults);
}
