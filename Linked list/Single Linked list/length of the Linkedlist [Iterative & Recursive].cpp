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

void findLengthIterative(Node *node){
	
	int count = 0;
	
	while(node != NULL){
		count++;
		node=node->next;
	}
	
	cout<<"\n"<<count;
	
	
}

int findLengthRecursive(Node *node){
	
	if(node == NULL)
		return 0;
		
	else{
		return 1+findLengthRecursive(node->next);
	}
}

int main(){
	
	Node *head = NULL;
	
	Insert(&head,5);
	Insert(&head,4);
	Insert(&head,3);
	Insert(&head,2);
	Insert(&head,1);
	
	Display(head);

	
	findLengthIterative(head);
	int x = findLengthRecursive(head);
	cout<<"\n"<<x;
	
	return 0;
}




// output:
// 
// 1->2->3->4->5->NULL
// 5
// 5