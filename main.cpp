#include <iostream>
#include <bitset>
#include <string>
#include <bit>

#include <vector>
#include "funcsT.h"

//если захочется где-то сделать двоичный вывод
void output_num(unsigned long long num)
{

    int bit = 0;
    for (int i = 7; i >= 0; i--)
    {
        bit = (num >> i) & 1;
        std::cout << bit;
    }
    std::cout << std::endl;
}

int main(int argc, char* argv[]) {
    setlocale(LC_ALL, "Russian");
    int tag{};
    std::cout << "Какой номер задачи? ";
    std::cin >> tag;
    
    switch (tag)
    {
    case 1:
    {
        std::cout << "1. Найти первые N целых чисел, у которых младший байт является зеркальным отражением следующего байта.";
        int N;
        std::cout << "Введите количество чисел N: ";
        std::cin >> N;

        int count = 0;
        unsigned long long int num = 0;

        while (count < N) {
            uint8_t lowByte = num & 0xFF;
            uint8_t highByte = (num >> 8) & 0xFF;

            if (isMirroredByte(lowByte) && lowByte != highByte) {
                std::cout << num << std::endl;
                //для красоты и понятности можно добавить бвоичный вывод
                count++;
            }

            num++;
        }
        break;
    };
    case 2:
    {
        std::cout << "2. Найти первые N целых чисел, у которых старший байт является зеркальным отражением предыдущего байта.";
        int N2{}, count2{ 0 };
        unsigned long long i{ 0 }, iclone{ 0 };
        std::cout << ":";
        std::cin >> N2;
        while (count2 != N2) {
            if (swapBiars2(i)) {
                count2++;
                std::cout << i << "\n";
            }
            i++;
        }
        
        break;
    }
    case 3: {
        std::cout << "3. Реализовать обмен местами старшего и младшего байт числа.\n";
        std::cout << "Данные о размерах чисел:\n\
1 байт: диапазон от 0 до 255\n\
2 байта: диапазон от 0 до 65, 535\n\
4 байта : диапазон от 0 до 4, 294, 967, 295\n\
8 байт : диапазон от 0 до 18, 446, 744, 073, 709, 551, 615\n";
        std::cout << "Введите размер числа в байтах: ";
        int sizebit{};
        std::cin >> sizebit;
        std::cout << "Введите число:";
        unsigned long long int num3{};
        std::cin >> num3;
        swapBiats(num3, sizebit);
        std::cout << num3;
    };
    case 4: {
        std::cout << "4.Реализовать обмен местами двух указанных байт числа.\n";
        std::cout << "число + байт 1 + байт 2:";
        unsigned long long int num4{};
        int b1, b2;
        std::cin >> num4 >> b1 >> b2;
        swapBiats4(num4, b1, b2);
        std::cout << num4 << "\n";

        break;
    };
    case 5: {
        std::cout << "5. Реализовать обмен местами двух указанных бит числа.\n";
        unsigned long long int n;
        int p1, p2;

        std::cout << "Enter n: ";
        std::cin >> n;
        std::cout << "Enter p1, p2: ";
        std::cin >> p1 >> p2;

        int num_bits = (int)log2(n) + 1;
        if (p1 < 0 or p2 < 0 or p1 > num_bits || p2 > num_bits) {
            std::cout << "Invalid positions" << std::endl;
        }
        else {
            std::cout << "Original number in binary: ";
            printBinary(n);
            std::cout << "Original number in decimal: " << n << std::endl;

            swapBits(n, p1, p2);
            std::cout << "Modified number in binary: ";
            printBinary(n);
            std::cout << "Modified number in decimal: " << n << std::endl;
        }
        break;
    };
    case 6: {
        std::cout << "6. Реализовать циклический сдвиг числа вправо на указанное число байт.\n";
        std::cout << "Введите число + сдвиг:";
        unsigned long long int num6{};
        int shift;
        std::cin >> num6 >> shift;
        editNumber(num6, shift);
        std::cout << num6 << "\n";
        break;
    };
    case 7: {
        std::cout << "7. Реализовать циклический сдвиг числа влево на указанное число байт." << "\n";
        std::cout << "Введите число + сдвиг:";
        unsigned long long int num7{};
        int shift;
        std::cin >> num7 >> shift;
        editNumber7(num7, shift);
        std::cout << num7 << "\n";
        break;
    };
    case 8: {
        std::cout << "8. Реализовать циклический сдвиг числа вправо на указанное число бит." << std::endl;
        std::cout << "Введите число + сдвиг:";
        unsigned long long int num8{};
        int shift;
        std::cin >> num8 >> shift;
        editNumber8(num8, shift);
        std::cout << num8 << "\n";
        break;
    };
    case 9: {
        std::cout << "9. Реализовать циклический сдвиг числа влево на указанное число бит." << std::endl;
        std::cout << "Введите число + сдвиг:";
        unsigned long long int num9{};
        int shift;
        std::cin >> num9 >> shift;
        editNumber9(num9, shift);
        std::cout << num9 << "\n";
        break;
    };
    case 10: {
        std::cout << "10. Реализовать побитный сдвиг числа влево на указанное число, но только для чётных битов." << std::endl;
        std::cout << "Введите число + сдвиг:";
        unsigned long long int num10{};
        int shift;
        std::cin >> num10 >> shift;
        evenBitLeftShift(num10, shift);
        std::cout << num10 << "\n";
        break;
    };
    case 11: {
        std::cout << "11. Реализовать побитный сдвиг числа вправо на указанное число, но только для нечетных битов." << std::endl;
        std::cout << "Введите число + сдвиг:";
        unsigned long long int num11{};
        int shift;
        std::cin >> num11 >> shift;
        oddBitRightShift(num11, shift);
        std::cout << num11 << "\n";
        break;
    };
    case 12: {
        std::cout << "12. Реализовать циклический побитный сдвиг числа влево на указанное число бит, но\
            только для чётных битов." << std::endl;
        std::cout << "Введите число + сдвиг:";
        unsigned long long int num12{};
        int shift;
        std::cin >> num12 >> shift;
        cyclicEvenBitLeftShift(num12, shift);
        std::cout << num12 << "\n";
        break;
    };
    case 13: {
        std::cout << "13. Реализовать циклический побитный сдвиг числа вправо на указанное число бит, но только для нечётных битов." << std::endl;
        std::cout << "Введите число + сдвиг:";
        unsigned long long int num12{};
        int shift;
        std::cin >> num12 >> shift;
        cyclicEvenBitLeftShift(num12, shift);
        std::cout << num12 << "\n";
        break;
    };
    case 14: {
        std::cout << "14. Определить позицию самой старшей единицы в битовом представлении данного целого числа." << std::endl;
        std::cout << "";
        unsigned long long int num14;
        std::cin >> num14;
        std::cout << findMostSignificantOnePosition(num14);
        break;
    };
    case 15: {
        std::cout << "15. Написать функцию, записывающую 0 или 1 в указанный бит данного целого числа и оставляющую остальные биты без изменения." << std::endl;
        std::cout << "число + индекс + значение: ";
        int index, bin;
        unsigned long long int num15;
        std::cin >> num15 >> index >> bin;
        setBit(num15, index, bin);
        std::cout << num15;
        break;
    };
    case 16: {
        std::cout << "16. Написать функцию, записывающую данный байт в данное целое число с указанной\
позиции и оставляющую остальные биты без изменения, если часть битов\
записываемого байта не помещается, то они отбрасываются." << std::endl;
        std::cout << "число + индекс + значение: ";
        int index, bin;
        unsigned long long int num16;
        std::cin >> num16 >> index >> bin;
        setByte(num16, index, bin);
        std::cout << num16;
        break;
    };
    case 17: {
        std::cout << "17. Написать функцию, записывающую данный байт в данное целое число с указанной\
            позиции и оставляющую остальные биты без изменения, если часть битов\
            записываемого байта не помещается, то они помещаются в начало данного числа. " << std::endl;
        std::cout << "число + индекс + значение: ";
        int index, bin;
        unsigned long long int num17;
        std::cin >> num17 >> index >> bin;
        setByte17(num17, index, bin);
        std::cout << num17;
        break;
    };
    case 18: {
        std::cout << " 18. Инвертирование в указанном числе n бит начиная с p-й позиции." << std::endl;
        std::cout << "число + колво бит + позиция: ";
        int n, p; unsigned long long num18;
        std::cin >> num18 >> n >> p;
        invertBits(num18, p, n);
        std::cout << num18;
        break;
    };
    case 19: {
        std::cout << " 19. Определение количества единиц в битовой записи указанного числа." << std::endl;
        std::cout << "число: ";
        unsigned long long num19;
        std::cin >> num19;
        std::cout << countOnes(num19);
        break;
    };
    case 20: {
        std::cout << "20. Определение количества нулей в битовой записи указанного числа." << std::endl;
        std::cout << "число: ";
        unsigned long long num20;
        std::cin >> num20;
        std::cout << countZeros(num20);
        
        break;
    };
    case 21: {
        std::cout << "21. Сравнение числа единиц в двух числах, представленных в двоичном коде (в каком больше)." << std::endl;
        //использую функцию из 19 кейса countOnes
        std::cout << "числа: ";
        unsigned long long n1, n2;
        std::cin >> n1 >> n2;
        std::cout << countOnes(n1) << " — " << countOnes(n2);
        break;
    };
    case 22: {
        std::cout << "22. Сравнение числа нулей в двух числах, представленных в двоичном коде (в каком больше)." << std::endl;
        //использую функцию из 20 кейса countOnes
        std::cout << "числа: ";
        unsigned long long n1, n2;
        std::cin >> n1 >> n2;
        std::cout << countZeros(n1) << " — " << countZeros(n2);
        break;
    };
    case 23: {
        std::cout << "23. Определение наличия в числе указанной битовой последовательности." << std::endl;
        std::cout << "число + последовательность (в виде десятичного числа): ";
        unsigned int p; unsigned long long int n1;
        std::cin >> n1 >> p;
        bool hasSequence = hasBitSequence(n1, p);

        std::cout << "Наличие битовой последовательности: " << (hasSequence ? "Да" : "Нет") << std::endl;
        std::cout << "t,exbq uhj,";
        break;
    };
    case 24: {
        std::cout << "24. Определение в указанном числе позиции первого вхождения заданной битовой последовательности." << std::endl;
        std::cout << "gjitk yf[eq";
        break;
    };
    case 25: {
        std::cout << "25. Определение в указанном числе позиции последнего вхождения заданной битовой последовательности." << std::endl;
        std::cout << "blb yf[eq";
        break;
    };
    case 26: {
        std::cout << "26. Суммарное количество единичных битов в числах заданного целочисленного массива." << std::endl;
        std::vector<int> numbers;
        int numElements;
        std::cout << "Введите количество элементов: ";
        std::cin >> numElements;

        std::cout << "Введите элементы вектора:\n";
        for (int i = 0; i < numElements; i++) {
            int element;
            std::cin >> element;
            numbers.push_back(element);
        }
        int totalSetBits = 0;

        for (int i = 0; i < numbers.size(); i++) {
            totalSetBits += countSetBits(numbers[i]);
        }

        std::cout << "Суммарное количество единичных битов: " << totalSetBits << std::endl;

        break;
    };
    case 27: {
        std::cout << "27. Суммарное количество нулевых битов в числах заданного целочисленного массива." << std::endl;
        std::vector<unsigned long long> numbers;
        int numElements;
        std::cout << "Введите количество элементов: ";
        std::cin >> numElements;

        std::cout << "Введите элементы вектора:\n";
        for (int i = 0; i < numElements; i++) {
            int element;
            std::cin >> element;
            numbers.push_back(element);
        }
        int totalSetBits = 0;

        for (int i = 0; i < numbers.size(); i++) {
            totalSetBits += countZeros(numbers[i]);
        }

        std::cout << "Суммарное количество нулевых битов: " << totalSetBits << std::endl;
        break;
    };
    case 28: {
        std::cout << "28. Определить представляет ли собой двоечное представление числа палиндром (слева направо читается также как справа налево)." << std::endl;
        std::cout << "число ";
        unsigned long long int num;
        std::cin >> num;
        std::cout << "число явл палиндромом: " << (palindrom(num) ? "Да" : "Нет") << std::endl;
        break;
    };
    case 29: {
        std::cout << "29. Определить является ли двоичное представление числа зеркальным относительно центра." << std::endl;
        std::cout << "число ";
        unsigned long long int num;
        std::cin >> num;
        std::cout << "число зеркальным относительно центра: " << (miror(num) ? "Да" : "Нет") << std::endl;
        break;
    };
    case 30: {
        std::cout << "30. Сравнение указанных битов в заданном числе." << std::endl;
        std::cout << "число + бит 1 + бит 2:";
        unsigned long long int num4{};
        int b1, b2;
        std::cin >> num4 >> b1 >> b2;
        std::cout << "Они равны: " << (clonBeats(num4, b1, b2) ? "Да" : "Нет") << std::endl;
        break;
    };
    case 31: {
        std::cout << "скорее всего надо задать границы последовательностей, но я хз чо эт такое за условие " << std::endl;
        std::cout << "31. Сравнение указанных последовательностей битов в заданном числе." << std::endl;
        std::cout << "число + индекс начала 1 посл + индекс начала 1 посл + длина: ";
        unsigned long long int num4{};
        int b1, b2, len;
        std::cin >> num4 >> b1 >> b2 >> len;
        std::cout << "Они равны: " << (compareBitSequences(num4, b1, b2, len) ? "Да" : "Нет") << std::endl;
        break;
    };
    case 32: {
        std::cout << "32. Сравнение указанных битов в двух разных заданных числах." << std::endl;
        std::cout << "число + чило+ бит 1:";
        unsigned long long int num1{}, num2;
        int b1;
        std::cin >> num2 >> num2 >> b1;
        std::cout << "Они равны: " << (clonBeatsIN(num1, num2, b1) ? "Да" : "Нет") << std::endl;
        break;
    };
    case 33: {
        std::cout << "33. Сравнение указанных последовательностей битов в двух разных заданных числах." << std::endl;
        std::cout << "число + чило+ индекс посл + длина посл:";
        unsigned long long int num1{}, num2;
        int b1, len;
        std::cin >> num2 >> num2 >> b1 >> len;
        std::cout << "Они равны: " << (compareBitSequences2(num1, num2, b1, len) ? "Да" : "Нет") << std::endl;
        
        break;
    };
    default:
        std::cout << "blb yf[eq";
        break;
    }
    
    




    




    
}


