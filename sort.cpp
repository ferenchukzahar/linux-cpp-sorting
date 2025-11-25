#include "sort.h"
#include <algorithm>
#include <cstring>

// Перейменовуємо swap_ptr на swap, щоб test.cpp її бачив
void swap(char** a, char** b) {
    char* temp = *a;
    *a = *b;
    *b = temp;
}

void quick_sort(char** arr, size_t length) {
    if (length < 2) return;
    for (size_t i = 0; i < length - 1; ++i) {
        for (size_t j = 0; j < length - i - 1; ++j) {
            // Порівнюємо рядки
            if (std::strcmp(*(arr + j), *(arr + j + 1)) > 0) {
                // Викликаємо swap
                swap((arr + j), (arr + j + 1));
            }
        }
    }
}
