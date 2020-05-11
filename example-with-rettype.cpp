#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    vector<string> napisy = {
        "Roses are red,",
        "Henry Cavill is dreamy",
        "To complete the rhyme",
        "you must mispronounce meme",
    };

    sort(napisy.begin(), napisy.end(),
    [](string const& L, string const& R) -> bool {
        return L.size() < R.size();
    });

    for(auto& napis : napisy) {
        cout << napis << endl;
    }
}
