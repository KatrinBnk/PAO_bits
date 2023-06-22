#include <iostream>

bool swapBiars2(unsigned long long& num) {

<<<<<<< HEAD

=======
>>>>>>> 07f38bcb5a8691e0f9da8b0e3934363f1fd0a694
    int p1{ 0 };
    int p2{ 8*2-1};
    int bit1, bit2;
    for (int i{ 0 }; i < 8; i++) {
        bit1 = (num >> p1) & 1;//получение значения бита 
        bit2 = (num >> p2) & 1;
        if (bit1 != bit2) {
            return 0;
        }
        p1++; p2--;
    }

}