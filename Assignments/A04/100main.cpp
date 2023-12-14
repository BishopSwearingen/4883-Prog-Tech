//Bishop Swearingen
//4883
#include <iostream>
using namespace std;

// Function to calculate the cycle length 
int cycleLength(int n) {
    int length = 1;
    while (n != 1) {
        if (n % 2 == 1) {
            n = 3 * n + 1;
        } else {
            n = n / 2;
        }
        length++;
    }
    return length;
}
// Function to find the maximum cycle length for all numbers between i and j.
int maxCycleLength(int i, int j) {
    int max_length = 0;
    for (int k = i; k <= j; k++) {
        max_length = max(max_length, cycleLength(k));
    }
    return max_length;
}

int main() {
    int i, j;
    while (cin >> i >> j) {
        int original_i = i, original_j = j;
        if (i > j) swap(i, j);
        cout << original_i << " " << original_j << " " << maxCycleLength(i, j) << endl;
    }
    return 0;
}
