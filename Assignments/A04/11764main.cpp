#include <iostream>
#include <vector>
using namespace std;

int main() {
    int T, N;
    cin >> T;
    for (int t = 1; t <= T; t++) {
        cin >> N;
        // Declare a vector to store the heights of the walls
        vector<int> wallHeights(N);
        for (int i = 0; i < N; i++) {
            cin >> wallHeights[i];
        }

        int highJumps = 0, lowJumps = 0;
        // Iterate over the wall heights to count high jumps and low jumps
        for (int i = 0; i < N - 1; i++) {
            if (wallHeights[i] < wallHeights[i + 1]) {
                highJumps++; // Increment high jumps if the next wall is higher
            } else if (wallHeights[i] > wallHeights[i + 1]) {
                lowJumps++; // Increment low jumps if the next wall is lower
            }
        }

        cout << "Case " << t << ": " << highJumps << " " << lowJumps << endl;
    }
    return 0;
}
