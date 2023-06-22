
void editNumber(unsigned long long int& number, int numBytes)
{
    int numBits = sizeof(unsigned int) * 8;
    int numBitsToShift = numBytes * 8;
    number = (number >> numBitsToShift) | (number << (numBits - numBitsToShift));
}