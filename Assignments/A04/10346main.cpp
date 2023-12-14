//Bishop Swearingen
//4883
#include <iostream>
using namespace std;

int main() {
    int n, k;
    while (cin >> n >> k) {
        int totalCigarettes = n;
        int butts = n;

        while (butts >= k) {
            int newCigarettes = butts / k;
            totalCigarettes += newCigarettes;
            butts = butts % k + newCigarettes;
        }

        cout << totalCigarettes << endl;
    }
    return 0;
}
