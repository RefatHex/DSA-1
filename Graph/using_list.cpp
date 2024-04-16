#include <iostream>
#include <list>

using namespace std;


void addEdge(list<int> adj[], int s, int d) {
    adj[s].push_back(d);
    adj[d].push_back(s);
}


void printGraph(list<int> adj[], int nodes) {
    for (int d = 0; d < nodes; ++d) {
        cout << "\n Vertex " << d << ":";
        for (auto x : adj[d])
            cout << "-> " << x;
        cout << endl;
    }
}

int main() {
    int nodes = 6;


    list<int> graph[nodes];


    addEdge(graph,0, 4);
    addEdge(graph,0, 3);
    addEdge(graph,1, 2);
    addEdge(graph,1, 4);
    addEdge(graph,1, 5);
    addEdge(graph,2, 3);
    addEdge(graph,2, 5);
    addEdge(graph,5, 3);
    addEdge(graph,5, 4);


    printGraph(graph, nodes);

    return 0;
}
