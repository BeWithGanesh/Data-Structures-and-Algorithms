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


// fn to remove duplicates in a unsorted llist
void removeDuplicates(Node *node){
	
	Node *ptr1 = node;
	
	while(ptr1 != NULL && ptr1->next != NULL){
		
		Node *ptr2 = ptr1;
		
		while(ptr2->next != NULL){
			
			if(ptr1->data == ptr2->next->data){
				
				ptr2->next = ptr2->next->next;
				
			}
			
			ptr2=ptr2->next;
			
			
		}
		
		ptr1=ptr1->next;
		
	}
	
}




int main(){
	
	Node *head = NULL;
	
	Insert(&head,1);
	Insert(&head,10);
	Insert(&head,17);
	Insert(&head,12);
	Insert(&head,10);
	
	Display(head);
	
	cout<<endl;
	
	// ur function
	removeDuplicates(head);
	
	Display(head);
	
	
	return 0;
}



// output:
// 
// 10->12->17->10->1->NULL
// 10->12->17->1->NULL
