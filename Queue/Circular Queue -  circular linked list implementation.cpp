#include<bits/stdc++.h>
using namespace std;

class Node{
	public:
	int data;
	Node *next;
};

class Queue{
	
	public:
	Node *front,*rear;
};

void enqueue(Queue *q, int data){  			// function to add element into Queue
	
	Node *temp= new Node;
	temp->data = data;
	
	if(q->front == NULL)
		q->front = temp;
	else
		q->rear->next=temp;
	
	q->rear=temp;
	q->rear->next=q->front;
	
}

void dequeue(Queue *q){   				// function to delete element from Queue
	
	if(q->front == NULL){
		return;
	}
	
	if (q->front == q->rear) {
	 
        free(q->front); 
        q->front = NULL; 
        q->rear = NULL; 
    } 
    else{
	 
        struct Node *temp = q->front; 
        q->front = q->front->next; 
        q->rear->next= q->front; 
        free(temp); 
    }
}


void display(Queue *q){   			// function to display the elements in Queue
	
	Node *temp = q->front;
	while (temp->next != q->front) 
    { 
        cout<<temp->data<<endl; 
        temp = temp->next; 
    } 
    cout<<temp->data<<endl;
    cout<<endl;
}


//Driver code
int main(){
	
	Queue *q = new Queue;
	q->front = q->rear = NULL;
	
	
	enqueue(q, 10); 
    enqueue(q, 20); 
    enqueue(q, 30);

    dequeue(q);
    display(q);
    
    enqueue(q, 40);
    enqueue(q, 50);
    dequeue(q);
    display(q);
    
    return 0;
}


/*
Output:

20
30

30
40
50

*/
