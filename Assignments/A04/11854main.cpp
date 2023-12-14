//Bishop Swearingen
//4883
#include <iostream>
#include <algorithm>
using namespace std;

// Function to determine if a triangle is a right triangle
bool isRightTriangle(int a, int b, int c) {
    // Ensure a is the largest number
    int sides[3] = {a, b, c};
    sort(sides, sides + 3);

    // Check if the triangle satisfies Pythagoras' theorem
    return sides[2] * sides[2] == sides[0] * sides[0] + sides[1] * sides[1];
}

int main() {
    int a, b, c;
    while (true) {
        cin >> a >> b >> c;
        if (a == 0 && b == 0 && c == 0) break;

        if (isRightTriangle(a, b, c)) {
            cout << "right" << endl;
        } else {
            cout << "wrong" << endl;
        }
    }
    return 0;
}
