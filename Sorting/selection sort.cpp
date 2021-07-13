// Coded by Ganesh Prasad

#include<bits/stdc++.h>
using namespace std;

void selectionSort(int arr[],int n){
	

	for(int i=0;i<n-1;i++){
		
		int min_v = i;
		for(int j=i+1;j<n;j++){
			
			if(arr[j]<arr[min_v]){
				
				min_v = j;	
			}
		}
		swap(arr[i],arr[min_v]); // swap min element in correct position
	}
}

int main(){
	
	int arr[]= {20,5,10,15,30,25};
	int n  = sizeof arr/sizeof arr[0];
	
	selectionSort(arr,n);
	
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	
	return 0;
}


// Output:

// 5 10 15 20 25 30 



// Time Complexity: O(n2) 
// Auxiliary Space: O(1) 
