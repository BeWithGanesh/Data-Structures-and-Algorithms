// Coded by Ganesh Prasad

#include<bits/stdc++.h>
using namespace std;

void insertionSort(int arr[],int n){
	
	for(int i=1;i<n;i++){
		
		int temp = arr[i];
		int j;
		
		for(j=i-1;j>=0 && arr[j]>temp;j--){
			arr[j+1] = arr[j];
		}
		
		arr[j+1] = temp; 
	}
}

int main(){
	
	int arr[]= {20,5,10,15,30,25};
	int n  = sizeof arr/sizeof arr[0];
	
	insertionSort(arr,n);
	
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	
	return 0;
}


// Output:

// 5 10 15 20 25 30 



// Time Complexity: O(n2) 
// Auxiliary Space: O(1) 
