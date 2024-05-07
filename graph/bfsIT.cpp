#include <iostream>
#include <vector>
#include <queue>

using namespace std;

const int MAX_SIZE = 100;

vector<vector<int>> graph(MAX_SIZE, vector<int>(MAX_SIZE, 0));
vector<bool> visited(MAX_SIZE, false);

void bfs(int startNode) {
    queue<int> q;
    q.push(startNode);
    visited[startNode] = true;

    while (!q.empty()) {
        int node = q.front();
        q.pop();
        cout << "Visited node: " << node << endl;

        for (int i = 0; i < MAX_SIZE; i++) {
            if (graph[node][i] && !visited[i]) {
                q.push(i);
                visited[i] = true;
            }
        }
    }
}

int main() {
    graph[0][1] = 1;
    graph[0][2] = 1;
    graph[1][3] = 1;
    graph[2][3] = 1;
    graph[3][4] = 1;

    int startNode; // Starting node for BFS
    cout << "Enter the starting node for BFS: ";
    cin >> startNode;

    bfs(startNode);

    return 0;
}
