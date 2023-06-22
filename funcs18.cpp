#include <iostream>

// ������� ��� �������������� n ���, ������� � p-� ������� �����
void invertBits(unsigned long long& number, int p, int n)
{
    // ������� ����� � ��������� � ��������, ������� ����� �������������
    unsigned int mask = (1 << n) - 1;
    mask <<= p;

    // ����������� ���� � ������� �������� XOR
    number ^= mask;

    
}
