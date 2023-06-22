void cyclicOddBitRightShift(unsigned long long& number, int numBits)
{
    unsigned int oddMask = 0x55555555; // 0x55555555 представляет шаблон 01010101010101010101010101010101

    // Выполняем побитное И между числом и маской, чтобы выбрать только нечётные биты
    unsigned int oddBits = number & oddMask;

    int numBitsInInt = sizeof(unsigned int) * 8;

    // Выполняем циклический сдвиг вправо только нечётных битов
    oddBits = (oddBits >> numBits) | (oddBits << (numBitsInInt - numBits));

    // Обновляем исходное число, заменяя нечётные биты на сдвинутые нечётные биты
    number = (number & ~oddMask) | oddBits;

}
