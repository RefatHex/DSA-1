#include <iostream>
#include <vector>

using namespace std;

const int MAX_SIZE = 100;

vector<vector<int>> graph(MAX_SIZE, vector<int>(MAX_SIZE, 0));
vector<bool> visited(MAX_SIZE, false);

void dfs(int node) {
    visited[node] = true;
    cout << "Visited node: " << node << endl;

    for (int i = 0; i < MAX_SIZE; i++) {
        if (graph[node][i] && !visited[i]) {
            dfs(i);
        }
    }
}

int main() {
    graph[0][1] = 1;
    graph[0][2] = 1;
    graph[1][3] = 1;
    graph[2][3] = 1;
    graph[3][4] = 1;

    int startNode; // Starting node for DFS
    cout << "Enter the starting node for DFS: ";
    cin >> startNode;

    dfs(startNode);

    return 0;
}
