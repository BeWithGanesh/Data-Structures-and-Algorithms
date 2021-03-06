#include<bits/stdc++.h>
using namespace std;

class Node {
public:
	int data;
	Node *prev, *next;
};

Node *head = NULL;
Node *tail = NULL;

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

void InsertAtEnd(int new_data){		// Insert nodes at end 
	Node *temp = new Node;
	temp->prev = NULL;
	temp->data = new_data;
	temp->next = NULL;
	
	if(head == NULL)
		head= tail = temp;
	else{
		tail->next = temp;
		temp->prev = tail;
		tail=temp;
	}
}

void InsertAtPos(int pos, int new_data){		// Inserts at particular position
	
	if(pos==1)
		InsertAtFront(new_data);
	else{
	
	Node *temp = new Node;
	temp->prev = NULL;
	temp->data = new_data;
	temp->next = NULL;
		
	Node *ptr=head;
	for(int i=0;i<pos-2;i++)
		ptr=ptr->next;
	temp->prev = ptr;
	temp->next = ptr->next;
	ptr->next = temp;
	temp->next->prev=temp;
	
}
}


void InsertBefore(Node *head,int x,int new_data){ 		// Inserts a node before the given node
	Node *temp = new Node;
	temp->prev = NULL;
	temp->data = new_data;
	temp->next = NULL;
	Node *ptr = new Node;
	ptr=head;
	while(ptr->data != x){
		ptr=ptr->next;
	}
	temp->prev=ptr->prev;
	ptr->prev=temp;
	temp->prev->next=temp;
	temp->next=ptr;
	
}

void InsertAfter(Node *head,int x,int new_data){ 		// Inserts a node after the given node
	Node *temp = new Node;
	temp->prev = NULL;
	temp->data = new_data;
	temp->next = NULL;
	Node *ptr = new Node;
	ptr=head;
	while(ptr->data != x){
		ptr=ptr->next;
	}
	temp->next=ptr->next;
	temp->prev=ptr;
	temp->next->prev=temp;
	ptr->next=temp;
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

	InsertAtFront(30);
	InsertAtFront(20);
	InsertAtFront(10);
	display();
	InsertAtEnd(40);
	InsertAtEnd(50);
	display();
	InsertAtPos(3,22);
	InsertAtPos(1,2);
	display();
	InsertBefore(head,30,29);
	display();
	InsertAfter(head,30,31);
	display();
	
	return 0;
}


/*
Output:
10 20 30
10 20 30 40 50
2 10 20 22 30 40 50
2 10 20 22 29 30 40 50
2 10 20 22 29 30 31 40 50
*/
