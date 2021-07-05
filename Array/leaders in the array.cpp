// Coded by Ganesh Prasad

#include<bits/stdc++.h>
using namespace std;

void Leader(int arr[],int n){
	
	int leader = arr[n-1];
	cout<<leader<<" ";
	
	
	for(int i=n-2;i>=0;i--){
		leader = max(leader,arr[i]);
	}
	
	cout<<leader<<" ";
	
	
}

int main(){
	
	int arr[]={10,2,13,4,7};
	int n = sizeof arr/ sizeof arr[0];
	Leader(arr,n);
	
	return 0;
}


// Output:

// 7 13 