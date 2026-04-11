#include <iostream>
#include <vector>
using namespace std;

// for maxheap only comparisions in heapify up and down will change from < to >
class Minheap {
	vector<int> v;

	void heapifyUp(int i) {
		while (i > 1){
			int p = i / 2;
			if (v[p] > v[i]) {
				swap(v[p], v[i]);
				i = p;
			}
			else {
				break;
			}
		}
	}

	void heapifyDown(int i) {
		int left = 2 * i;
		int right = 2 * i + 1;
		int smallest = i;

		if (left < v.size() and v[left] < v[smallest]) {
			smallest = left;
		}
		if (right < v.size() and v[right] < v[smallest]) {
			smallest = right;
		}

		if (smallest != i) {
			swap(v[i], v[smallest]);
			heapifyDown(smallest);
		}
	}

public:
	Minheap() {
		v.push_back(-1); // 0th index par -1 daal kar usse block krdo
		// I would consider my heap as empty if it contains 1 element in the vector.
	}

	void push(int d) {
		v.push_back(d);
		heapifyUp(v.size() - 1);
	}

	void pop() {
		swap(v[1], v[v.size() - 1]);
		v.pop_back();

		heapifyDown(1);
	}

	int top() {
		return v[1];
	}

	bool empty() {
		return v.size() == 1;
	}
};

int main() {

	Minheap h;

	h.push(3);
	h.push(2);
	h.push(1);
	h.push(4);

	// HEAP SORT
	while (!h.empty()) {
		cout << h.top() << " ";
		h.pop();
	}
	cout << endl;


	return 0;
}