// Функция для выполнения побитного сдвига числа влево на указанное количество чётных битов
void evenBitLeftShift(unsigned long long int & number, int numBits)
{
    // Создаем маску для выбора только чётных битов
    unsigned int mask = 0xAAAAAAAA; // 0xAAAAAAAA представляет шаблон 10101010101010101010101010101010

    // Выполняем побитное И между числом и маской, чтобы выбрать только чётные биты
    unsigned int evenBits = number & mask;

    // Выполняем сдвиг чётных битов влево
    unsigned int shiftedBits = evenBits << numBits;

    // Обновляем исходное число, заменяя чётные биты на сдвинутые чётные биты
    number = (number & ~mask) | shiftedBits;
}

