// Coded by Ganesh Prasad

#include<bits/stdc++.h>
using namespace std;

void secondLargest(int arr[],int n){
	
	int res = -1;
	int largest = 0;
	
	for(int i=1;i<n;i++){
		
		if(arr[i]>arr[largest]){
			res = largest; // second largest
			largest = i;
		}
		else if(arr[i] != arr[largest]){
			if(res == -1 || arr[i]<arr[largest])
				res = i;
		}
		
	}
	cout<<arr[res];
}

int main(){
	
	int arr[]={10,23,43,74,25,88};
	int n = sizeof arr/ sizeof arr[0];
	secondLargest(arr,n);
	return 0;
}


// Output:

// 74