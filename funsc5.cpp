#include <iostream>
#include <bitset>
#include <string>

//���� ������� ����� �����
void swapBits(unsigned long long int& n, int p1, int p2) {
    int bit1 = (n >> p1) & 1;//��������� �������� ���� 
    int bit2 = (n >> p2) & 1;

    if (bit1 != bit2) {
        n ^= (1 << p1) | (1 << p2);
        //���� �������� ����� �� ����������, �� ������ �� ������� (�^� �������� ���������� ������������ ���)
    }
}


//������ ��� ��������� ������
void printBinary(unsigned long long int& n) {
    std::bitset<64> binary(n);
    std::string binary_str = binary.to_string();
    int pos = binary_str.find_first_not_of('0');
    if (pos != -1) {
        binary_str = binary_str.substr(pos);
    }
    else {
        binary_str = "0";
    }
    std::cout << binary_str << std::endl;
}