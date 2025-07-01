#include<iostream>

using namespace std;

class ListNode {

public:

	int val;
	ListNode* next;

	ListNode(int val) {
		this->val = val;
		this->next = NULL;
	}

};

// time : O(1)
// space: O(1)

void insertAtHead(ListNode*& headRef, int val) { // here we are passing head ptr by reference since we want changes done to head ptr inside the fn to be reflected in the caller fn i.e. main()

	ListNode* n = new ListNode(val);
	n->next = headRef;
	headRef = n;

}

// time : O(n)
// space: O(1)

void printLinkedList(ListNode* head) { // here we are passing head ptr by value since we don't want changes done to the head ptr to be reflected in the caller fn i.e. main()

	while (head != NULL) {
		cout << head->val << " ";
		head = head->next;
	}

	cout << endl;

}

int main() {

	ListNode* head = NULL;

	insertAtHead(head, 50);
	insertAtHead(head, 40);
	insertAtHead(head, 30);
	insertAtHead(head, 20);
	insertAtHead(head, 10);

	if (head == NULL) {
		cout << "yes" << endl;
	}

	printLinkedList(head);

	printLinkedList(head);

	return 0;
}