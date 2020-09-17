// C++ Program to make the middle of the  linkedList as head
// Input: 1->2->3->4->5
// Output: 3->1->2->4->5

#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node *next;

};

Node *head = NULL; // global

void display() {
	if (head == NULL) {
		cout << "Empty" << endl;
	} else {
		Node *ptr = new Node;
		ptr = head;
		while (ptr != NULL) {
			cout << ptr->data << " ";
			ptr = ptr->next;
		}
		cout << endl;
	}
}

void insertAtEnd(int data) {
	Node *temp = new Node;
	temp->data = data;
	temp->next = NULL;
	if (head == NULL) {
		head = temp;
	}
	else {
		Node *ptr = new Node;
		ptr = head;
		while (ptr->next != NULL) {
			ptr = ptr->next;
		}
		ptr->next = temp;
	}
}

void midtohead(){

	if(head == NULL)
		return;

	Node *prev = NULL;
	Node *slow = head;
	Node *fast = head;
	

	while(fast != NULL && fast->next != NULL){
		prev = slow;
		fast = fast->next->next;
		slow = slow->next;

	}

	prev->next = prev->next->next;
	slow->next = head;
	head = slow;

}



int main(){

    insertAtEnd(1);
    insertAtEnd(2);
    insertAtEnd(3);
    insertAtEnd(4);
    insertAtEnd(5);

    display();

    midtohead();

    display();
	return 0;

}