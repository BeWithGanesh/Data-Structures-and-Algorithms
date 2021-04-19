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

void swapNode(Node **node, int x, int y){
	
	//base
	if(x == y)
		return;
	
	//search elements
	Node *currX = *node;
	Node *prevX = NULL;
	Node *currY = *node, *prevY = NULL;
	
	while(currX && currX->data != x){
		prevX = currX;
		currX = currX->next;
	}
	
	while(currY && currY->data != y){
		prevY = currY;
		currY = currY->next;
	}
	
	
	if(currX == NULL || currY == NULL){
		return;
	}
	
	
	if(prevX != NULL){
		prevX->next = currY;
	}
	else
		*node = currY;
		
	if( prevY != NULL)
		prevY->next = currX;
	else
		*node = currX;
		
	// swap
	
	Node *temp = currY->next;
	currY->next = currX->next;
	currX->next = temp;
	
	
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
	
	// ur code
	swapNode(&head,12,24);
	
	Display(head);
	
	
	
	return 0;
}



// output:
// 
// 10->12->34->24->50->NULL
// 10->24->34->12->50->NULL
