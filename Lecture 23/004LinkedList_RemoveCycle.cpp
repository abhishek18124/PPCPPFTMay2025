#include<iostream>
#include<set>

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

void insertAtHead(ListNode*& head, int val) {

	ListNode* n = new ListNode(val);
	n->next = head;
	head = n;

}


void printLinkedList(ListNode* head) {

	while (head) { // head != NULL
		cout << head->val << " ";
		head = head->next;
	}

	cout << endl;
}

// time : O(nlogn)
// space: O(n) due to set<>

void removeCycle(ListNode* head) {

	set<ListNode*> s;
	ListNode* temp;

	while (true) {
		if (s.find(head) == s.end()) {
			temp = head;
			s.insert(head);
			head = head->next;
		} else {
			temp->next = NULL;
			break;
		}
	}

}

// time : O(n)
// space: O(1)

void removeCycleOptimised(ListNode* head) {

	ListNode* slow = head;
	ListNode* fast = head;

	while (true) {
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast) {
			break;
		}
	}

	// at this point of time slow and fast are at the meeting point

	ListNode* prev = head;
	while (prev->next != fast) { // as long as prev doesn't point to the node one-step behind meeting pt.
		prev = prev->next;
	}

	slow = head;

	while (slow != fast) {
		slow = slow->next;

		fast = fast->next;
		prev = prev->next;
	}

	// slow and fast will be at the start of the cycle
	// which means prev will be at the tail of the linkedList

	prev->next = NULL;

}

int main() {

	ListNode* head = new ListNode(10);
	head->next = new ListNode(20);
	head->next->next = new ListNode(30);
	head->next->next->next = new ListNode(40);
	head->next->next->next->next = new ListNode(50);
	head->next->next->next->next->next = new ListNode(60);
	head->next->next->next->next->next->next = head->next;

	// removeCycle(head); // assume cycle is present when you call this fn
	removeCycleOptimised(head);

	printLinkedList(head);

	return 0;
}