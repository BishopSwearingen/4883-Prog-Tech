//Bishop Swearingen
//4883
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

// Two strings are considered similar if they have at most one mismatching character
bool isSimilar(const string &word1, const string &word2) {
    int mismatchCount = 0;
    for (int i = 0; i < word1.length(); i++) {
        if (word1[i] != word2[i]) {
            mismatchCount++;
        }
    }
    return mismatchCount <= 1;
}

int getNumber(const string &word) {
    if (isSimilar(word, "one")) return 1;
    if (isSimilar(word, "two")) return 2;
    if (isSimilar(word, "three")) return 3;
}

int main() {
    int n;
    cin >> n;
    string word;
    for (int i = 0; i < n; i++) {
        cin >> word;
        cout << getNumber(word) << endl;
    }
    return 0;
}
