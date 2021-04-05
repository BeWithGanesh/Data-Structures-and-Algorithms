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

void findOccurance(Node *node,int key){
	
	int count=0;
	Node *curr = node;
	while(curr != NULL){
		if(curr->data == key){
			count++;
		}
		curr=curr->next;
		
	}
	
	cout<<count;
}


int main(){
	
	Node *head = NULL;
	
	Insert(&head,1);
	Insert(&head,2);
	Insert(&head,3);
	Insert(&head,1);
	Insert(&head,1);
	
	Display(head);
	
	cout<<endl;
	
	findOccurance(head,1);
	
	
	return 0;
}



// output:

// 1->1->3->2->1->NULL
// 3