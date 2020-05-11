#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int policz_spacje(string napis) {
    return count_if(napis.begin(), napis.end(),
    [](char c) {
        return c == ' ';
    });
}

int main() {
    cout << policz_spacje("The quick brown fox jumps over the lazy dog") << '\n';
}
