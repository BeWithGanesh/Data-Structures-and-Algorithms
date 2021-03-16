#include<bits/stdc++.h>
using namespace std;

void reverse(queue<int> &q, int n){
	
	//base
	if(n > q.size() or q.empty() == true){
		return;
	}
	if(n<=0)
		return;
	
	stack<int> s;
	
	for(int i=0;i<n;i++){
		int x = q.front();
		q.pop();
		s.push(x);
	}
	
	while(s.empty() == false){
		q.push(s.top());
		s.pop();
	}
	
	for(int i=0; i<q.size()-n; i++){
		q.push(q.front());
		q.pop();
	}
	
	while(!q.empty()){
		cout<<q.front();
		q.pop();
	}
	
}

int main(){
	

	queue<int> q;
	q.push(1);
	q.push(2);
	q.push(3);
	q.push(4);
	q.push(5);
	
	
	// no's to reversed 
	int n;
	cin>>n;
	
	reverse(q , n);
	
	return 0;
}