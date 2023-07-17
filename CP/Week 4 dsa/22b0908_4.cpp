#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int paths_count = 0;

void dfs(int node, int edges_traversed, const vector<vector<int>>& tree, unordered_set<int>& visited, int k) {
    if (edges_traversed == k) {
        paths_count++;
    }
    if (edges_traversed > k) {
        return;
    }

    visited.insert(node);
    for (int neighbor : tree[node]) {
        if (visited.find(neighbor) == visited.end()) {
            dfs(neighbor, edges_traversed + 1, tree, visited, k);
        }
    }
    visited.erase(node);
}

int count_paths(const vector<vector<int>>& tree, int n, int k) {
    paths_count = 0;
    for (int node = 1; node <= n; ++node) {
        unordered_set<int> visited;
        dfs(node, 0, tree, visited, k);
    }
    return paths_count;
}

int main() {
    int n, k;
    cin >> n >> k;

    // Create adjacency list representation of the tree
    vector<vector<int>> tree(n + 1);
    for (int i = 0; i < n - 1; ++i) {
        int a, b;
        cin >> a >> b;
        tree[a].push_back(b);
        tree[b].push_back(a);
    }

    // Count the number of distinct paths
    int distinct_paths = count_paths(tree, n, k);

    // Print the result
    cout << distinct_paths/2<< endl;

    return 0;
}
