/* task1.h */
#ifndef TASK1_H
#define TASK1_H

#include <wchar.h>

/* 
 * Функция для подсчета количества указанных букв в предложении
 * sentence - предложение для поиска
 * letter - буква для подсчета
 * Возвращает количество найденных букв
 */
int count_letter_in_sentence(const wchar_t *sentence, wchar_t letter);

#endif