#include<iostream>

using namespace std;

class ListNode {

public :

	int val;
	ListNode* next;

	ListNode(int val) {
		this->val = val;
		this->next = NULL;
	}

};


void insertAtHead(ListNode*& head, int val) {

	ListNode* n = new ListNode(val);
	n->next = head;
	head = n;

}

void printLinkedList(ListNode* head) {

	while (head != NULL) {
		cout << head->val << " ";
		head = head->next;
	}

	cout << endl;
}

void deleteAtHead(ListNode*& head) {

	if (!head) { // head == NULL
		// linkedList is empty
		return;
	}

	ListNode* temp = head;
	head = head->next;
	delete temp;
}


ListNode* getNode(ListNode* head, int j) {

	// find the node at index j and return its address

	int k = 1;

	while (head != NULL and k <= j) { // move head j steps fwd to reach the node at index j

		head = head->next;
		k++;

	}

	return head;

}

// time : O(n)
// space: O(1)

void deleteAtIndex(ListNode*& head, int i) {

	if (i == 0) {
		deleteAtHead(head);
		return;
	}

	ListNode* prev = getNode(head, i - 1);
	if (prev == NULL) {
		// i exceed the length of the linkedList
		return;
	}
	ListNode* cur = prev->next;
	if (cur == NULL) {
		// i is equal length of the linkedList
		return;
	}
	prev->next = cur->next;
	delete cur;

}

int main() {

	ListNode* head = NULL; // initially, linkedList is empty

	insertAtHead(head, 50);
	insertAtHead(head, 40);
	insertAtHead(head, 30);
	insertAtHead(head, 20);
	insertAtHead(head, 10);

	printLinkedList(head);

	deleteAtIndex(head, 0);

	printLinkedList(head);

	return 0;
}