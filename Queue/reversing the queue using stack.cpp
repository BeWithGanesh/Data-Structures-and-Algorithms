#include<bits/stdc++.h>
using namespace std;

void reverse(queue<int> &q){
	
	stack<int> s;
	
	while(q.empty() == false){
		int x = q.front();
		s.push(x);
		q.pop();
	}
	
	while(!s.empty()){
		cout<<s.top();
		s.pop();
	}
}

int main(){
	
	queue<int> q;
	q.push(1);
	q.push(2);
	q.push(3);
	q.push(4);
	q.push(5);

	reverse(q);
	
	return 0;
}