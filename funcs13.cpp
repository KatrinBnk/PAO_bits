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

<<<<<<< HEAD
}
=======
}
>>>>>>> 07f38bcb5a8691e0f9da8b0e3934363f1fd0a694
