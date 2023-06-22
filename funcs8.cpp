void editNumber8(unsigned long long int& number, int numBits)
{
    int numBitsInInt = sizeof(unsigned long long int) * 8;
    numBits = numBits % numBitsInInt;

    // Выполняем циклический сдвиг вправо
    number = (number >> numBits) | (number << (numBitsInInt - numBits));

}