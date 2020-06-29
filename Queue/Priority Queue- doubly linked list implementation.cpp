#include<bits/stdc++.h>
using namespace std;

class Node{
	public:
	int data;
	int priority;
	Node *prev,*next;
};

void push(Node** front, Node** rear, int d, int p){   			// function to insert an element with priority
	
	Node *temp = new Node;
	temp->data=d;
	temp->priority=p;
	
	if(*front == NULL){
		
		*front=*rear=temp;
		temp->next=NULL;
	}
	
	else{
		
		if(p <= (*front)->priority){
			temp->next=*front;
			(*front)->prev=temp->next;
			*front=temp;
		}
		
		else if(p > (*rear)->priority){
			temp->next=NULL;
			(*rear)->next=temp;
			temp->prev=(*rear)->next;
			*rear=temp;
		}
		
		else{
			
			Node *ptr = (*front)->next;
			while(ptr->priority > p)
				ptr=ptr->next;
			(ptr->prev)->next=temp;
			temp->next = ptr->prev; 
            temp->prev = (ptr->prev)->next; 
            ptr->prev = temp->next;
		}
	}
}


int pop(Node** front, Node** rear){ 				// function to remove the element with high priority
 
    Node* temp = (*front); 
    int res = temp->data; 
    (*front) = (*front)->next; 
    free(temp); 
    if (*front == NULL)  
       *rear = NULL; 
    return res; 
} 


int peek(Node *front){  	 			// returns the value at head (front of queue)
	
	return front->data;
}


bool isEmpty(Node *front) { 		// function to check the queue is empty or not
 
    return (front == NULL); 
} 


int main() 
{ 
    Node *front = NULL, *rear = NULL; 
    push(&front, &rear, 20, 2); 
    push(&front, &rear, 30, 3); 
    push(&front, &rear, 40, 5); 
    push(&front, &rear, 50, 6); 
    push(&front, &rear, 10, 1); 
  
    pop(&front, &rear);
    pop(&front, &rear);
    
	Node *ptr=front; 
	
    while(ptr != NULL){ 		// prints the remaining elements in queue..
		
		cout << peek(ptr)<<endl; 
    	ptr=ptr->next;
    
  }
    return 0; 
} 


/*
Output:

30
40
50
*/

