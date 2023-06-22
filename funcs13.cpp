void cyclicOddBitRightShift(unsigned long long& number, int numBits)
{
    unsigned int oddMask = 0x55555555; // 0x55555555 ������������ ������ 01010101010101010101010101010101

    // ��������� �������� � ����� ������ � ������, ����� ������� ������ �������� ����
    unsigned int oddBits = number & oddMask;

    int numBitsInInt = sizeof(unsigned int) * 8;

    // ��������� ����������� ����� ������ ������ �������� �����
    oddBits = (oddBits >> numBits) | (oddBits << (numBitsInInt - numBits));

    // ��������� �������� �����, ������� �������� ���� �� ��������� �������� ����
    number = (number & ~oddMask) | oddBits;

}
