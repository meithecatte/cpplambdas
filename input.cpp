#include <algorithm>
#include <functional>
#include <iostream>
#include <vector>
using namespace std;

void wczytaj_liste(function<bool(int)> f) {
    cout << "Liczba elementów? ";
    int n;
    cin >> n;
    while (n > 0) {
        int element;
        cin >> element;
        if (f(element)) {
            n--;
        }
    }
}

int main() {
    cout << "Podaj liczby pierwsze.\n";
    vector<int> pierwsze;
    int suma = 0;
    wczytaj_liste([&pierwsze, &suma](int p) {
        if (czy_pierwsza(p)) {
            pierwsze.push_back(p);
            suma += p;
            return true;
        } else {
            cout << p << " nie jest pierwsza\n";
            return false;
        }
    });

    sort(pierwsze.begin(), pierwsze.end());
    cout << "Mediana: " << pierwsze[pierwsze.size() / 2] << '\n';
    cout << "Średnia: " << suma / (double)pierwsze.size() << '\n';
}
