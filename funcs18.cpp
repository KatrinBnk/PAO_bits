#include <iostream>

// ������� ��� �������������� n ���, ������� � p-� ������� �����
void invertBits(unsigned long long& number, int p, int n)
{
    // ������� ����� � ��������� � ��������, ������� ����� �������������
    unsigned int mask = (1 << n) - 1;
    mask <<= p;

    // ����������� ���� � ������� �������� XOR
    number ^= mask;

    
<<<<<<< HEAD
}
=======
}
>>>>>>> 07f38bcb5a8691e0f9da8b0e3934363f1fd0a694
