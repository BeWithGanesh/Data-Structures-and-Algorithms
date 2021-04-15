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

void removeDuplicates(Node *node){
	
	Node *curr = node;
	Node *temp;
	
	while(curr->next != NULL){
		
		if(curr->data == curr->next->data){
			
			temp = curr->next->next;
			
			free(curr->next);
			
			curr->next = temp;
		}
		else{
			curr = curr->next;
		}
		
		
	}
	
}



int main(){
	
	Node *head = NULL;
	
	Insert(&head,50);
	Insert(&head,24);
	Insert(&head,34);
	Insert(&head,10);
	Insert(&head,10);
	
	
	// ur function
	removeDuplicates(head);
	
	Display(head);
	
	
	return 0;
}



// output:

//10->34->24->50->NULL