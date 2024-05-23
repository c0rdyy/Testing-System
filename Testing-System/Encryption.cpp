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

void ENCRYPTION1(char* input_2_Array_ans0, char* output_Array_ans0, char* input_2_Array_ans1, char* output_Array_ans1, char* input_2_Array_ans2, char* output_Array_ans2, char* input_2_Array_ans3, char* output_Array_ans3, char* input_2_Array_quest, char* output_Array_quest, char* input_2_Dynamic_ans0, char* output_Dynamic_ans0, char* input_2_Dynamic_ans1, char* output_Dynamic_ans1, char* input_2_Dynamic_ans2, char* output_Dynamic_ans2, char* input_2_Dynamic_ans3, char* output_Dynamic_ans3, char* input_2_Dynamic_quest, char* output_Dynamic_quest, char* input_2_File_ans0, char* output_File_ans0, char* input_2_File_ans1, char* output_File_ans1, char* input_2_File_ans2, char* output_File_ans2, char* input_2_File_ans3, char* output_File_ans3, char* input_2_File_quest, char* output_File_quest, char* input_2_Loop_ans0, char* output_Loop_ans0, char* input_2_Loop_ans1, char* output_Loop_ans1, char* input_2_Loop_ans2, char* output_Loop_ans2, char* input_2_Loop_ans3, char* output_Loop_ans3, char* input_2_Loop_quest, char* output_Loop_quest, char* input_2_Recursion_ans0, char* output_Recursion_ans0, char* input_2_Recursion_ans1, char* output_Recursion_ans1, char* input_2_Recursion_ans2, char* output_Recursion_ans2, char* input_2_Recursion_ans3, char* output_Recursion_ans3, char* input_2_Recursion_quest, char* output_Recursion_quest, char* input_2_String_ans0, char* output_String_ans0, char* input_2_String_ans1, char* output_String_ans1, char* input_2_String_ans2, char* output_String_ans2, char* input_2_String_ans3, char* output_String_ans3, char* input_2_String_quest, char* output_String_quest, char* input_2_Structure_ans0, char* output_Structure_ans0, char* input_2_Structure_ans1, char* output_Structure_ans1, char* input_2_Structure_ans2, char* output_Structure_ans2, char* input_2_Structure_ans3, char* output_Structure_ans3, char* input_2_Structure_quest, char* output_Structure_quest, char* input_2_Àddress_ans1, char* output_Àddress_ans1, char* input_2_Àddress_ans2, char* output_Àddress_ans2, char* input_2_Àddress_ans3, char* output_Àddress_ans3, char* input_2_Àddress_quest, char* output_Àddress_quest, char* input_2_Students, char* output_Students, int shift)
{
    EncryptFile(input_2_Array_ans0, output_Array_ans0, shift);
    EncryptFile(input_2_Array_ans1, output_Array_ans1, shift);
    EncryptFile(input_2_Array_ans2, output_Array_ans2, shift);
    EncryptFile(input_2_Array_ans3, output_Array_ans3, shift);
    EncryptFile(input_2_Array_quest, output_Array_quest, shift);

    EncryptFile(input_2_Dynamic_ans0, output_Dynamic_ans0, shift);
    EncryptFile(input_2_Dynamic_ans1, output_Dynamic_ans1, shift);
    EncryptFile(input_2_Dynamic_ans2, output_Dynamic_ans2, shift);
    EncryptFile(input_2_Dynamic_ans3, output_Dynamic_ans3, shift);
    EncryptFile(input_2_Dynamic_quest, output_Dynamic_quest, shift);

    EncryptFile(input_2_File_ans0, output_File_ans0, shift);
    EncryptFile(input_2_File_ans1, output_File_ans1, shift);
    EncryptFile(input_2_File_ans2, output_File_ans2, shift);
    EncryptFile(input_2_File_ans3, output_File_ans3, shift);
    EncryptFile(input_2_File_quest, output_File_quest, shift);

    EncryptFile(input_2_Loop_ans0, output_Loop_ans0, shift);
    EncryptFile(input_2_Loop_ans1, output_Loop_ans1, shift);
    EncryptFile(input_2_Loop_ans2, output_Loop_ans2, shift);
    EncryptFile(input_2_Loop_ans3, output_Loop_ans3, shift);
    EncryptFile(input_2_Loop_quest, output_Loop_quest, shift);

    EncryptFile(input_2_Recursion_ans0, output_Recursion_ans0, shift);
    EncryptFile(input_2_Recursion_ans1, output_Recursion_ans1, shift);
    EncryptFile(input_2_Recursion_ans2, output_Recursion_ans2, shift);
    EncryptFile(input_2_Recursion_ans3, output_Recursion_ans3, shift);
    EncryptFile(input_2_Recursion_quest, output_Recursion_quest, shift);

    EncryptFile(input_2_String_ans0, output_String_ans0, shift);
    EncryptFile(input_2_String_ans1, output_String_ans1, shift);
    EncryptFile(input_2_String_ans2, output_String_ans2, shift);
    EncryptFile(input_2_String_ans3, output_String_ans3, shift);
    EncryptFile(input_2_String_quest, output_String_quest, shift);

    EncryptFile(input_2_Structure_ans0, output_Structure_ans0, shift);
    EncryptFile(input_2_Structure_ans1, output_Structure_ans1, shift);
    EncryptFile(input_2_Structure_ans2, output_Structure_ans2, shift);
    EncryptFile(input_2_Structure_ans3, output_Structure_ans3, shift);
    EncryptFile(input_2_Structure_quest, output_Structure_quest, shift);

    EncryptFile(input_2_Àddress_ans1, output_Àddress_ans1, shift);
    EncryptFile(input_2_Àddress_ans2, output_Àddress_ans2, shift);
    EncryptFile(input_2_Àddress_ans3, output_Àddress_ans3, shift);
    EncryptFile(input_2_Àddress_quest, output_Àddress_quest, shift);

    EncryptFile(input_2_Students, output_Students, shift);
}

