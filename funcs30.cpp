#include <iostream>

bool clonBeats(unsigned long long& num, int p1, int p2) {


    int bit1, bit2;
    
        bit1 = (num >> p1) & 1;//��������� �������� ���� 
        bit2 = (num >> p2) & 1;
        if (bit1 != bit2)
            return 0;
        else return -1;
        
    

}