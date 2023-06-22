
void editNumber7(unsigned long long int& number, int numBytes)
{
    int numBits = sizeof(unsigned long long int) * 8;
    int numBitsToShift = numBytes * 8;
    number = (number << numBitsToShift) | (number >> (numBits - numBitsToShift));
<<<<<<< HEAD
}
=======
}
>>>>>>> 07f38bcb5a8691e0f9da8b0e3934363f1fd0a694
