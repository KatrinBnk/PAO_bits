// ������� ��� ���������� ��������� ������ ����� ����� �� ��������� ���������� ������ �����
void evenBitLeftShift(unsigned long long int & number, int numBits)
{
    // ������� ����� ��� ������ ������ ������ �����
    unsigned int mask = 0xAAAAAAAA; // 0xAAAAAAAA ������������ ������ 10101010101010101010101010101010

    // ��������� �������� � ����� ������ � ������, ����� ������� ������ ������ ����
    unsigned int evenBits = number & mask;

    // ��������� ����� ������ ����� �����
    unsigned int shiftedBits = evenBits << numBits;

    // ��������� �������� �����, ������� ������ ���� �� ��������� ������ ����
    number = (number & ~mask) | shiftedBits;
}

