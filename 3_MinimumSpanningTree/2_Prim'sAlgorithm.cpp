#include<iostream>
#include<list>
#include<vector>
#include<tuple>
using namespace std;

class Graph {

public:
    list<int> *adj;
    int n;
    vector<tuple<int, int, int>> edges;

    Graph(int N) {
        n = N;
        adj = new list<int> [n];
    }

    void addEdge(int u, int v, int w, bool bidir = true) {
        adj[u].push_back(v);
        edges.push_back({w, u, v});
        if (bidir) {
            adj[v].push_back(u);
        }
    }

    
};