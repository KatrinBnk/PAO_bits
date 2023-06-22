void editNumber9(unsigned long long int& number, int numBits)
{
    int numBitsInInt = sizeof(unsigned long long int) * 8;
    numBits = numBits % numBitsInInt;

    // Выполняем циклический сдвиг влево
    number = (number << numBits) | (number >> (numBitsInInt - numBits));

}
