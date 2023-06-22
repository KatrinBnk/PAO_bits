#include <iostream>

// ‘ункци€ дл€ определени€ количества нулей в значащих битах числа
unsigned int countZeros(unsigned long long & number)
{
    unsigned int zerosCount = 0;

    // ѕроходим через каждый бит числа и считаем количество нулей
    while (number != 0)
    {
        if ((number & 1) == 0)
            zerosCount++;
        number >>= 1;
    }

    return zerosCount;
}
