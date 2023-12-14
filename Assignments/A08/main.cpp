//Bishop Swearingen
//4883
#include <iostream>
#include <vector>
#include <queue>

using namespace std;

bool isBicolorable(int n, const vector<vector<int>>& edges) {
    vector<int> colors(n, -1); // -1 means not colored, 0 and 1 are the two colors
    colors[0] = 0; // Start coloring from node 0

    queue<int> q;
    q.push(0);

    while (!q.empty()) {
        int node = q.front();
        q.pop();

        for (int neighbor : edges[node]) {
            if (colors[neighbor] == colors[node]) {
                return false; // Same color neighbor found, not bicolorable
            }
            if (colors[neighbor] == -1) {
                colors[neighbor] = 1 - colors[node]; // Assign opposite color
                q.push(neighbor);
            }
        }
    }

    return true;
}

int main() {
    int n, l, a, b;

    while (true) {
        cin >> n;
        if (n == 0) break;

        cin >> l;
        vector<vector<int>> edges(n);

        for (int i = 0; i < l; ++i) {
            cin >> a >> b;
            edges[a].push_back(b);
            edges[b].push_back(a);
        }

        cout << (isBicolorable(n, edges) ? "BICOLORABLE." : "NOT BICOLORABLE.") << endl;
    }

    return 0;
}
