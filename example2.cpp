#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool porownaj(string const& L, string const& R) {
    return L.size() < R.size();
}

int main() {
    vector<string> napisy = {
        "Roses are red,",
        "Henry Cavill is dreamy",
        "To complete the rhyme",
        "you must mispronounce meme",
    };

    sort(napisy.begin(), napisy.end(), porownaj);

    for(auto& napis : napisy) {
        cout << napis << endl;
    }
}
