// Coded by Ganesh Prasad

#include<bits/stdc++.h>
using namespace std;

void zero_to_end(int arr[],int n){
	
	int count = 0;
	for(int i=0;i<n;i++){
		if(arr[i] != 0){
			swap(arr[i],arr[count]);
			count++;
		}
	}
	
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	
}

int main(){
	
	int arr[]={1,2,0,4,0,8};
	int n = sizeof arr/ sizeof arr[0];
	zero_to_end(arr,n);
	
	return 0;
}


// Output:

// 1 2 4 8 0 0 