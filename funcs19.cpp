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

<<<<<<< HEAD

=======
>>>>>>> 07f38bcb5a8691e0f9da8b0e3934363f1fd0a694
    return count;
}