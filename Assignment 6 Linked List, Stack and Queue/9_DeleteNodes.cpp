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

void insertAtTail(node* &h, node* &t, int d) {
    node* n = new node(d);
    if (!h) h = t = n;
    else {
        t->next = n;
        t = n;
    }
}

node* reverse(node* head) {
    node* prev = NULL;
    node* curr = head;
    while (curr) {
        node* nxt = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nxt;
    }
    return prev;
}

node* deleteNodes(node* head) {
    head = reverse(head);

    int maxSoFar = head->data;
    node* curr = head;
    node* prev = head;

    curr = curr->next;

    while (curr) {
        if (curr->data < maxSoFar) {
            prev->next = curr->next;
            delete curr;
            curr = prev->next;
        } else {
            maxSoFar = curr->data;
            prev = curr;
            curr = curr->next;
        }
    }

    return reverse(head);
}

void printLL(node* head) {
    while (head) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;

    node* head = NULL;
    node* tail = NULL;

    for (int i = 0; i < n; i++) {
        int d;
        cin >> d;
        insertAtTail(head, tail, d);
    }

    head = deleteNodes(head);
    printLL(head);

    return 0;
}
