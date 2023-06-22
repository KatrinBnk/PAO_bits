#include <iostream>

void setBit(unsigned long long int& number, int bitIndex, int value)
{
    if (value == 0)
    {
        // ���������� ��� (���������� 0)
        number &= ~(1 << bitIndex);
    }
    else if (value == 1)
    {
        // ������������� ��� (���������� 1)
        number |= (1 << bitIndex);
    }
    else
    {
        // ������������ ��������
        std::cout << "������������ ��������. ��������� ������ 0 � 1." << std::endl;
    }
}