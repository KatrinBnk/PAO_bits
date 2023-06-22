int countSetBits(unsigned long long num) {
    int count = 0;
    while (num != 0) {
        count += num & 1;
        num >>= 1;
    }
<<<<<<< HEAD

=======
>>>>>>> 07f38bcb5a8691e0f9da8b0e3934363f1fd0a694
    return count;
}