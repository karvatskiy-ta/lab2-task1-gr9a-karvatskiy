/* task1.c */
#include "task1.h"

/*
 * Подсчитывает количество указанных букв в предложении
 */
int count_letter_in_sentence(const wchar_t *sentence, wchar_t letter) 
{
        int count = 0;

        for (int i = 0; sentence[i] != '\0'; i++) {
                if (sentence[i] == letter) {
                        count++;
                }
        }

        return count;
}