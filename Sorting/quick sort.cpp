// Coded by Ganesh Prasad

#include<bits/stdc++.h>
using namespace std;

int partition(int arr[],int low,int high){
	
	int pivot = arr[low];
	int i = low,j = high;
	
	while(i<j){
		while(arr[i]<=pivot)
			++i;
		while(arr[j]>pivot)
			--j;
		if(i<j){
			swap(arr[i],arr[j]);
		}
	}
	
	swap(arr[j],arr[low]);
	return j;
}

void quickSort(int arr[],int low,int high){
	
	if(low<high){
		int pivot = partition(arr,low,high);
		
		quickSort(arr,low,pivot-1);
		quickSort(arr,pivot+1,high);
	}
}

void printArray(int arr[],int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

int main(){
	
	int arr[] = {8,12,4,16,7,65,9};
	int n = sizeof(arr)/sizeof(arr[0]);
	
	quickSort(arr,0,n-1);
	printArray(arr,n);
	
	return 0;
}


// Output:

// 4 7 8 9 12 16 65 