#include <iostream>
#include <vector>
#include <queue>
using namespace std;


void dfs(int node, vector<vector<int>>& graph, vector<bool>& visited, vector<pair<int, int>>& dfs_tree) {
    visited[node] = true;
    for (int neighbor = 0; neighbor < graph.size(); ++neighbor) {
        if (graph[node][neighbor] == 1 && !visited[neighbor]) {
            dfs_tree.push_back({node + 1, neighbor + 1}); 
            dfs(neighbor, graph, visited, dfs_tree);
        }
    }
}


void bfs(int start, vector<vector<int>>& graph, vector<pair<int, int>>& bfs_tree) {
    queue<int> q;
    vector<bool> visited(graph.size(), false);

    q.push(start);
    visited[start] = true;

    while (!q.empty()) {
        int node = q.front();
        q.pop();
        for (int neighbor = 0; neighbor < graph.size(); ++neighbor) {
            if (graph[node][neighbor] == 1 && !visited[neighbor]) {
                visited[neighbor] = true;
                q.push(neighbor);
                bfs_tree.push_back({node + 1, neighbor + 1}); 
            }
        }
    }
}

int main() {
    int n; 
    cin >> n;

    int start; 
    cin >> start;

    
    vector<vector<int>> graph(n, vector<int>(n));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> graph[i][j];
        }
    }

   
    vector<pair<int, int>> dfs_tree;
    vector<bool> visited(n, false);
    dfs(start - 1, graph, visited, dfs_tree);


    vector<pair<int, int>> bfs_tree;
    bfs(start - 1, graph, bfs_tree);


    cout << "DFS tree\n";
    for (auto edge : dfs_tree) {
        cout << edge.first << " " << edge.second << "\n";
    }

 
    cout << "BFS tree\n";
    for (auto edge : bfs_tree) {
        cout << edge.first << " " << edge.second << "\n";
    }

    return 0;
}
