//Bishop Swearingen
//4883
#include <iostream>
using namespace std;

int main() {
    int T, N;
    cin >> T;
    for (int t = 1; t <= T; t++) {
        cin >> N;
        int maxSpeed = 0, creatureSpeed;
        
        for (int i = 0; i < N; i++) {
            cin >> creatureSpeed;
            maxSpeed = max(maxSpeed, creatureSpeed);
        }

        cout << "Case " << t << ": " << maxSpeed << endl;
    }
    return 0;
}
