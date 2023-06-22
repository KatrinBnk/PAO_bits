#include <iostream>

// Функция для записи байта в указанную позицию числа
void setByte(unsigned long long& number, int byteIndex, int byte)
{
    int nulmask = 0xF;
    nulmask <<= (byteIndex - 1);
    number &= ~nulmask;

    long mask = 0xF;
    mask &= byte;
    mask <<= (byteIndex - 1);

    number |= mask;
}
