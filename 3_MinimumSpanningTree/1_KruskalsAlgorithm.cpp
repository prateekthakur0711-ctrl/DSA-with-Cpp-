#include <iostream>
#include <list>
#include <vector>
#include <tuple>
#include <algorithm>
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

    vector<int> parent, sz;

    //DSU - Disjoint Set Union
    int find(int x){
        if (parent[x] == x) return x;
        return parent[x] = find(parent[x]);
    }

    void unionSet(int a, int b){
        a = find(a);
        b = find(b);

        if (a != b) {
            if (sz[a] < sz[b]) swap(a, b);
            parent[b] = a;
            sz[a] += sz[b];
        }
    }

    void kruskal(){
        sort(edges.begin(), edges.end());

        parent.resize(n);
        sz.resize(n, 1);

        for (int i = 0; i < n; i++) parent[i] = i;

        int totalCost = 0;
        
        for (auto edge : edges) {
            int w, u, v;
            tie(w, u, v) = edge;
            if (find(u) != find(v)) {
                unionSet(u, v);
                totalCost += w;
                cout << u << "-" << v << " : " << w << endl;
            }
        }
        cout << "Total Cost: " << totalCost << endl;
    }
};

int main() {
    Graph g(4);
    g.addEdge(0, 1, 10);
    g.addEdge(0, 2, 6);
    g.addEdge(0, 3, 5);
    g.addEdge(1, 3, 15);
    g.addEdge(2, 3, 4);

    g.kruskal();

    return 0;
}

