#include <iostream>

bool clonBeatsIN(unsigned long long& n1, unsigned long long& n2, int p1) {

    int bit1, bit2;

    bit1 = (n1 >> p1) & 1;//получение значения бита 
    bit2 = (n2 >> p1) & 1;
    if (bit1 != bit2)
        return -1;
    else return 0;




}