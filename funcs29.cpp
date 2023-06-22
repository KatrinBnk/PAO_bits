#include <iostream>

bool miror(unsigned long long& num) {
    int length = 0;
    unsigned long long num1 = num;
    while (num1 != 0) {
        num1 >>= 1;
        length++;
    }


    int p1{ 0 };
    int p2{ length };
    int bit1, bit2;
    if (length % 2 == 0) {
        while (p1 != p2) {
            bit1 = (num >> p1) & 1;//получение значения бита 
            bit2 = (num >> p2) & 1;
            if (bit1 != bit2) {
                return -1;
            }
            p1++; p2--;
        }
    }
    else {
        while (p1 != length/2 and p2 != length / 2) {
            bit1 = (num >> p1) & 1;//получение значения бита 
            bit2 = (num >> p2) & 1;
            if (bit1 != bit2) {
                return -1;
            }
            p1++; p2--;
        }
    }
    
    return 0;
}