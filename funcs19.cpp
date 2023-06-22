#include <iostream>

// Функция для определения количества единиц в битовой записи числа
int countOnes(unsigned long long number)
{
    int count = 0;

    while (number != 0)
    {
        // Проверяем младший бит числа
        if (number & 1)
            count++;

        // Сдвигаем число вправо
        number >>= 1;
    }


    return count;
}