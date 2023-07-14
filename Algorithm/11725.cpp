#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> graph;
vector<int> parents;
vector<bool> visited;

void FindParent(int node) {
    visited[node] = true;

    for (int i = 0; i < graph[node].size(); i++) {
        int nextNode = graph[node][i];

        if (!visited[nextNode]) {
            parents[nextNode] = node;
            FindParent(nextNode);
        }
    }
}

int sol11725() {
    int N;
    cin >> N;

    graph.resize(N + 1);
    parents.resize(N + 1);
    visited.resize(N + 1, false);

    for (int i = 0; i < N - 1; i++) {
        int S, E;
        cin >> S >> E;

        graph[S].push_back(E);
        graph[E].push_back(S);
    }

    FindParent(1);

    for (int i = 2; i <= N; i++) {
        cout << parents[i] << '\n';
    }

    return 0;
}