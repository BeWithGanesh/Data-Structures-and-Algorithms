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

bool searchIteratively(Node *head, int x){
	
	Node* curr = head;
	
	while(curr != NULL){
		
		if(curr->data == x){
			return true;
		}
		curr=curr->next;
	}
	
	return false;
	
}

bool searchRecursively(Node *head, int x){
	
	if(head == NULL) return false;
	
	if(head->data == x) return true;
	
	else
		return searchRecursively(head->next,x);
}


int main(){
	
	Node *head = NULL;
	
	Insert(&head,5);
	Insert(&head,4);
	Insert(&head,3);
	Insert(&head,2);
	Insert(&head,1);
	
	Display(head);
	
	searchIteratively(head,3)? cout<<"\n yes":cout<<"\n no";
	searchRecursively(head,11)? cout<<"\n yes":cout<<"\n no";
	
	
	return 0;
}


// output:
// 
// 1->2->3->4->5->NULL
 // yes
 // no