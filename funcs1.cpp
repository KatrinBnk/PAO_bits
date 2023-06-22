
#include <iostream>
#include <bitset>


bool isMirroredByte(uint8_t byte) {
    std::bitset<8> bits(byte);
    for (int i = 0; i < 4; i++) {
        if (bits[i] != bits[7 - i])
            return false;
    }
    return true;
}