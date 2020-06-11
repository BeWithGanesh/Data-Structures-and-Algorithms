#include<bits/stdc++.h>
using namespace std;

class Node {
public:
	int data;
	Node *prev, *next;
};

Node *head = NULL;
Node *tail = NULL;

Node* reverseList(Node *head){ 		// function to reverse the elements in linked list
	
	if(head==NULL || head->next==NULL){
    return head;
    }
    
	Node *temp = NULL;   
    Node *current = head; 
       
  
     while (current !=  NULL) 
     { 
       temp = current->prev; 
       current->prev = current->next; 
       current->next = temp;               
       current = current->prev; 
     }       
       
  
     if(temp != NULL ) 
        head = temp->prev;
    return head;
}

void reversedisplay() {	// function to print list in a reverse order
	Node *ptr = tail;
	while (ptr != NULL) {
		cout << ptr->data << " ";
		ptr = ptr->prev;
	}
	cout << endl;
}


void InsertAtFront(int new_data){		// Insert nodes at front 
	Node *temp = new Node;
	temp->prev = NULL;
	temp->data = new_data;
	temp->next = NULL;
	
	if(head == NULL)
		head= tail = temp;
	else{
		temp->next = head;
		head->prev = temp;
		head = temp;
		}	
}

void display(Node *head){		// to print the linked list
	Node *ptr = head;
	while(ptr != NULL){
		cout<<ptr->data<<" ";
		ptr=ptr->next;
	}
	cout<<endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	InsertAtFront(30);
	InsertAtFront(20);
	InsertAtFront(10);
	reversedisplay();
	display(head);
	head=reverseList(head);
	display(head);
	
	return 0;
}

/*
Output:
30 20 10
10 20 30
30 20 10
*/

	
