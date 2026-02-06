#include <iostream>
#include <queue>
using namespace std;

class Pair {
public:
    int course;
    int roll;

    Pair(int c = 0, int r = 0) {
        course = c;
        roll = r;
    }
};

int main() {
    int n;
    cin >> n;

    queue<Pair> cq[5];  
    queue<int> q;          

    while (n--) {
        char a;
        cin >> a;

        if (a == 'E') {
            int x, y;
            cin >> x >> y;

            if (cq[x].empty()) {
                q.push(x);  
            }

            cq[x].push(Pair(x, y));
        }
        else { 
            int course = q.front();
            Pair frontSt = cq[course].front();

            cout << frontSt.course << " " << frontSt.roll << endl;

            cq[course].pop();

            if (cq[course].empty()) {
                q.pop();
            }
        }
    }

    return 0;
}
