int findMostSignificantOnePosition(unsigned long long int& number)
{
    int position = -1; // Переменная для хранения позиции самой старшей единицы
    int bitIndex = 0; // Индекс текущего бита

    // Перебираем биты числа справа налево
    while (number != 0)
    {
        if (number & 1)
        {
            position = bitIndex; // Обновляем позицию самой старшей единицы
        }

        number >>= 1; // Сдвигаем число вправо на один бит
        bitIndex++; // Увеличиваем индекс текущего бита
    }

    return position;
}
