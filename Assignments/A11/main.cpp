//Bishop Swearingen
//4883
//UVA Online Judge Sending Email Problem
#include <iostream>
#include <vector>
#include <queue>
#include <limits>

using namespace std;

const int MAXN = 20000;
const int INF = numeric_limits<int>::max();

vector<pair<int, int>> graph[MAXN]; // Graph as an adjacency list: (neighbor, weight)

// Dijkstra's Algorithm to find the shortest path
int dijkstra(int start, int target, int n) {
    vector<int> dist(n, INF);
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq; // (distance, node)

    dist[start] = 0;
    pq.push({0, start});

    while (!pq.empty()) {
        int u = pq.top().second;
        int d = pq.top().first;
        pq.pop();

        if (d > dist[u]) continue; // Skip if we already found a better path

        for (auto &p : graph[u]) {
            int v = p.first;
            int next_dist = d + p.second;

            if (next_dist < dist[v]) {
                dist[v] = next_dist;
                pq.push({next_dist, v});
            }
        }
    }

    return dist[target];
}

int main() {
    int N;
    cin >> N;

    for (int i = 1; i <= N; ++i) {
        int n, m, S, T;
        cin >> n >> m >> S >> T;

        // Clear the graph for the new case
        for (int j = 0; j < n; ++j) graph[j].clear();

        // Read and build graph
        for (int j = 0; j < m; ++j) {
            int u, v, w;
            cin >> u >> v >> w;
            graph[u].push_back({v, w});
            graph[v].push_back({u, w}); // Since the graph is bidirectional
        }

        int result = dijkstra(S, T, n);

        cout << "Case #" << i << ": ";
        if (result == INF) {
            cout << "unreachable" << endl;
        } else {
            cout << result << endl;
        }
    }

    return 0;
}
