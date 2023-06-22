#include <iostream>

// Функция для инвертирования n бит, начиная с p-й позиции числа
void invertBits(unsigned long long& number, int p, int n)
{
    // Создаем маску с единицами в позициях, которые нужно инвертировать
    unsigned int mask = (1 << n) - 1;
    mask <<= p;

    // Инвертируем биты с помощью операции XOR
    number ^= mask;

    
<<<<<<< HEAD
}
=======
}
>>>>>>> 07f38bcb5a8691e0f9da8b0e3934363f1fd0a694
