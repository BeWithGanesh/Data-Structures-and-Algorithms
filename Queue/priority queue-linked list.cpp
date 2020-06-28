#include<bits/stdc++.h>
using namespace std;

typedef struct node{
	public:
		int data;
		int priority; 	// lower values indicates higher priority
		struct node *next;
		
}Node;


Node* newnode(int d,int p){  		// creates a new node
	
	Node* temp = (Node*)malloc(sizeof(Node)); 
    temp->data = d; 
    temp->priority = p; 
    temp->next = NULL; 
  
    return temp;
}

void push(Node** head, int d, int p){  			// function to insert an element with priority
	Node *start = (*head);
	
	Node *temp= newnode(d,p);
	
	if((*head)->priority > p){
		temp->next=*head;
		(*head)=temp;
	}
	
	else{
		
		while(start->next != NULL && start->next->priority < p) {
			start=start->next;
		}
		
		temp->next=start->next;
		start->next=temp;
	}
}

void pop(Node **head){ 			// function to remove the element with high priority
	
	Node* temp = *head; 
    (*head) = (*head)->next; 
    free(temp); 
    
}

int peek(Node** head) {  			// returns the value at head (front of queue)
 
    return (*head)->data; 
} 

int isEmpty(Node** head) {  		// function to check the queue is empty or not
 
    return (*head) == NULL; 
}



int main(){
	
	Node* pq = newnode(200, 2); 
    push(&pq, 300, 3); 
    push(&pq, 400, 4); 
    push(&pq, 100, 1);
    push(&pq, 500, 5);
    
    while (!isEmpty(&pq))  
    { 
        cout << peek(&pq)<<endl; 
        pop(&pq); 
    } 
    return 0; 
	
}


/*
Output:

100
200
300
400
500
*/


