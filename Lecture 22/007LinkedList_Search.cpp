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

// time : O(n)
// space: O(1)

bool searchIterative(ListNode* head, int target) {

	while (head != NULL) {
		if (head->val == target) {
			// you've found the target
			return true;
		}
		head = head->next;
	}

	// target is not found
	return false;

}

// t(n) = t(n-1) + c
// t(0) = c
// time : O(n)
// space: O(n) due to fn call stack

bool searchRecursive(ListNode* head, int target) {

	// base case

	if (head == NULL) {
		// linkedList is empty
		return false;
	}

	// recursive case

	// f(head, target) = check if target is present in the given linkedList

	if (head->val == target) {
		// you've found the target
		return true;
	} else {
		// ask your friend to check if target is present in the sublist that
		// starts from the node which comes after the head node
		return searchRecursive(head->next, target);
	}

}

int main() {

	ListNode* head = NULL; // initially, linkedList is empty

	insertAtHead(head, 50);
	insertAtHead(head, 40);
	insertAtHead(head, 30);
	insertAtHead(head, 20);
	insertAtHead(head, 10);

	printLinkedList(head);

	int target = 300;

	searchIterative(head, target) ? cout << "true" << endl : cout << "false" << endl;

	searchRecursive(head, target) ? cout << "true" << endl : cout << "false" << endl;

	return 0;
}