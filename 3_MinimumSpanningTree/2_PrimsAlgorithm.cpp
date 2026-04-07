#include<iostream>
#include<list>
#include<vector>
#include<queue>
#include<tuple>
using namespace std;

class Graph {

public:
    list<pair<int, int>> *adj;
    int n;

    Graph(int N) {
        n = N;
        adj = new list<pair<int, int>> [n];
    }

    void addEdge(int u, int v, int w, bool bidir = true) {
        adj[u].push_back({v, w});
        if (bidir) {
            adj[v].push_back({u, w});
        }
    }

    void primsMST() {
        // {weight, node, parent}
        priority_queue<tuple<int, int, int>, vector<tuple<int, int, int>>, greater<tuple<int, int, int>>> pq;

        vector<bool> visited(n, false);
        int mstWeight = 0;

        vector<tuple<int, int, int>> mstEdges;

        pq.push({0, 0, -1});
        while (!pq.empty()) {
            auto bestEdge = pq.top();
            pq.pop();

            int weight = get<0>(bestEdge);
            int node = get<1>(bestEdge);
            int parent = get<2>(bestEdge);

            if (visited[node]) {
                continue;
            }

            visited[node] = true;
            mstWeight += weight;

            if (parent != -1) {
                mstEdges.push_back({parent, node, weight});
            }

            for (auto neighbour : adj[node]) {
                int nbr = neighbour.first;
                int wt = neighbour.second;

                if (!visited[nbr]) {
                    pq.push({wt, nbr, node});
                }
            }

        }
        cout << "Edges in the MST:" << endl;
        for (auto edge : mstEdges) {
            int u = get<0>(edge);
            int v = get<1>(edge);
            int w = get<2>(edge);
            cout << u << " -- " << v << " (weight: " << w << ")" << endl;
        }

        cout << "Total weight of the MST: " << mstWeight << endl;

    }
};

int main() {
    Graph g(5);
    g.addEdge(0, 1, 2);
    g.addEdge(0, 3, 6);
    g.addEdge(1, 2, 3);
    g.addEdge(1, 3, 8);
    g.addEdge(1, 4, 5);
    g.addEdge(2, 4, 7);
    g.addEdge(3, 4, 9);

    g.primsMST();
    return 0;
}