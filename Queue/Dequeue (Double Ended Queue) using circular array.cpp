
/* Deque or Double Ended Queue is a generalized version of Queue data structure that allows insert and delete at both ends*/

#include<bits/stdc++.h>
using namespace std;

#define MAX 10

class Deque{
	
	int  arr[MAX]; 
    int  front; 
    int  rear; 
    int  size; 
public : 
    Deque(int size) 
    { 
        front = -1; 
        rear = 0; 
        this->size = size; 
    } 
  
    // Operations on Deque: 
    bool  isFull(); 
    bool  isEmpty(); 
    int  getFront(); 
    int  getRear(); 
    void  insertfront(int x); 
    void  insertrear(int x); 
    void  deletefront(); 
    void  deleterear(); 
};

bool Deque::isFull() { 			// function to check queue is full or not
 
    return ((front == 0 && rear == size-1) || front == rear+1); 
} 
 
bool Deque::isEmpty () { 			// function to check queue is empty or not
 
    return (front == -1); 
} 
  

int Deque::getFront() { 			// Returns front element of Deque 
 
    // check whether Deque is empty or not 
    if (isEmpty()) 
    { 
        cout << " Underflow\n" << endl; 
        return -1 ; 
    } 
    return arr[front]; 
} 
  

int Deque::getRear() { 				// function return rear element of Deque  

    // check whether Deque is empty or not 
    if(isEmpty() || rear < 0) 
    { 
        cout << " Underflow\n" << endl; 
        return -1 ; 
    } 
    return arr[rear]; 
} 


void Deque::insertfront(int x) {  			// function to insert element to the Queue through front end
 
    
    if (isFull()) 
    { 
        cout << "Overflow\n" << endl; 
        return; 
    } 
  
     
    if (front == -1)  	// If queue is initially empty
    { 
        front = 0; 
        rear = 0; 
    } 
  
    
    else if (front == 0) 
        front = size - 1 ; 
  
    else 
        front = front-1; 
  
    arr[front] = x ; 
} 
  
 
void Deque ::insertrear(int x) {  			// function to insert element to the Queue through rear end 

    if (isFull()) 
    { 
        cout << " Overflow\n " << endl; 
        return; 
    } 
  
    if (front == -1) 
    { 
        front = 0; 
        rear = 0; 
    } 
  
     
    else if (rear == size-1) 
        rear = 0; 
  
    
    else
        rear = rear+1; 
  
   
    arr[rear] = x ; 
} 
  

void Deque ::deletefront() {  			// function to delete the element through front end 

    
    if (isEmpty()) 
    { 
        cout << "Queue Underflow\n" << endl; 
        return ; 
    } 
  
    
    if (front == rear) 
    { 
        front = -1; 
        rear = -1; 
    } 
    else{
         
        if (front == size -1) 
            front = 0; 
  
        else 
            front = front+1; 
    }
} 
  

void Deque::deleterear() {  			// function to delete the element through rear end
 
    if (isEmpty()) 
    { 
        cout << " Underflow\n" << endl ; 
        return ; 
    } 
  
  
    if (front == rear) 
    { 
        front = -1; 
        rear = -1; 
    } 
    else if (rear == 0) 
        rear = size-1; 
    else
        rear = rear-1; 

} 
  
 
// Driver co
int main() 
{ 
    Deque dq(5); 
    
    dq.insertrear(10);
    dq.insertrear(15); 
    dq.insertfront(5);
    
    cout<<dq.getFront()<<endl;
    cout<<dq.getRear()<<endl;
    
    dq.deletefront();
    cout<<dq.getFront()<<endl;
    
    return 0; 
} 


/*
Output:

5
15
10

*/
