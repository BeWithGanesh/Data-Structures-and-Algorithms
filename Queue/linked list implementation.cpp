#include<bits/stdc++.h>
using namespace std;

class qnode{
	public:
	int data;
	qnode *next;
	
	qnode(int x){
		data=x;
		next=NULL;
	}
};

class Queue{
	public:
	qnode *front,*rear;
	
	Queue(){
		front=rear=NULL;
	}
	
	void enqueue(int x){ 		// function enqueue - to add data to queue
		
		qnode *temp = new qnode(x); 		// creates a Node
		
		if(rear==NULL){ 		// if list is empty
			front=rear=temp;
			return;
		}
		
		rear->next=temp;
		rear=temp;
		
	}
	
	void dequeue(){ 		// function dequeue - to remove data from queue
		
		if(front==NULL)
			return;
			
		qnode *temp= front;
		front=front->next;
		
		
		if(front == NULL)
			rear = NULL;
		delete(temp);
		
	}
	
	void display() { 		// function to display the queue elements
		if (front == NULL) {
			
			cout << "Empty" << endl;
		} 
		else {
			
			qnode *ptr = front;
			//ptr = front;
			while (ptr != NULL) {
				
				cout << ptr->data <<endl;
				ptr = ptr->next;
			}
		}
	}
	
};


int main(){
	Queue q;
	q.enqueue(10);
	q.enqueue(20);
	q.enqueue(30);
	q.dequeue();
	q.enqueue(40);
	q.dequeue();
	q.enqueue(50);
	q.display();
	
	return 0;
}


/*
Output:

30
40
50

*/
