#include <iostream>

// ������� ��� ����������� ���������� ����� � �������� ����� �����
unsigned int countZeros(unsigned long long & number)
{
    unsigned int zerosCount = 0;

    // �������� ����� ������ ��� ����� � ������� ���������� �����
    while (number != 0)
    {
        if ((number & 1) == 0)
            zerosCount++;
        number >>= 1;
    }

    return zerosCount;
}
