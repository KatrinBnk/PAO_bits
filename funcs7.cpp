
void editNumber7(unsigned long long int& number, int numBytes)
{
    int numBits = sizeof(unsigned long long int) * 8;
    int numBitsToShift = numBytes * 8;
    number = (number << numBitsToShift) | (number >> (numBits - numBitsToShift));
}
