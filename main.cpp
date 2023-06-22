#include <iostream>
#include <bitset>
#include <string>
#include <bit>

#include <vector>
#include "funcsT.h"

//���� ��������� ���-�� ������� �������� �����
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
    std::cout << "����� ����� ������? ";
    std::cin >> tag;
    
    switch (tag)
    {
    case 1:
    {
        std::cout << "1. ����� ������ N ����� �����, � ������� ������� ���� �������� ���������� ���������� ���������� �����.";
        int N;
        std::cout << "������� ���������� ����� N: ";
        std::cin >> N;

        int count = 0;
        unsigned long long int num = 0;

        while (count < N) {
            uint8_t lowByte = num & 0xFF;
            uint8_t highByte = (num >> 8) & 0xFF;

            if (isMirroredByte(lowByte) && lowByte != highByte) {
                std::cout << num << std::endl;
                //��� ������� � ���������� ����� �������� �������� �����
                count++;
            }

            num++;
        }
        break;
    };
    case 2:
    {
        std::cout << "2. ����� ������ N ����� �����, � ������� ������� ���� �������� ���������� ���������� ����������� �����.";
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
        std::cout << "3. ����������� ����� ������� �������� � �������� ���� �����.\n";
        std::cout << "������ � �������� �����:\n\
1 ����: �������� �� 0 �� 255\n\
2 �����: �������� �� 0 �� 65, 535\n\
4 ����� : �������� �� 0 �� 4, 294, 967, 295\n\
8 ���� : �������� �� 0 �� 18, 446, 744, 073, 709, 551, 615\n";
        std::cout << "������� ������ ����� � ������: ";
        int sizebit{};
        std::cin >> sizebit;
        std::cout << "������� �����:";
        unsigned long long int num3{};
        std::cin >> num3;
        swapBiats(num3, sizebit);
        std::cout << num3;
    };
    case 4: {
        std::cout << "4.����������� ����� ������� ���� ��������� ���� �����.\n";
        std::cout << "����� + ���� 1 + ���� 2:";
        unsigned long long int num4{};
        int b1, b2;
        std::cin >> num4 >> b1 >> b2;
        swapBiats4(num4, b1, b2);
        std::cout << num4 << "\n";

        break;
    };
    case 5: {
        std::cout << "5. ����������� ����� ������� ���� ��������� ��� �����.\n";
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
        std::cout << "6. ����������� ����������� ����� ����� ������ �� ��������� ����� ����.\n";
        std::cout << "������� ����� + �����:";
        unsigned long long int num6{};
        int shift;
        std::cin >> num6 >> shift;
        editNumber(num6, shift);
        std::cout << num6 << "\n";
        break;
    };
    case 7: {
        std::cout << "7. ����������� ����������� ����� ����� ����� �� ��������� ����� ����." << "\n";
        std::cout << "������� ����� + �����:";
        unsigned long long int num7{};
        int shift;
        std::cin >> num7 >> shift;
        editNumber7(num7, shift);
        std::cout << num7 << "\n";
        break;
    };
    case 8: {
        std::cout << "8. ����������� ����������� ����� ����� ������ �� ��������� ����� ���." << std::endl;
        std::cout << "������� ����� + �����:";
        unsigned long long int num8{};
        int shift;
        std::cin >> num8 >> shift;
        editNumber8(num8, shift);
        std::cout << num8 << "\n";
        break;
    };
    case 9: {
        std::cout << "9. ����������� ����������� ����� ����� ����� �� ��������� ����� ���." << std::endl;
        std::cout << "������� ����� + �����:";
        unsigned long long int num9{};
        int shift;
        std::cin >> num9 >> shift;
        editNumber9(num9, shift);
        std::cout << num9 << "\n";
        break;
    };
    case 10: {
        std::cout << "10. ����������� �������� ����� ����� ����� �� ��������� �����, �� ������ ��� ������ �����." << std::endl;
        std::cout << "������� ����� + �����:";
        unsigned long long int num10{};
        int shift;
        std::cin >> num10 >> shift;
        evenBitLeftShift(num10, shift);
        std::cout << num10 << "\n";
        break;
    };
    case 11: {
        std::cout << "11. ����������� �������� ����� ����� ������ �� ��������� �����, �� ������ ��� �������� �����." << std::endl;
        std::cout << "������� ����� + �����:";
        unsigned long long int num11{};
        int shift;
        std::cin >> num11 >> shift;
        oddBitRightShift(num11, shift);
        std::cout << num11 << "\n";
        break;
    };
    case 12: {
        std::cout << "12. ����������� ����������� �������� ����� ����� ����� �� ��������� ����� ���, ��\
            ������ ��� ������ �����." << std::endl;
        std::cout << "������� ����� + �����:";
        unsigned long long int num12{};
        int shift;
        std::cin >> num12 >> shift;
        cyclicEvenBitLeftShift(num12, shift);
        std::cout << num12 << "\n";
        break;
    };
    case 13: {
        std::cout << "13. ����������� ����������� �������� ����� ����� ������ �� ��������� ����� ���, �� ������ ��� �������� �����." << std::endl;
        std::cout << "������� ����� + �����:";
        unsigned long long int num12{};
        int shift;
        std::cin >> num12 >> shift;
        cyclicEvenBitLeftShift(num12, shift);
        std::cout << num12 << "\n";
        break;
    };
    case 14: {
        std::cout << "14. ���������� ������� ����� ������� ������� � ������� ������������� ������� ������ �����." << std::endl;
        std::cout << "";
        unsigned long long int num14;
        std::cin >> num14;
        std::cout << findMostSignificantOnePosition(num14);
        break;
    };
    case 15: {
        std::cout << "15. �������� �������, ������������ 0 ��� 1 � ��������� ��� ������� ������ ����� � ����������� ��������� ���� ��� ���������." << std::endl;
        std::cout << "����� + ������ + ��������: ";
        int index, bin;
        unsigned long long int num15;
        std::cin >> num15 >> index >> bin;
        setBit(num15, index, bin);
        std::cout << num15;
        break;
    };
    case 16: {
        std::cout << "16. �������� �������, ������������ ������ ���� � ������ ����� ����� � ���������\
������� � ����������� ��������� ���� ��� ���������, ���� ����� �����\
������������� ����� �� ����������, �� ��� �������������." << std::endl;
        std::cout << "����� + ������ + ��������: ";
        int index, bin;
        unsigned long long int num16;
        std::cin >> num16 >> index >> bin;
        setByte(num16, index, bin);
        std::cout << num16;
        break;
    };
    case 17: {
        std::cout << "17. �������� �������, ������������ ������ ���� � ������ ����� ����� � ���������\
            ������� � ����������� ��������� ���� ��� ���������, ���� ����� �����\
            ������������� ����� �� ����������, �� ��� ���������� � ������ ������� �����. " << std::endl;
        std::cout << "����� + ������ + ��������: ";
        int index, bin;
        unsigned long long int num17;
        std::cin >> num17 >> index >> bin;
        setByte17(num17, index, bin);
        std::cout << num17;
        break;
    };
    case 18: {
        std::cout << " 18. �������������� � ��������� ����� n ��� ������� � p-� �������." << std::endl;
        std::cout << "����� + ����� ��� + �������: ";
        int n, p; unsigned long long num18;
        std::cin >> num18 >> n >> p;
        invertBits(num18, p, n);
        std::cout << num18;
        break;
    };
    case 19: {
        std::cout << " 19. ����������� ���������� ������ � ������� ������ ���������� �����." << std::endl;
        std::cout << "�����: ";
        unsigned long long num19;
        std::cin >> num19;
        std::cout << countOnes(num19);
        break;
    };
    case 20: {
        std::cout << "20. ����������� ���������� ����� � ������� ������ ���������� �����." << std::endl;
        std::cout << "�����: ";
        unsigned long long num20;
        std::cin >> num20;
        std::cout << countZeros(num20);
        
        break;
    };
    case 21: {
        std::cout << "21. ��������� ����� ������ � ���� ������, �������������� � �������� ���� (� ����� ������)." << std::endl;
        //��������� ������� �� 19 ����� countOnes
        std::cout << "�����: ";
        unsigned long long n1, n2;
        std::cin >> n1 >> n2;
        std::cout << countOnes(n1) << " � " << countOnes(n2);
        break;
    };
    case 22: {
        std::cout << "22. ��������� ����� ����� � ���� ������, �������������� � �������� ���� (� ����� ������)." << std::endl;
        //��������� ������� �� 20 ����� countOnes
        std::cout << "�����: ";
        unsigned long long n1, n2;
        std::cin >> n1 >> n2;
        std::cout << countZeros(n1) << " � " << countZeros(n2);
        break;
    };
    case 23: {
        std::cout << "23. ����������� ������� � ����� ��������� ������� ������������������." << std::endl;
        std::cout << "����� + ������������������ (� ���� ����������� �����): ";
        unsigned int p; unsigned long long int n1;
        std::cin >> n1 >> p;
        bool hasSequence = hasBitSequence(n1, p);

        std::cout << "������� ������� ������������������: " << (hasSequence ? "��" : "���") << std::endl;
        std::cout << "t,exbq uhj,";
        break;
    };
    case 24: {
        std::cout << "24. ����������� � ��������� ����� ������� ������� ��������� �������� ������� ������������������." << std::endl;
        std::cout << "gjitk yf[eq";
        break;
    };
    case 25: {
        std::cout << "25. ����������� � ��������� ����� ������� ���������� ��������� �������� ������� ������������������." << std::endl;
        std::cout << "blb yf[eq";
        break;
    };
    case 26: {
        std::cout << "26. ��������� ���������� ��������� ����� � ������ ��������� �������������� �������." << std::endl;
        std::vector<int> numbers;
        int numElements;
        std::cout << "������� ���������� ���������: ";
        std::cin >> numElements;

        std::cout << "������� �������� �������:\n";
        for (int i = 0; i < numElements; i++) {
            int element;
            std::cin >> element;
            numbers.push_back(element);
        }
        int totalSetBits = 0;

        for (int i = 0; i < numbers.size(); i++) {
            totalSetBits += countSetBits(numbers[i]);
        }

        std::cout << "��������� ���������� ��������� �����: " << totalSetBits << std::endl;

        break;
    };
    case 27: {
        std::cout << "27. ��������� ���������� ������� ����� � ������ ��������� �������������� �������." << std::endl;
        std::vector<unsigned long long> numbers;
        int numElements;
        std::cout << "������� ���������� ���������: ";
        std::cin >> numElements;

        std::cout << "������� �������� �������:\n";
        for (int i = 0; i < numElements; i++) {
            int element;
            std::cin >> element;
            numbers.push_back(element);
        }
        int totalSetBits = 0;

        for (int i = 0; i < numbers.size(); i++) {
            totalSetBits += countZeros(numbers[i]);
        }

        std::cout << "��������� ���������� ������� �����: " << totalSetBits << std::endl;
        break;
    };
    case 28: {
        std::cout << "28. ���������� ������������ �� ����� �������� ������������� ����� ��������� (����� ������� �������� ����� ��� ������ ������)." << std::endl;
        std::cout << "����� ";
        unsigned long long int num;
        std::cin >> num;
        std::cout << "����� ��� �����������: " << (palindrom(num) ? "��" : "���") << std::endl;
        break;
    };
    case 29: {
        std::cout << "29. ���������� �������� �� �������� ������������� ����� ���������� ������������ ������." << std::endl;
        std::cout << "����� ";
        unsigned long long int num;
        std::cin >> num;
        std::cout << "����� ���������� ������������ ������: " << (miror(num) ? "��" : "���") << std::endl;
        break;
    };
    case 30: {
        std::cout << "30. ��������� ��������� ����� � �������� �����." << std::endl;
        std::cout << "����� + ��� 1 + ��� 2:";
        unsigned long long int num4{};
        int b1, b2;
        std::cin >> num4 >> b1 >> b2;
        std::cout << "��� �����: " << (clonBeats(num4, b1, b2) ? "��" : "���") << std::endl;
        break;
    };
    case 31: {
        std::cout << "������ ����� ���� ������ ������� �������������������, �� � �� �� �� ����� �� ������� " << std::endl;
        std::cout << "31. ��������� ��������� ������������������� ����� � �������� �����." << std::endl;
        std::cout << "����� + ������ ������ 1 ���� + ������ ������ 1 ���� + �����: ";
        unsigned long long int num4{};
        int b1, b2, len;
        std::cin >> num4 >> b1 >> b2 >> len;
        std::cout << "��� �����: " << (compareBitSequences(num4, b1, b2, len) ? "��" : "���") << std::endl;
        break;
    };
    case 32: {
        std::cout << "32. ��������� ��������� ����� � ���� ������ �������� ������." << std::endl;
        std::cout << "����� + ����+ ��� 1:";
        unsigned long long int num1{}, num2;
        int b1;
        std::cin >> num2 >> num2 >> b1;
        std::cout << "��� �����: " << (clonBeatsIN(num1, num2, b1) ? "��" : "���") << std::endl;
        break;
    };
    case 33: {
        std::cout << "33. ��������� ��������� ������������������� ����� � ���� ������ �������� ������." << std::endl;
        std::cout << "����� + ����+ ������ ���� + ����� ����:";
        unsigned long long int num1{}, num2;
        int b1, len;
        std::cin >> num2 >> num2 >> b1 >> len;
        std::cout << "��� �����: " << (compareBitSequences2(num1, num2, b1, len) ? "��" : "���") << std::endl;
        
        break;
    };
    default:
        std::cout << "blb yf[eq";
        break;
    }
    
    




    




    
}


