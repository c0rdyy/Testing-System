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
        if (ch >= 'à' && ch <= 'ÿ')
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
    EncryptFile(input_filename, output_filename, shift);
}