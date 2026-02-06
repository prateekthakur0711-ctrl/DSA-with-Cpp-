#include <iostream>
#include <queue>
using namespace std;

class Stack {
	queue<int> q1, q2;
	int cs;
public:
	Stack(){
		cs = 0;
	}

	void push(int d){
		q2.push(d);
		cs++;
		
	while (!q1.empty()){
			q2.push(q1.front());
			q1.pop();
		}		

		swap(q1, q2); // q1 is main queue which holds the stack				
	
	}

	void pop() {
		if (q1.empty()) {
			cout << "Stack is empty!\n";
			return;
		}
		q1.pop();
		cs--;
	}

	int top() {
		if (q1.empty()) {
			cout << "Stack is empty!\n";
			return -1;
		}
		return q1.front();
	}

	bool empty() {
		return cs == 0;
	}

	int size() {
		return cs;
	}

};

int main (){

	Stack s;

	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	s.push(5);
	s.push(6);

	while (!s.empty()){
		cout << s.top() << " ";
		s.pop();
	}

	return 0;
}