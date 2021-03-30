// Coded by Ganesh Prasad

#include<bits/stdc++.h>
using namespace std;

class Node{
	
	public:
	int data;
	Node* next;
	
};


void InsertFront(Node** head_ref, int new_data){
	
	Node* new_node = new Node();
	new_node->data = new_data;
	new_node->next = (*head_ref);
	(*head_ref) = new_node;
}

void InsertAfter(Node* prev_node, int new_data){
	
	//base
	if(prev_node == NULL){
		return;
	}
	
	Node* new_node = new Node();
	new_node->data = new_data;
	new_node->next = prev_node->next;
	prev_node->next = new_node;
	
}

void InsertEnd(Node **head_ref, int new_data){
	
	Node* new_node = new Node();
	Node* last = *head_ref;
	new_node->data = new_data;
	new_node->next = NULL;
	

	
	if(*head_ref == NULL){
		*head_ref = new_node;
		return;
	}
	
	while(last->next != NULL){
		last = last->next;
	}
	
	last->next = new_node;
	return;
	
}

void print(Node* x){
	while(x!=NULL){
		cout<<x->data<<"->";
		x=x->next;
	}
	cout<<"NULL";
}

int main(){
	
	Node *head = NULL;
	
	
	InsertFront(&head,2);
	InsertFront(&head,1);
	
	InsertEnd(&head,5);
	
	InsertAfter(head->next,4);
	InsertAfter(head->next,3);
	
	print(head);
	
	return 0;
}




// output:
// 
// 1->2->3->4->5->NULL