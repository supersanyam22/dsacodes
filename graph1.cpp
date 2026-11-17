#include <iostream>
#include <vector>
using namespace std;

void dfs(int u, const vector<vector<int>> &adj, vector<bool> &visited) {
    visited[u] = true;
    for (int v : adj[u])
        if (!visited[v])
            dfs(v, adj, visited);
}

int countComponents(int V, const vector<pair<int,int>> &E) {
    vector<vector<int>> adj(V);
    for (auto &e : E) {
        adj[e.first].push_back(e.second);
        adj[e.second].push_back(e.first);       // undirected
    }

    vector<bool> visited(V, false);
    int components = 0;

    for (int i = 0; i < V; i++) {
        if (!visited[i]) {                      // new unvisited vertex = new component
            dfs(i, adj, visited);
            components++;
        }
    }
    return components;
}

int main() {
    int V = 7;
    vector<pair<int,int>> E = {{0,1}, {1,2}, {3,4}, {5,6}};
    // components: {0,1,2}, {3,4}, {5,6}

    cout << "Connected components: " << countComponents(V, E) << endl;
    return 0;
}
