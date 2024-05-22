#include "Encryption.h"

void EncryptFile(char* input_filename, char* output_filename, int shift) {
    FILE* input_file;
    fopen_s(&input_file, input_filename, "r");
    FILE* output_file;
    fopen_s(&output_file, output_filename, "w");

    if (input_file == NULL || output_file == NULL) {
        perror("Error opening file");
        exit(EXIT_FAILURE);
    }

    char ch;
    while ((ch = fgetc(input_file)) != EOF) {
        if (ch >= 'a' && ch <= 'z') {
            ch = ((ch - 'a' + shift) % 26) + 'a';
        }
        else if (ch >= 'A' && ch <= 'Z') {
            ch = ((ch - 'A' + shift) % 26) + 'A';
        }
        else if (ch >= 'À' && ch <= 'ß')
        {
            ch = ((ch - 'À' + shift) % 32) + 'À';
        }
        else if (ch >= 'à' && ch <= 'ÿ')
        {
            ch = ((ch - 'à' + shift) % 32) + 'à';
        }
        fputc(ch, output_file);
    }

    fclose(input_file);
    fclose(output_file);
}

void DecryptFile(char* input_filename, char* output_filename, int shift)
{
    //EncryptFile(input_filename, output_filename, shift1);
    FILE* input_file;
    fopen_s(&input_file, input_filename, "r");
    FILE* output_file;
    fopen_s(&output_file, output_filename, "w");

    if (input_file == NULL || output_file == NULL) {
        perror("Error opening file");
        exit(EXIT_FAILURE);
    }

    char ch;
    while ((ch = fgetc(input_file)) != EOF) {
        if (ch >= 'a' && ch <= 'z') {
            ch = ((ch - 'a' - shift + 26) % 26) + 'a';
        }
        else if (ch >= 'A' && ch <= 'Z') {
            ch = ((ch - 'A' - shift + 26) % 26) + 'A';
        }
        else if (ch >= 'À' && ch <= 'ß')
        {
            ch = ((ch - 'À' - shift + 32) % 32) + 'À';
        }
        else if (ch >= 'à' && ch <= 'ÿ')
        {
            ch = ((ch - 'à' - shift + 32) % 32) + 'à';
        }
        fputc(ch, output_file);
    }

    fclose(input_file);
    fclose(output_file);
}

void CHAR()
{
    setlocale(LC_ALL, "Russian");

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
    char output_Recursion_quest[] = "Recursion.quest.txt";
    char input_2_Recursion_quest[] = "Recursion.quest.txt";


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
    char output_String_quest[] = "String.quest.txt";
    char input_2_String_quest[] = "String.quest.txt";


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


    //char input_Àddress_ans0[] = "Àddress.ans0.txt";
    //char output_Àddress_ans0[] = "Àddress.ans0_1.txt";
    //char input_2_Àddress_ans0[] = "Àddress.ans0_2.txt";

    char input_Àddress_ans1[] = "Àddress.ans1.txt";
    char output_Àddress_ans1[] = "Àddress.ans1_1.txt";
    char input_2_Àddress_ans1[] = "Àddress.ans1_2.txt";

    char input_Àddress_ans2[] = "Àddress.ans2.txt";
    char output_Àddress_ans2[] = "Àddress.ans2_1.txt";
    char input_2_Àddress_ans2[] = "Àddress.ans2_2.txt";

    char input_Àddress_ans3[] = "Àddress.ans3.txt";
    char output_Àddress_ans3[] = "Àddress.ans3_1.txt";
    char input_2_Àddress_ans3[] = "Àddress.ans3_2.txt";

    char input_Àddress_quest[] = "Àddress.quest.txt";
    char output_Àddress_quest[] = "Àddress.quest_1.txt";
    char input_2_Àddress_quest[] = "Àddress.quest_2.txt";

    char input_Students[] = "Students.txt";
    char output_Students[] = "Students_1.txt";
    char input_2_Students[] = "Students_2.txt";
}

