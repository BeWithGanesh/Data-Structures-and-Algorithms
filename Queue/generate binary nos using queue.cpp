#include<bits/stdc++.h>
using namespace std;

int main(){
	
	queue<string> q;
	
	q.push("1");
	
	for(int i=0;i<10;i++){
		
		string tmp = q.front();
	
		cout<<tmp<<" ";
		q.pop();
		
		q.push(tmp+"0");
		q.push(tmp+"1");
	}
	
	return 0;
}