void DECRYPTION1(char* input_Array_ans0, char* output_Array_ans0, char* input_Array_ans1, char* output_Array_ans1, char* input_Array_ans2, char* output_Array_ans2, char* input_Array_ans3, char* output_Array_ans3, char* input_Array_quest, char* output_Array_quest, char* input_Dynamic_ans0, char* output_Dynamic_ans0, char* input_Dynamic_ans1, char* output_Dynamic_ans1, char* input_Dynamic_ans2, char* output_Dynamic_ans2, char* input_Dynamic_ans3, char* output_Dynamic_ans3, char* input_Dynamic_quest, char* output_Dynamic_quest, char* input_File_ans0, char* output_File_ans0, char* input_File_ans1, char* output_File_ans1, char* input_File_ans2, char* output_File_ans2, char* input_File_ans3, char* output_File_ans3, char* input_File_quest, char* output_File_quest, char* input_Loop_ans0, char* output_Loop_ans0, char* input_Loop_ans1, char* output_Loop_ans1, char* input_Loop_ans2, char* output_Loop_ans2, char* input_Loop_ans3, char* output_Loop_ans3, char* input_Loop_quest, char* output_Loop_quest, char* input_Recursion_ans0, char* output_Recursion_ans0, char* input_Recursion_ans1, char* output_Recursion_ans1, char* input_Recursion_ans2, char* output_Recursion_ans2, char* input_Recursion_ans3, char* output_Recursion_ans3, char* input_Recursion_quest, char* output_Recursion_quest, char* input_String_ans0, char* output_String_ans0, char* input_String_ans1, char* output_String_ans1, char* input_String_ans2, char* output_String_ans2, char* input_String_ans3, char* output_String_ans3, char* input_String_quest, char* output_String_quest, char* input_Structure_ans0, char* output_Structure_ans0, char* input_Structure_ans1, char* output_Structure_ans1, char* input_Structure_ans2, char* output_Structure_ans2, char* input_Structure_ans3, char* output_Structure_ans3, char* input_Structure_quest, char* output_Structure_quest, char* input_Àddress_ans1, char* output_Àddress_ans1, char* input_Àddress_ans2, char* output_Àddress_ans2, char* input_Àddress_ans3, char* output_Àddress_ans3, char* input_Àddress_quest, char* output_Àddress_quest, char* input_Students, char* output_Students, int shift)
{
    DecryptFile(output_Array_ans0, input_Array_ans0, shift);
    DecryptFile(output_Array_ans1, input_Array_ans1, shift);
    DecryptFile(output_Array_ans2, input_Array_ans2, shift);
    DecryptFile(output_Array_ans3, input_Array_ans3, shift);
    DecryptFile(output_Array_quest, input_Array_quest, shift);

    DecryptFile(output_Dynamic_ans0, input_Dynamic_ans0, shift);
    DecryptFile(output_Dynamic_ans1, input_Dynamic_ans1, shift);
    DecryptFile(output_Dynamic_ans2, input_Dynamic_ans2, shift);
    DecryptFile(output_Dynamic_ans3, input_Dynamic_ans3, shift);
    DecryptFile(output_Dynamic_quest, input_Dynamic_quest, shift);

    DecryptFile(output_File_ans0, input_File_ans0, shift);
    DecryptFile(output_File_ans1, input_File_ans1, shift);
    DecryptFile(output_File_ans2, input_File_ans2, shift);
    DecryptFile(output_File_ans3, input_File_ans3, shift);
    DecryptFile(output_File_quest, input_File_quest, shift);

    DecryptFile(output_Loop_ans0, input_Loop_ans0, shift);
    DecryptFile(output_Loop_ans1, input_Loop_ans1, shift);
    DecryptFile(output_Loop_ans2, input_Loop_ans2, shift);
    DecryptFile(output_Loop_ans3, input_Loop_ans3, shift);
    DecryptFile(output_Loop_quest, input_Loop_quest, shift);

    DecryptFile(output_Recursion_ans0, input_Recursion_ans0, shift);
    DecryptFile(output_Recursion_ans1, input_Recursion_ans1, shift);
    DecryptFile(output_Recursion_ans2, input_Recursion_ans2, shift);
    DecryptFile(output_Recursion_ans3, input_Recursion_ans3, shift);
    DecryptFile(output_Recursion_quest, input_Recursion_quest, shift);

    DecryptFile(output_String_ans0, input_String_ans0, shift);
    DecryptFile(output_String_ans1, input_String_ans1, shift);
    DecryptFile(output_String_ans2, input_String_ans2, shift);
    DecryptFile(output_String_ans3, input_String_ans3, shift);
    DecryptFile(output_String_quest, input_String_quest, shift);

    DecryptFile(output_Structure_ans0, input_Structure_ans0, shift);
    DecryptFile(output_Structure_ans1, input_Structure_ans1, shift);
    DecryptFile(output_Structure_ans2, input_Structure_ans2, shift);
    DecryptFile(output_Structure_ans3, input_Structure_ans3, shift);
    DecryptFile(output_Structure_quest, input_Structure_quest, shift);

    DecryptFile(output_Àddress_ans1, input_Àddress_ans1, shift);
    DecryptFile(output_Àddress_ans2, input_Àddress_ans2, shift);
    DecryptFile(output_Àddress_ans3, input_Àddress_ans3, shift);
    DecryptFile(output_Àddress_quest, input_Àddress_quest, shift);

    DecryptFile(output_Students, input_Students, shift);
}