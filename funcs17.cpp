#include <iostream>

// ������� ��� ������ ����� � ��������� ������� �����
void setByte17(unsigned long long& number, int byteIndex, int byte)
{
    // ���������, ��� ������ ����� ��������� � ���������� ���������
    if (byteIndex >= 0 && byteIndex < sizeof(unsigned int))
    {
        // �������� ���� �� �������, ��������������� ������� �����
        unsigned int shiftedByte = static_cast<unsigned int>(byte) << (byteIndex * 8);

        // ������� ����� ��� ���������� ��������� ����� �����
        unsigned int mask = 0xFF << (byteIndex * 8);

        // ��������� ��������� ���� ����� � ���������� ����
        number = (number & ~mask) | shiftedByte;
    }
    else
    {
        // ������������ ������ �����
        std::cout << "������������ ������ �����." << std::endl;
    }
}
