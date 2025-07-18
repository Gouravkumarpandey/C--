#include <iostream>
#include <vector>
using namespace std;

// DFS function to explore each group
int dfs(int node, vector<vector<int>>& graph, vector<bool>& visited) {
    visited[node] = true;
    int count = 1;  // count this astronaut

    for (int neighbor : graph[node]) {
        if (!visited[neighbor]) {
            count += dfs(neighbor, graph, visited);
        }
    }
    return count;
}

int main() {
    int n, p;
    cin >> n >> p;

    vector<vector<int>> graph(n);  // build graph
    

    for (int i = 0; i < p; ++i) {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    vector<bool> visited(n, false);
    vector<int> groupSizes;

    // Get sizes of all connected groups (countries)
    for (int i = 0; i < n; ++i) {
        if (!visited[i]) {
            int size = dfs(i, graph, visited);
            groupSizes.push_back(size);
        }
    }

    // Calculate total valid cross-country pairs
    long long totalPairs = 0;
    long long sum = 0;

    for (int size : groupSizes) {
        totalPairs += sum * size;  // size * (sum of all previous sizes)
        sum += size;
    }

    cout << totalPairs << endl;
    return 0;
}
