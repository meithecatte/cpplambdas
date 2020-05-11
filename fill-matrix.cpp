int * fill_matrix(size_t n) {
    int * M = new int[n * n];
    auto m = [&](size_t a, size_t b) -> int& {
        return M[a * n + b];
    };

    for (size_t row = 0; row < n; row++) {
        size_t zero_pos = n - row - 1;
        size_t col = 0;
        for (; col < zero_pos; col++) m(row, col) = 1;
        m(row, col++) = 0;
        for (; col < n; col++) m(row, col) = -1;
    }

    return M;
}
