#include <iostream>

// ������� ��� ��������� ��������� ������������������� ����� � ����� ��� 31
bool compareBitSequences(unsigned long long& number, int s1, int s2, int len) {

    
    // ������� ����� ��� ������ ������������������
    int mask1 = (1 << len) - 1;
    mask1 <<= s1;

    // ������� ����� ��� ������ ������������������
    int mask2 = (1 << len) - 1;
    mask2 <<= s2;

    // ��������� ������� ������������������ �� �����
    int extracted1 = (number & mask1) >> s1;
    int extracted2 = (number & mask2) >> s2;

    // ���������� ������� ������������������
    return extracted1 == extracted2;
}


//��� 33
bool compareBitSequences2(unsigned long long& num1, unsigned long long& num2, int startBit, int length) {
    int mask = ((1 << length) - 1) << startBit;  // ������� ����� ��� ���������� ��������� ������������������ �����
    int extractedBits1 = (num1 & mask) >> startBit;  // ��������� ��������� ������������������ ����� �� ������� �����
    int extractedBits2 = (num2 & mask) >> startBit;  // ��������� ��������� ������������������ ����� �� ������� �����

    return extractedBits1 == extractedBits2;  // ���������� ����������� ������������������ �����
}
