#pragma once

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

void EncryptFile(char* input_filename, char* output_filename, int shift);
void DecryptFile(char* input_filename, char* output_filename, int shift);
