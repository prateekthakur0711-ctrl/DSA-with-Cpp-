#include <iostream>
using namespace std;

class node {
public:
    int data;
    node* next;
    node(int d) {
        data = d;
        next = NULL;
    }
};

void insertAtTail(node* &h, node* &t, int d){
    if (h == NULL){
        node* n = new node(d);
        h = t = n;
    }
    else {
        node* n = new node(d);
        t->next = n;
        t = n;
    }
}

int lengthLL(node* h) {
    int cnt = 0;
    while (h != NULL) {
        cnt++;
        h = h->next;
    }
    return cnt;
}

void kAppend(node* &head, node* &tail, int k){

    int len = lengthLL(head);
    k = k % len;
    if (k == 0) return;

    int s = len - k - 1;
    node* newTail = head;
    for (int i = 0; i < s; ++i) {
        newTail = newTail->next;
    }

    node* newHead = newTail->next;

    tail->next = head;

    newTail->next = NULL;

    head = newHead;
    tail = newTail;
}

void printLL(node* head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    node* head = NULL, *tail = NULL;
    int n, k;
    cin >> n;

    for (int i = 0; i < n; i++){
        int d;
        cin >> d;
        insertAtTail(head, tail, d);
    }

    cin >> k;

    kAppend(head, tail, k);  
    printLL(head);

    return 0;
}
