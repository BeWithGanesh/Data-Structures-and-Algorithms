// Coded by Ganesh Prasad

#include<bits/stdc++.h>
using namespace std;

void nextGreaterElement(int arr[],int n){
	
	stack<int> s;
	s.push(arr[0]);
	
	for(int i=1;i<n;i++){
		
		// if empty
		if(s.empty()){
			s.push(arr[i]);
			continue;
		}
		
		// if arr[i]>s.top()
		while(!s.empty() && arr[i]>s.top()){
			cout<<s.top()<<"-> "<<arr[i]<<endl;
			s.pop();
		}
		s.push(arr[i]);
	}
		
		// leftover elements
		while(!s.empty()){
			cout<<s.top()<<"-> "<< -1<<endl;
			s.pop();
		}
		
	
	
}

int main(){
	int arr[] = { 11, 13, 21, 3 };
    int n = sizeof(arr) / sizeof(arr[0]);
    
    nextGreaterElement(arr,n);
	return 0;
}


// output:

// 11-> 13
// 13-> 21
// 3-> -1
// 21-> -1
