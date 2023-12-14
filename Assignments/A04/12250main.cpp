//Bishop Swearingen
//4883
#include <iostream>
#include <map>
using namespace std;

int main() {
    map<string, string> languageMap = {
        {"HELLO", "ENGLISH"},
        {"HOLA", "SPANISH"},
        {"HALLO", "GERMAN"},
        {"BONJOUR", "FRENCH"},
        {"CIAO", "ITALIAN"},
        {"ZDRAVSTVUJTE", "RUSSIAN"}
    };

    string word;
    int caseNumber = 1;
    while (cin >> word && word != "#") {
        cout << "Case " << caseNumber++ << ": ";
        if (languageMap.find(word) != languageMap.end()) {
            cout << languageMap[word] << endl;
        } else {
            cout << "UNKNOWN" << endl;
        }
    }
    return 0;
}
