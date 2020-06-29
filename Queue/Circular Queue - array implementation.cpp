#include<bits/stdc++.h>
using namespace std;

class Queue{
	public:
		int rear,front;
		int size;
		int *arr;
	
	Queue(int s){
		front=rear=-1;
		size=s;
		arr=new int[s];
	}
	
	void enqueue(int value);
	void dequeue();
	void display();
};

void Queue :: enqueue(int value){ 			// function to add element into Queue
	
	if ((front == 0 && rear == size-1) || (rear == (front-1)%(size-1))) {
	 
        printf("\nQueue is Full"); 
        return; 
    } 
    
    else if(front==-1){
    	
    	front = rear= 0;
    	arr[rear]=value;
	}
	
	else if(rear==size-1 && front != 0){
		
		rear=0;
		arr[rear]=value;
	}
	
	else{
		
		rear++;
		arr[rear]=value;
	}

}

void Queue :: dequeue(){ 			// function to delete element from Queue
	
	if (front == -1) {
	 
        printf("\nQueue is Empty"); 
        return; 
    } 
  
    int data = arr[front]; 
    arr[front] = -1; 
    if (front == rear){
	 
        front = -1; 
        rear = -1; 
    } 
    else if (front == size-1) 
        front = 0; 
    else
        front++; 
  
}


void Queue::display() {  			// function to display the elements in Queue
 
    if (front == -1) {
	 
        printf("\nQueue is Empty"); 
        return; 
    } 
    
    if (rear >= front) {
	 
        for (int i = front; i <= rear; i++) 
            cout<<arr[i]<<endl;
    } 
    else{
	 
        for (int i = front; i < size; i++) 
            cout<<arr[i]<<endl; 
  
        for (int i = 0; i <= rear; i++) 
            cout<<arr[i]<<endl; 
    } 
}


// Driver code
int main(){
	Queue q(5);
	q.enqueue(10);
	q.enqueue(20);
	q.enqueue(30);
	q.enqueue(40);
	q.dequeue();
	
	q.enqueue(50);
	q.dequeue();
	
	q.enqueue(60);
	q.enqueue(70);

	q.display();
	
	return 0;
}

/*
Output:

30
40
50
60
70
*/
