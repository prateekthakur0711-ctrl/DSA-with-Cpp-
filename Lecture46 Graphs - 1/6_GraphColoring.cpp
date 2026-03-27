#include<iostream>
#include<vector>
#include<queue>
#include<list>
using namespace std;

class graph{
public:
    list<int> *adj;
    int n;

    graph(int N) {
        n = N;
        adj = new list<int> [n];
    }

    void addEdge(int u, int v) {
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    void colorGraphUsingBFS(int start){
        vector<char> color(n, '\0');
        queue<int> q;

        q.push(start);
        color[start] = 'A';

        while(!q.empty()){
            int f = q.front();
            q.pop();

            for(auto neighbour : adj[f]){

                if (color[neighbour] == '\0') {

                    bool usedColor[26] = {0};

                    // check neighbour colors
                    for (auto x : adj[neighbour]) {
                        if (color[x] != '\0') {
                            usedColor[color[x] - 'A'] = true;
                        }
                    }

                    // assign color
                    for(int i = 0; i < 26; ++i){
                        if(!usedColor[i]){
                            color[neighbour] = 'A' + i;
                            break;
                        }
                    }

                    q.push(neighbour); // push only if newly colored
                }
            }
        }
        cout << "Vertex : Color" << endl;
        for(int i = 0; i < n; ++i){
            cout << i << " : " << color[i] << endl;
        }
    }
    
    void checkBipartiteUsingBFS(int start){
        vector<char> color(n, '\0');
        queue<int> q;

        q.push(start);
        color[start] = 'A';

        while(!q.empty()){
            int f = q.front();
            q.pop();

            for(auto neighbour : adj[f]){

                if (color[neighbour] == '\0') {
                    color[neighbour] = (color[f] == 'A') ? 'B' : 'A';
                    q.push(neighbour); // push only if newly colored
                }
                else if (color[neighbour] == color[f]) {
                    cout << "Graph is not Bipartite" << endl;
                    return;
                }
            }
        }
        cout << "Graph is Bipartite" << endl;
    }
};

int main() {

    graph g(7); 

    g.addEdge(1, 2);
    g.addEdge(1, 3); 
    g.addEdge(2, 4); 
    g.addEdge(2, 5);    
    g.addEdge(3, 5);    
    g.addEdge(3, 6);    
    g.addEdge(4, 5);    
    g.addEdge(5, 6);    

    g.colorGraphUsingBFS(1);

    g.checkBipartiteUsingBFS(1);

    return 0;
}