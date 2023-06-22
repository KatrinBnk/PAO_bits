#include <iostream>

// ������� ��� ����������� ���������� ������ � ������� ������ �����
int countOnes(unsigned long long number)
{
    int count = 0;

    while (number != 0)
    {
        // ��������� ������� ��� �����
        if (number & 1)
            count++;

        // �������� ����� ������
        number >>= 1;
    }


    return count;
}