// Coded by Ganesh Prasad

#include<bits/stdc++.h>
using namespace std;

class Stack{
	public:
	
	queue<int> q1,q2;
	int currsize;
	
	Stack(){
		currsize = 0;
	}
	
	void push(int x){
		currsize++;
		q2.push(x);
		
		while(!q1.empty()){
			q2.push(q1.front());
			q1.pop();
		}
		
		swap(q1,q2);
	}
	
	void pop(){
		if(q1.empty()){
			return;
		}
		q1.pop();
		currsize--;
	}
	
	void curr_size(){
		cout<<currsize;
	}
	
};


int main(){
	
	Stack s;
	s.push(5);
	s.push(51);
	s.push(52);
	s.push(53);
	s.curr_size();
	
	cout<<"\n";
	
	s.pop();
	s.curr_size();
	
	return 0;
}

// output:

// 4
// 3
