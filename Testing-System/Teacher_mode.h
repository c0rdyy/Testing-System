#pragma once


typedef struct {
    char firstName[50];
    char lastName[50];
    char login[50];
    char password[50];
    int scores[9];
} Student;


int list();
void deleteStudent(const char* filename, const char* login);
void addStudent(const char* filename);
void updateStudentProgress(const char* filename, const char* login);
int readStudentData(const char* filename, Student* students);
void printAllThemes(Student* students, int count, int filter);
void printCurTheme(Student* students, int count, int theme, int filter);
void printFinalTest(Student* students, int count, int filter);
void sortStudentsByTheme(Student* students, int count, int theme, int ascending);
void sortStudentsByFinalTest(Student* students, int count, int ascending);
void sortStudentsByAverageScore(Student* students, int count, int ascending);
void swap(Student* a, Student* b);
int getComparableScore(int score);
void listCur(Student* students, int num);
int teacherMode();

