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

void findNthNode(Node *node, int index){
	
	int count = 0;
	while(count != index){
		count++;
		node = node->next;
	}
	
	cout<<node->data;
}


int main(){
	
	Node *head = NULL;
	
	Insert(&head,50);
	Insert(&head,24);
	Insert(&head,34);
	Insert(&head,12);
	Insert(&head,10);
	
	Display(head);
	
	cout<<endl;
	findNthNode(head,2);
	
	
	return 0;
}


