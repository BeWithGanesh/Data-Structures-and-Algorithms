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

void findNthNodefromlast(Node *node, int n){
	
	int len = 0;
	
	Node *temp = node;
	
	while(temp != NULL){
		
		temp = temp->next;
		len++;
	}
	
	if(len<n) return;
	
	temp = node;
	for(int i=1;i<len-n+1 ; i++){
		temp=temp->next;
	}
	
	cout<<temp->data;
	
	return;
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
	findNthNodefromlast(head,2);
	
	
	return 0;
}



// output:
// 
// 10->12->34->24->50->NULL
// 24
