

#include<bits/stdc++.h>
using namespace std;

struct Queue { 

// creste 2 stacks
	stack<int> s1,s2;
	
	
	void enqueue(int x){
		
		// push to s2
		while(!s1.empty()){
			s2.push(s1.top());
			s1.pop();
			
		}
		
		// inserts the new element(x) into queue
		s1.push(x);
		
		// push back to s1
		while(!s2.empty()){
			s1.push(s2.top());
			s2.pop();
		}
	
	}
	
	void dequeue(){
		
		if(s1.empty()){
			cout<<"empty";
			return;
			
		}
		
		s1.pop();
		
	}
	
	void print(){
		while(!s1.empty()){
			cout<<s1.top();
			s1.pop();
		}
	}
};

int main(){
	
	Queue q;
	q.enqueue(1);
	q.enqueue(2);
	q.enqueue(3);
	q.enqueue(4);
	q.enqueue(5);
	
	q.dequeue();
	q.dequeue();
	
	q.print();

	return 0;
}