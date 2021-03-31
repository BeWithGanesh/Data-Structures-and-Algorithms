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

void Delete(Node **head_ref, int key){
	
	Node *temp = *head_ref;
	Node *prev = NULL;
	
	if(temp != NULL && temp->data == key){
		*head_ref = temp->next;
		delete temp;
		return;
	}
	else{
		while(temp != NULL && temp->data != key){
			prev = temp;
			temp=temp->next;
			
		}
		
		if(temp == NULL){
			return;
		}
		
		prev->next = temp->next;
		delete temp;
	}
	
	
}

void DeleteAtPosition(Node **head_ref, int pos){
	
	Node *ptr = *head_ref;
	
	if(ptr == NULL)
		return;
		
	if(pos == 0){
		*head_ref = ptr->next;
		free(ptr);
		return;
	}
	
	for(int i=0;i<pos-1;i++){
		ptr = ptr->next;
	}
	
	if(ptr == NULL || ptr->next == NULL){
		return; 
	}
	
	
	Node* temp = ptr->next;
	ptr->next = temp->next;
	free(temp);
	
	
	
}

void Display(Node *node){
	
	while(node != NULL){
		cout<<node->data<<"->";
		node = node->next;
	}
	cout<<"NULL";
	

}

int main(){
	
	Node *head = NULL;
	
	Insert(&head,5);
	Insert(&head,4);
	Insert(&head,3);
	Insert(&head,2);
	Insert(&head,1);
	
	Display(head);
	cout<<endl;
	
	Delete(&head,1);
	Delete(&head,4);
	
	Display(head);
	cout<<endl;	
	
	
	DeleteAtPosition(&head,1);
	
	Display(head);
	
	return 0;
}






// output:
// 
// 1->2->3->4->5->NULL
// 2->3->5->NULL
// 2->5->NULL
