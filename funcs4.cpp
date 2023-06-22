#include <iostream>

void swapBiats4(unsigned long long& num, int bite1, int bite2) {

    int p1{}, p2{};
    p1 = bite1 * 8;

    p2 = bite2 * 8;
   
    
    int bit1, bit2;
    for (int i{ 0 }; i < 8; i++) {
        bit1 = (num >> p1)&1;//получение значения бита 
        bit2 = (num >> p2)&1;
        if (bit1 != bit2) {
            num ^= (1 << p1) | (1 << p2);
        }
        p1++; p2++;
    }

}