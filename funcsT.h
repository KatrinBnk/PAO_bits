#pragma once

void swapBits(unsigned long long int& n, int p1, int p2);
void printBinary(unsigned long long int& n);
bool isMirroredByte(uint8_t byte);

void swapBiats(unsigned long long& num, int size);
bool swapBiars2(unsigned long long& num);
void swapBiats4(unsigned long long& num, int bite1, int bite2);
void editNumber(unsigned long long int& number, int numBytes);
void editNumber7(unsigned long long int& number, int numBytes);
void editNumber8(unsigned long long int& number, int numBytes);
void editNumber9(unsigned long long int& number, int numBits);

void evenBitLeftShift(unsigned long long int& number, int numBits);
void oddBitRightShift(unsigned long long int& number, int numBits);

void cyclicEvenBitLeftShift(unsigned long long& number, int numBits);
void cyclicOddBitRightShift(unsigned long long& number, int numBits);

int findMostSignificantOnePosition(unsigned long long int& number);
void setBit(unsigned long long int& number, int bitIndex, int value);
void setByte(unsigned long long& number, int byteIndex, int byte);
void setByte17(unsigned long long& number, int byteIndex, int byte);

void invertBits(unsigned long long& number, int p, int n);
int countOnes(unsigned long long number);
unsigned int countZeros(unsigned long long& number);
bool hasBitSequence(unsigned long long number, unsigned int sequence);

int countSetBits(unsigned long long num);


bool palindrom(unsigned long long& num);
bool miror(unsigned long long& num);
bool clonBeats(unsigned long long& num, int p1, int p2);
bool clonBeatsIN(unsigned long long& n1, unsigned long long& n2, int p1);
bool compareBitSequences(unsigned long long& number, int s1, int s2, int len);
bool compareBitSequences2(unsigned long long& num1, unsigned long long& num2, int startBit, int length);
