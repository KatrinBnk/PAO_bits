#include <iostream>

bool palindrom(unsigned long long& num) {
    int length = 0;
    unsigned long long num1 = num;
    while (num1 != 0) {
        num1 >>= 1;
        length++;
    }

<<<<<<< HEAD

=======
>>>>>>> 07f38bcb5a8691e0f9da8b0e3934363f1fd0a694
    int p1{ 0 };
    int p2{ length };
    int bit1, bit2;
    while (p1 != length and  p2 != -1) {
            bit1 = (num >> p1) & 1;//��������� �������� ���� 
            bit2 = (num >> p2) & 1;
            if (bit1 != bit2) {
                return -1;
            }
            p1++; p2--;
    }
    

    return 0;
}