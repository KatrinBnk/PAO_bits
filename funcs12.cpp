void cyclicEvenBitLeftShift(unsigned long long & number, int numBits)
{
    // Создаем маску для выбора только чётных битов
    unsigned int evenMask = 0xAAAAAAAA; // 0xAAAAAAAA представляет шаблон 10101010101010101010101010101010

    // Выполняем побитное И между числом и маской, чтобы выбрать только чётные биты
    unsigned int evenBits = number & evenMask;

    int numBitsInInt = sizeof(unsigned int) * 8;

    // Выполняем циклический сдвиг влево только чётных битов
    evenBits = (evenBits << numBits) | (evenBits >> (numBitsInInt - numBits));

    // Обновляем исходное число, заменяя чётные биты на сдвинутые чётные биты
    number = (number & ~evenMask) | evenBits;

}