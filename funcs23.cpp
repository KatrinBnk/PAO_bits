bool hasBitSequence(unsigned long long number, unsigned int sequence)
{
    unsigned int mask = sequence;
    int sequenceLength = 0;

    // ќпределение длины битовой последовательности
    while (mask != 0)
    {
        mask >>= 1;
        sequenceLength++;
    }

    mask = sequence;
    int count = 0;

    // ѕроходим через каждую позицию в числе
    while (number != 0)
    {
        if ((number & mask) == sequence)
            count++;

<<<<<<< HEAD

=======
>>>>>>> 07f38bcb5a8691e0f9da8b0e3934363f1fd0a694
        number >>= 1;
    }

    // ѕровер€ем наличие битовой последовательности
    return count >= sequenceLength;
}

