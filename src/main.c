/* main.c */
#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <wchar.h>
#include "../include/task1.h"

/*
 * Основная функция программы.
 * Запрашивает 3 предложения и букву для поиска,
 * затем выводит общее количество найденных букв.
 */
int main() 
{
				setlocale(LC_ALL, "");
				fwide(stdout, 1);
				fwide(stdin, 1);

				wchar_t sentences[3][256];
				wchar_t letter;

				wprintf(L"Введите 3 предложения:\n");
				for (int i = 0; i < 3; i++) {
								fgetws(sentences[i], 256, stdin);
				}

				wprintf(L"Введите букву для поиска: ");
				wscanf(L"%lc", &letter);

				int total = 0;
				for (int i = 0; i < 3; i++) {
								total += count_letter_in_sentence(sentences[i], letter);
				}

				wprintf(L"Общее количество букв '%lc': %d\n", letter, total);

				return 0;
}