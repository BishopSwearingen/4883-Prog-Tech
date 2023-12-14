//Bishop Swearingen
//4883
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t, n, m;
    cin >> t;
    while (t--) {
        cin >> n >> m;
        // Subtract 2 from n and m for the borders and divide by 3, taking the ceiling
        int sonarsN = ceil((n - 2) / 3.0);
        int sonarsM = ceil((m - 2) / 3.0);
        // Multiply the results to get the total number of sonars
        cout << sonarsN * sonarsM << endl;
    }
    return 0;
}
