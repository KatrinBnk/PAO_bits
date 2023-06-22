bool hasBitSequence(unsigned long long number, unsigned int sequence)
{
    unsigned int mask = sequence;
    int sequenceLength = 0;

    // ����������� ����� ������� ������������������
    while (mask != 0)
    {
        mask >>= 1;
        sequenceLength++;
    }

    mask = sequence;
    int count = 0;

    // �������� ����� ������ ������� � �����
    while (number != 0)
    {
        if ((number & mask) == sequence)
            count++;


        number >>= 1;
    }

    // ��������� ������� ������� ������������������
    return count >= sequenceLength;
}

