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

void merge(Node *a, Node *b, Node **c){
	
	while(a != NULL && b != NULL){
		if(a->data == b->data){
			
			Insert(c,a->data);
			
			a = a->next;
			b = b->next;
		}
		else if(a->data < b->data){
			a = a->next;
		}
		else{
			b = b->next;
		}
	}
	
}



// driver code
int main(){
	
	Node *a = NULL;
	Node *b = NULL;
	Node* intersect = NULL;
	
	Insert(&a,50);
	Insert(&a,24);
	Insert(&a,34);
	Insert(&a,12);
	Insert(&a,10);
	
	Insert(&b,34);
	Insert(&b,12);
	Insert(&b,11);
	
	
	// ur code
	merge(a,b,&intersect);
	
	
	Display(intersect);
	
	return 0;
}



// output:

// 12->34->NULL
