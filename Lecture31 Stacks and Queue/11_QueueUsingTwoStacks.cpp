#include <iostream>
#include <stack>
using namespace std;

class Queue {
	stack<int> s1, s2;
	int cs;
public:
	Queue(){
		cs = 0;
	}

	void push(int d) {
		s1.push(d);
		cs++;
	}

	void transfer()
	{
		if (s2.empty()) 
		{
			while (!s1.empty()) 
			{
				s2.push(s1.top());
				s1.pop();
			}
		}
	}


	void pop() 
	{
		transfer();
		if (s2.empty()) 
		{
			cout << "Queue is empty!\n";
			return;
		}
		s2.pop();
		cs--;
	}


	int front() 
	{
		transfer();
		if (s2.empty()) 
		{
			cout << "Queue is empty!\n";
			return -1;
		}
		return s2.top();
	}


	bool empty() 
	{
		return cs == 0;
	}


	int size() {
		return cs;
	}

};

int main() {
	Queue q;

	q.push(1 + 64);
	q.push(2 + 64);
	q.push(3 + 64);
	q.push(4 + 64);
	q.push(5 + 64);
	q.push(6 + 64);

	while (!q.empty()) {
		cout << q.front() << " ";
		q.pop();
	}
	cout << endl;

	return 0;
}