void ENCRYPTION(char* input_Array_ans0, char* output_Array_ans0, char* input_Array_ans1, char* output_Array_ans1, char* input_Array_ans2, char* output_Array_ans2, char* input_Array_ans3, char* output_Array_ans3, char* input_Array_quest, char* output_Array_quest, char* input_Dynamic_ans0, char* output_Dynamic_ans0, char* input_Dynamic_ans1, char* output_Dynamic_ans1, char* input_Dynamic_ans2, char* output_Dynamic_ans2, char* input_Dynamic_ans3, char* output_Dynamic_ans3, char* input_Dynamic_quest, char* output_Dynamic_quest, char* input_File_ans0, char* output_File_ans0, char* input_File_ans1, char* output_File_ans1, char* input_File_ans2, char* output_File_ans2, char* input_File_ans3, char* output_File_ans3, char* input_File_quest, char* output_File_quest, char* input_Loop_ans0, char* output_Loop_ans0, char* input_Loop_ans1, char* output_Loop_ans1, char* input_Loop_ans2, char* output_Loop_ans2, char* input_Loop_ans3, char* output_Loop_ans3, char* input_Loop_quest, char* output_Loop_quest, char* input_Recursion_ans0, char* output_Recursion_ans0, char* input_Recursion_ans1, char* output_Recursion_ans1, char* input_Recursion_ans2, char* output_Recursion_ans2, char* input_Recursion_ans3, char* output_Recursion_ans3, char* input_Recursion_quest, char* output_Recursion_quest, char* input_String_ans0, char* output_String_ans0, char* input_String_ans1, char* output_String_ans1, char* input_String_ans2, char* output_String_ans2, char* input_String_ans3, char* output_String_ans3, char* input_String_quest, char* output_String_quest, char* input_Structure_ans0, char* output_Structure_ans0, char* input_Structure_ans1, char* output_Structure_ans1, char* input_Structure_ans2, char* output_Structure_ans2, char* input_Structure_ans3, char* output_Structure_ans3, char* input_Structure_quest, char* output_Structure_quest, char* input_Àddress_ans1, char* output_Àddress_ans1, char* input_Àddress_ans2, char* output_Àddress_ans2, char* input_Àddress_ans3, char* output_Àddress_ans3, char* input_Àddress_quest, char* output_Àddress_quest, char* input_Students, char* output_Students, int shift)
{
    EncryptFile(input_Array_ans0, output_Array_ans0, shift);
    EncryptFile(input_Array_ans1, output_Array_ans1, shift);
    EncryptFile(input_Array_ans2, output_Array_ans2, shift);
    EncryptFile(input_Array_ans3, output_Array_ans3, shift);
    EncryptFile(input_Array_quest, output_Array_quest, shift);

    EncryptFile(input_Dynamic_ans0, output_Dynamic_ans0, shift);
    EncryptFile(input_Dynamic_ans1, output_Dynamic_ans1, shift);
    EncryptFile(input_Dynamic_ans2, output_Dynamic_ans2, shift);
    EncryptFile(input_Dynamic_ans3, output_Dynamic_ans3, shift);
    EncryptFile(input_Dynamic_quest, output_Dynamic_quest, shift);

    EncryptFile(input_File_ans0, output_File_ans0, shift);
    EncryptFile(input_File_ans1, output_File_ans1, shift);
    EncryptFile(input_File_ans2, output_File_ans2, shift);
    EncryptFile(input_File_ans3, output_File_ans3, shift);
    EncryptFile(input_File_quest, output_File_quest, shift);

    EncryptFile(input_Loop_ans0, output_Loop_ans0, shift);
    EncryptFile(input_Loop_ans1, output_Loop_ans1, shift);
    EncryptFile(input_Loop_ans2, output_Loop_ans2, shift);
    EncryptFile(input_Loop_ans3, output_Loop_ans3, shift);
    EncryptFile(input_Loop_quest, output_Loop_quest, shift);

    EncryptFile(input_Recursion_ans0, output_Recursion_ans0, shift);
    EncryptFile(input_Recursion_ans1, output_Recursion_ans1, shift);
    EncryptFile(input_Recursion_ans2, output_Recursion_ans2, shift);
    EncryptFile(input_Recursion_ans3, output_Recursion_ans3, shift);
    EncryptFile(input_Recursion_quest, output_Recursion_quest, shift);

    EncryptFile(input_String_ans0, output_String_ans0, shift);
    EncryptFile(input_String_ans1, output_String_ans1, shift);
    EncryptFile(input_String_ans2, output_String_ans2, shift);
    EncryptFile(input_String_ans3, output_String_ans3, shift);
    EncryptFile(input_String_quest, output_String_quest, shift);

    EncryptFile(input_Structure_ans0, output_Structure_ans0, shift);
    EncryptFile(input_Structure_ans1, output_Structure_ans1, shift);
    EncryptFile(input_Structure_ans2, output_Structure_ans2, shift);
    EncryptFile(input_Structure_ans3, output_Structure_ans3, shift);
    EncryptFile(input_Structure_quest, output_Structure_quest, shift);

    EncryptFile(input_Àddress_ans1, output_Àddress_ans1, shift);
    EncryptFile(input_Àddress_ans2, output_Àddress_ans2, shift);
    EncryptFile(input_Àddress_ans3, output_Àddress_ans3, shift);
    EncryptFile(input_Àddress_quest, output_Àddress_quest, shift);

    EncryptFile(input_Students, output_Students, shift);
}

