#include <iostream>

// Функция для записи байта в указанную позицию числа
void setByte17(unsigned long long& number, int byteIndex, int byte)
{
    // Проверяем, что индекс байта находится в допустимом диапазоне
    if (byteIndex >= 0 && byteIndex < sizeof(unsigned int))
    {
        // Сдвигаем байт на позицию, соответствующую индексу байта
        unsigned int shiftedByte = static_cast<unsigned int>(byte) << (byteIndex * 8);

        // Создаем маску для сохранения остальных битов числа
        unsigned int mask = 0xFF << (byteIndex * 8);

        // Сохраняем остальные биты числа и записываем байт
        number = (number & ~mask) | shiftedByte;
    }
    else
    {
        // Некорректный индекс байта
        std::cout << "Некорректный индекс байта." << std::endl;
    }
}
