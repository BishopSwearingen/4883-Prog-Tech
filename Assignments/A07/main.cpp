//Bishop Swearingen
//4883
//Rails
#include <iostream>
#include <stack>
#include <vector>

using namespace std;

bool canReorganizeCoaches(int n, const vector<int>& desiredOrder) {
    stack<int> station;
    int nextCoach = 1;

    for (int coach : desiredOrder) {
        // Push coaches onto the stack until we reach the right coach
        while (nextCoach <= n && (station.empty() || station.top() != coach)) {
            station.push(nextCoach++);
        }

        // Check if the top coach in the stack is the right one
        if (!station.empty() && station.top() == coach) {
            station.pop();
        } else {
            // Clear the stack for the next test case
            while (!station.empty()) station.pop();
            return false;
        }
    }
    // Clear the stack for the next test case
    while (!station.empty()) station.pop();
    return true;
}

int main() {
    int n;
    while (cin >> n && n != 0) {
        vector<int> order(n);
        while (true) {
            cin >> order[0];
            if (order[0] == 0) {
                cout << endl; // End of a block
                break;
            }
            for (int i = 1; i < n; ++i) {
                cin >> order[i];
            }

            if (canReorganizeCoaches(n, order)) {
                cout << "Yes" << endl;
            } else {
                cout << "No" << endl;
            }
        }
    }
    return 0;
}
