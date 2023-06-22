#include <iostream>

void setBit(unsigned long long int& number, int bitIndex, int value)
{
    if (value == 0)
    {
        // Сбрасываем бит (записываем 0)
        number &= ~(1 << bitIndex);
    }
    else if (value == 1)
    {
        // Устанавливаем бит (записываем 1)
        number |= (1 << bitIndex);
    }
    else
    {
        // Некорректное значение
        std::cout << "Некорректное значение. Допустимы только 0 и 1." << std::endl;
    }
}