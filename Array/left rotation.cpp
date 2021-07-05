// Coded by Ganesh Prasad

#include<bits/stdc++.h>
using namespace std;

void leftRotation(int arr[],int n){
	
	if(n == 0)
		cout<<-1;
	
	int x = arr[0];
	for(int i=1;i<n;i++){
		arr[i-1] = arr[i]; 
	}
	arr[n-1] = x;
	
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	
}

int main(){
	
	int arr[]={1,2,3,4,5};
	int n = sizeof arr/ sizeof arr[0];
	leftRotation(arr,n);
	
	return 0;
}


// Output:

// 2 3 4 5 1 