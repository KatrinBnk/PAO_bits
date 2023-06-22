#include <iostream>

// ‘ункци€ дл€ сравнени€ указанных последовательностей битов в числе дл€ 31
bool compareBitSequences(unsigned long long& number, int s1, int s2, int len) {

    
    // —оздаем маску дл€ первой последовательности
    int mask1 = (1 << len) - 1;
    mask1 <<= s1;

    // —оздаем маску дл€ второй последовательности
    int mask2 = (1 << len) - 1;
    mask2 <<= s2;

    // »звлекаем битовые последовательности из числа
    int extracted1 = (number & mask1) >> s1;
    int extracted2 = (number & mask2) >> s2;

    // —равниваем битовые последовательности
    return extracted1 == extracted2;
}


//дл€ 33
bool compareBitSequences2(unsigned long long& num1, unsigned long long& num2, int startBit, int length) {
    int mask = ((1 << length) - 1) << startBit;  // —оздаем маску дл€ извлечени€ указанной последовательности битов
    int extractedBits1 = (num1 & mask) >> startBit;  // »звлекаем указанную последовательность битов из первого числа
    int extractedBits2 = (num2 & mask) >> startBit;  // »звлекаем указанную последовательность битов из второго числа

    return extractedBits1 == extractedBits2;  // —равниваем извлеченные последовательности битов
}
