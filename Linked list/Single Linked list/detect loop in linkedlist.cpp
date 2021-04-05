// Coded by Ganesh Prasad

#include<bits/stdc++.h>
using namespace std;

class Node{
	
	public:
		int data;
		Node* next;
	
};

void Insert(Node **head_ref, int new_data){
	
	Node *new_node = new Node();
	new_node->data = new_data;
	new_node->next = (*head_ref);
	
	(*head_ref) = new_node;
	
}


void Display(Node *node){
	
	while(node != NULL){
		cout<<node->data<<"->";
		node = node->next;
	}
	cout<<"NULL";
	

}

int detectLoop(Node *node){
	
	
	Node *slow = node;
	Node *fast = node;
	
	while(slow != NULL && fast != NULL && fast->next != NULL){
		slow = slow->next;
		fast = fast->next->next;
		
		if(slow == fast){
			return 1;
		}
	}
	
	
	return 0;
	
}



int main(){
	
	Node *head = NULL;
	
	Insert(&head,50);
	Insert(&head,24);
	Insert(&head,34);
	Insert(&head,12);
	Insert(&head,10);
	
	// making loop
	head->next->next->next->next->next = head;
	
	// Display(head);
	
	
	(detectLoop(head) == 1) ? cout<<"loop" : cout<<"no loop" ;

	
	
	return 0;
}



// output:

// loop