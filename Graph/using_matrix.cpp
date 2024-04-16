#include<iostream>
using namespace std;

const int nodes = 6;
int graph[nodes][nodes] = {0};

void addEdge(int i, int j){
    graph[i][j] = 1;
    graph[j][i] = 1;
}

void print(int nodes){
    for(int i = 0; i < nodes; i++){
        for(int j = 0; j < nodes; j++){
            cout << graph[i][j] << " ";
        }
        cout << endl;
    }
}

int main(){
    addEdge(0, 4);
    addEdge(0, 3);
    addEdge(1, 2);
    addEdge(1, 4);
    addEdge(1, 5);
    addEdge(2, 3);
    addEdge(2, 5);
    addEdge(5, 3);
    addEdge(5, 4);
    print(nodes);
    return 0;
}
