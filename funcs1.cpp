
#include <iostream>
#include <bitset>

<<<<<<< HEAD

=======
>>>>>>> 07f38bcb5a8691e0f9da8b0e3934363f1fd0a694
bool isMirroredByte(uint8_t byte) {
    std::bitset<8> bits(byte);
    for (int i = 0; i < 4; i++) {
        if (bits[i] != bits[7 - i])
            return false;
    }
    return true;
}