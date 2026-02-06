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
	if (h == NULL)
	{
		node* n = new node(d);
		h = t = n;
	}
	else 
	{
		node* n = new node(d);
		t -> next = n;
		t = n;
	}
}

node* arrange(node* head) {
    node *oddH = NULL, *oddT = NULL;
    node *evenH = NULL, *evenT = NULL;

    node* cur = head;

    while (cur != NULL) {
    	node* nt = cur -> next;
        if (cur->data % 2 != 0) {     
            if (oddH == NULL) oddH = oddT = cur;
            else oddT = oddT->next = cur;
        }
        else {                        
            if (evenH == NULL) evenH = evenT = cur;
            else evenT = evenT->next = cur;
        }

        cur = NULL;

        cur = nt;         
    }

    oddT->next = evenH;

    evenT -> next = NULL;

    return oddH;
}



void printLL(node* head) {
	while (head != NULL) {
		cout << head->data << " ";
		head = head->next;
	}
}

int main() {
    node* head = NULL, *tail = NULL;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
    	int d;
    	cin >> d;
    	insertAtTail(head, tail, d);
    }

   	node * ans = arrange(head);

    printLL(ans);

    return 0;
}