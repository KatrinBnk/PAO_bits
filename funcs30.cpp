#include <iostream>

bool clonBeats(unsigned long long& num, int p1, int p2) {

<<<<<<< HEAD

=======
>>>>>>> 07f38bcb5a8691e0f9da8b0e3934363f1fd0a694
    int bit1, bit2;
    
        bit1 = (num >> p1) & 1;//получение значения бита 
        bit2 = (num >> p2) & 1;
        if (bit1 != bit2)
            return 0;
        else return -1;
        
    

}