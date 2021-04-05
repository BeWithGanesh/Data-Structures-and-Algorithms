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

void findMiddle(Node *node){
	
	if(node == NULL)
		return;
	
	Node *slow = node;
	Node *fast = node;
	
	while(fast != NULL && fast->next != NULL ){
		slow = slow->next;
		fast = fast->next->next;
	}
	
	cout<<slow->data;
	
	
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
	
	findMiddle(head);
	
	
	
	return 0;
}



// output:

// 10->12->34->24->50->NULL
// 34
