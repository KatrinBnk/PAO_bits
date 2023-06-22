void cyclicEvenBitLeftShift(unsigned long long & number, int numBits)
{
    // ������� ����� ��� ������ ������ ������ �����
    unsigned int evenMask = 0xAAAAAAAA; // 0xAAAAAAAA ������������ ������ 10101010101010101010101010101010

    // ��������� �������� � ����� ������ � ������, ����� ������� ������ ������ ����
    unsigned int evenBits = number & evenMask;

    int numBitsInInt = sizeof(unsigned int) * 8;

    // ��������� ����������� ����� ����� ������ ������ �����
    evenBits = (evenBits << numBits) | (evenBits >> (numBitsInInt - numBits));

    // ��������� �������� �����, ������� ������ ���� �� ��������� ������ ����
    number = (number & ~evenMask) | evenBits;

}