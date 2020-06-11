#include<bits/stdc++.h>
using namespace std;

class Node {
public:
	int data;
	Node *prev, *next;
};

Node *head = NULL;	
Node *tail = NULL;

void DeleteAtFront(){		// delete node at front
	
	Node *ptr = head;
	if (ptr->next == NULL) {
		head = tail = NULL;
		free(ptr);
	}
	else {
		head = ptr->next;
		head->prev = NULL;
		free(ptr);
	}
	
}

void DeleteAtEnd(){ 		//delete node at end
	
	Node *ptr = tail;
	if (ptr->prev == NULL) {
		head = tail = NULL;
		free(ptr);
	}
	else {
		tail = ptr->prev;
		tail->next = NULL;
		free(ptr);
	}
}

void DeleteElement(int x) {	//Deleting particular element from the list
	
	Node *ptr = new Node;
	ptr = head;
	if (ptr->data == x) {
		head = ptr->next;
		free(ptr);
		return;
	}
	while (ptr->data != x) {
		ptr = ptr->next;
	}
	if (ptr->next != NULL)
		ptr->next->prev = ptr->prev;

	if (ptr->prev != NULL)
		ptr->prev->next = ptr->next;

	free(ptr);
}


void deleteNode(Node *head, int pos){ 		// delete element at particular position
	
	int c=1;
	Node *temp = new Node;
	temp=head;
	if(pos==1)
		head = temp->next;
	else
	{
		while(c!=pos)
		{
			temp=temp->next;
			c++;
		}
	temp->prev->next=temp->next;
}
}

/* Utility functions */

void InsertAtFront(int new_data){		// Insert nodes at front 
	Node *temp = new Node;
	temp->prev = NULL;
	temp->data = new_data;
	temp->next = NULL;
	
	if(head == NULL)
		head= tail = temp;
	else{
		temp->next = head;
		head->prev = temp;
		head = temp;
		}	
}

void display(){		// to print the linked list
	Node *ptr = head;
	while(ptr != NULL){
		cout<<ptr->data<<" ";
		ptr=ptr->next;
	}
	cout<<endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	InsertAtFront(60);
	InsertAtFront(50);
	InsertAtFront(40);
	InsertAtFront(30);
	InsertAtFront(20);
	InsertAtFront(10);
	display();
	DeleteAtFront();
	display();
	DeleteAtEnd();
	display();
	DeleteElement(30);
	display();
	deleteNode(head,2);
	display();
	
	return 0;
}

/*
Output:
10 20 30 40 50 60
20 30 40 50 60
20 30 40 50
20 40 50
20 50
*/

