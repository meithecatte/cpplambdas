#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int policz_znak(string napis, char znak) {
    return count_if(napis.begin(), napis.end(),
    [znak](char c) {
        return c == znak;
    });
}

int main() {
    cout << policz_znak("The quick brown fox jumps over the lazy dog", 'e') << '\n';
}