void DECRYPTION(char* input_2_Array_ans0, char* output_Array_ans0, char* input_2_Array_ans1, char* output_Array_ans1, char* input_2_Array_ans2, char* output_Array_ans2, char* input_2_Array_ans3, char* output_Array_ans3, char* input_2_Array_quest, char* output_Array_quest, char* input_2_Dynamic_ans0, char* output_Dynamic_ans0, char* input_2_Dynamic_ans1, char* output_Dynamic_ans1, char* input_2_Dynamic_ans2, char* output_Dynamic_ans2, char* input_2_Dynamic_ans3, char* output_Dynamic_ans3, char* input_2_Dynamic_quest, char* output_Dynamic_quest, char* input_2_File_ans0, char* output_File_ans0, char* input_2_File_ans1, char* output_File_ans1, char* input_2_File_ans2, char* output_File_ans2, char* input_2_File_ans3, char* output_File_ans3, char* input_2_File_quest, char* output_File_quest, char* input_2_Loop_ans0, char* output_Loop_ans0, char* input_2_Loop_ans1, char* output_Loop_ans1, char* input_2_Loop_ans2, char* output_Loop_ans2, char* input_2_Loop_ans3, char* output_Loop_ans3, char* input_2_Loop_quest, char* output_Loop_quest, char* input_2_Recursion_ans0, char* output_Recursion_ans0, char* input_2_Recursion_ans1, char* output_Recursion_ans1, char* input_2_Recursion_ans2, char* output_Recursion_ans2, char* input_2_Recursion_ans3, char* output_Recursion_ans3, char* input_2_Recursion_quest, char* output_Recursion_quest, char* input_2_String_ans0, char* output_String_ans0, char* input_2_String_ans1, char* output_String_ans1, char* input_2_String_ans2, char* output_String_ans2, char* input_2_String_ans3, char* output_String_ans3, char* input_2_String_quest, char* output_String_quest, char* input_2_Structure_ans0, char* output_Structure_ans0, char* input_2_Structure_ans1, char* output_Structure_ans1, char* input_2_Structure_ans2, char* output_Structure_ans2, char* input_2_Structure_ans3, char* output_Structure_ans3, char* input_2_Structure_quest, char* output_Structure_quest, char* input_2_Àddress_ans1, char* output_Àddress_ans1, char* input_2_Àddress_ans2, char* output_Àddress_ans2, char* input_2_Àddress_ans3, char* output_Àddress_ans3, char* input_2_Àddress_quest, char* output_Àddress_quest, char* input_2_Students, char* output_Students, int shift)
{
    DecryptFile(output_Array_ans0, input_2_Array_ans0, shift);
    DecryptFile(output_Array_ans1, input_2_Array_ans1, shift);
    DecryptFile(output_Array_ans2, input_2_Array_ans2, shift);
    DecryptFile(output_Array_ans3, input_2_Array_ans3, shift);
    DecryptFile(output_Array_quest, input_2_Array_quest, shift);

    DecryptFile(output_Dynamic_ans0, input_2_Dynamic_ans0, shift);
    DecryptFile(output_Dynamic_ans1, input_2_Dynamic_ans1, shift);
    DecryptFile(output_Dynamic_ans2, input_2_Dynamic_ans2, shift);
    DecryptFile(output_Dynamic_ans3, input_2_Dynamic_ans3, shift);
    DecryptFile(output_Dynamic_quest, input_2_Dynamic_quest, shift);

    DecryptFile(output_File_ans0, input_2_File_ans0, shift);
    DecryptFile(output_File_ans1, input_2_File_ans1, shift);
    DecryptFile(output_File_ans2, input_2_File_ans2, shift);
    DecryptFile(output_File_ans3, input_2_File_ans3, shift);
    DecryptFile(output_File_quest, input_2_File_quest, shift);

    DecryptFile(output_Loop_ans0, input_2_Loop_ans0, shift);
    DecryptFile(output_Loop_ans1, input_2_Loop_ans1, shift);
    DecryptFile(output_Loop_ans2, input_2_Loop_ans2, shift);
    DecryptFile(output_Loop_ans3, input_2_Loop_ans3, shift);
    DecryptFile(output_Loop_quest, input_2_Loop_quest, shift);

    DecryptFile(output_Recursion_ans0, input_2_Recursion_ans0, shift);
    DecryptFile(output_Recursion_ans1, input_2_Recursion_ans1, shift);
    DecryptFile(output_Recursion_ans2, input_2_Recursion_ans2, shift);
    DecryptFile(output_Recursion_ans3, input_2_Recursion_ans3, shift);
    DecryptFile(output_Recursion_quest, input_2_Recursion_quest, shift);

    DecryptFile(output_String_ans0, input_2_String_ans0, shift);
    DecryptFile(output_String_ans1, input_2_String_ans1, shift);
    DecryptFile(output_String_ans2, input_2_String_ans2, shift);
    DecryptFile(output_String_ans3, input_2_String_ans3, shift);
    DecryptFile(output_String_quest, input_2_String_quest, shift);

    DecryptFile(output_Structure_ans0, input_2_Structure_ans0, shift);
    DecryptFile(output_Structure_ans1, input_2_Structure_ans1, shift);
    DecryptFile(output_Structure_ans2, input_2_Structure_ans2, shift);
    DecryptFile(output_Structure_ans3, input_2_Structure_ans3, shift);
    DecryptFile(output_Structure_quest, input_2_Structure_quest, shift);

    DecryptFile(output_Àddress_ans1, input_2_Àddress_ans1, shift);
    DecryptFile(output_Àddress_ans2, input_2_Àddress_ans2, shift);
    DecryptFile(output_Àddress_ans3, input_2_Àddress_ans3, shift);
    DecryptFile(output_Àddress_quest, input_2_Àddress_quest, shift);

    DecryptFile(output_Students, input_2_Students, shift);
}