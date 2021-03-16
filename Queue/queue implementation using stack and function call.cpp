#include<bits/stdc++.h>
using namespace std;


struct Queue{
	
	stack<int> s;
	
	void enqueue(int x){
	
		s.push(x);
		
	}
	
	int dequeue(){
		
		//base
		if(s.empty()){
			cout<<"empty";
			return 0;
		}
		
		int x = s.top();
		s.pop();
		
		
		if(s.empty())
			return x;
			
		int item = dequeue();
		
		s.push(x);
		
		return item;
		
		
	}
	
	void print(){
		
		while(!s.empty()){
			cout<<s.top();
			s.pop();
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