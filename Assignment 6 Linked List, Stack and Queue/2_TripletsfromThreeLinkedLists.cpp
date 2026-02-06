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

bool find(node* h1, node* h2, node* h3, int target,int &x, int &y, int &z)
{
    for (node* a = h1; a != NULL; a = a->next) {
        for (node* b = h2; b != NULL; b = b->next) {
            for (node* c = h3; c != NULL; c = c->next) {

                if (a->data + b->data + c->data == target) {
                    x = a->data;
                    y = b->data;
                    z = c->data;
                    return true;
                }
            }
        }
    }

    return false; 
}

void printLL(node* head) {
	while (head != NULL) {
		cout << head->data << " ";
		head = head->next;
	}
	cout << endl;
}

int main() {
    node* head1 = NULL, *tail1 = NULL;
    node* head2 = NULL, *tail2 = NULL;
    node* head3 = NULL, *tail3 = NULL;
    int n, m, k;
    cin >> n >> m >> k;

    for (int i = 0; i < n; i++)
    {
    	int d;
    	cin >> d;
    	insertAtTail(head1, tail1, d);
    }

    for (int i = 0; i < m; i++)
    {
    	int d;
    	cin >> d;
    	insertAtTail(head2, tail2, d);
    }

    for (int i = 0; i < k; i++)
    {
    	int d;
    	cin >> d;
    	insertAtTail(head3, tail3, d);
    }

    int target;
    cin >> k;

    int x = 0, y = 0, z = 0;
    if (find(head1, head2, head3, k, x, y, z)) cout << x << " " << y << " " << z;
    else cout << "No Possible Triplet";

    return 0;
}