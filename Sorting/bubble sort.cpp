// Coded by Ganesh Prasad

#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[],int n){
	
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
				swap(arr[i],arr[i+1]);
			}
		}
	}
}

int main(){
	
	int arr[]= {20,5,10,15,30,25};
	int n  = sizeof arr/sizeof arr[0];
	
	bubbleSort(arr,n);
	
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	
	return 0;
}


// Output:

// 5 10 15 20 25 30 


// Time Complexity: O(n2) 
// Auxiliary Space: O(1) 

