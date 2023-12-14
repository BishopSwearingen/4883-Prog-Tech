//Bishop Swearingen
//4883
#include <iostream>
#include <string>
using namespace std;

int main() {
    string line;
    bool openQuote = true; // Tracks if we are at the start of a quotation

    while (getline(cin, line)) {
        for (char &c : line) {
          // Check if the current character is a quotation mark
            if (c == '"') {
              // If it's the start of a quotation, replace with two backticks
                if (openQuote) {
                    cout << "``";
                } else { // If it's the end of a quotation, replace with two single quotes
                    cout << "''";
                }
                openQuote = !openQuote;
            } else { // If not a quotation mark, print the character as is
                cout << c;
            }
        }
        cout << endl;
    }

    return 0;
}
