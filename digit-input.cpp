std::ifstream in(name);

auto get_digit = [&]() {
    do {
        char c = in.get();
        if (c == '0') return 0;
        if (c == '1') return 1;
    } while(in);
    return -1;
};

size_t total = 0;
for(;;) {
    uint8_t value = 0;
    for (int i = 0; i < 8; i++) {
        int digit = get_digit();
        if (digit == -1) return total;
        value <<= 1;
        value += digit;
    }
    if (value == 64) total++;
}
