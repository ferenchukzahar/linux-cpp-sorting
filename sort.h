#ifndef SORT
#define SORT

#include <string.h> 
#include <stddef.h>

// Оголошуємо обидві функції, бо тести хочуть бачити і swap теж
void swap(char** a, char** b);
void quick_sort(char** arr, size_t length);

#endif // !SORT
