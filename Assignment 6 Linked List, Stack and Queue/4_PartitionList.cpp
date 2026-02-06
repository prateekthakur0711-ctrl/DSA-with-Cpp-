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

void printLL(node* head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
}

node* partition(node* head, int x){
    node *headbefore = NULL, *tailbefore = NULL;
    node *headafter = NULL, *tailafter = NULL;

    while (head){
        node* nextNode = head->next;  
        head->next = NULL;            
        
        if (head->data < x){
            if (headbefore == NULL) headbefore = tailbefore = head;
            else {
                tailbefore->next = head;
                tailbefore = head;
            }
        }
        else {
            if (headafter == NULL) headafter = tailafter = head;
            else {
                tailafter->next = head;
                tailafter = head;
            }
        }
        head = nextNode;
    }

    if (!headbefore) return headafter;

    tailbefore->next = headafter;

    return headbefore;
}

int main() {
    node* head = NULL, *tail = NULL;
    int n, x;
    cin >> n >> x;

    for (int i = 0; i < n; i++){
        int d;
        cin >> d;
        insertAtTail(head, tail, d);
    }

    head = partition(head, x);

    printLL(head);
    return 0;
}
