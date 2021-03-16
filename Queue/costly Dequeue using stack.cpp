#include<bits/stdc++.h>
using namespace std;

struct Queue{
	
	// create 2 satcks 
	stack<int> s1,s2;
	
	void enqueue(int x){
		
		s1.push(x);
		
	}
	
	void dequeue(){
		
		if(s1.empty() && s2.empty()){
			cout<<"empty";
			exit(0);
		}
		
		if(s2.empty()){
			while(!s1.empty()){
				s2.push(s1.top());
				s1.pop();
			}
		}
		
		//removes the top element from s2
		
		s2.pop();
	
		
		
	}
	
	void print(){
		while(!s2.empty()){
			cout<<s2.top();
			s2.pop();
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