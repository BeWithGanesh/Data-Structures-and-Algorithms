// Coded by Ganesh Prasad

#include<bits/stdc++.h>
using namespace std;

int merge(int arr[],int low,int mid,int high){
	
	int i = low;
	int j = mid+1;
	int k = low;
	int b[high+1];
	
	while(i<=mid && j<=high){
		
		if(arr[i]<arr[j])
			b[k++] = arr[i++];
		else
			b[k++] = arr[j++];
	}
	
	if(i>mid){
		while(j<=high){
			b[k++] = arr[j++];
		}
	}
	else{
		while(i<=mid){
			b[k++] = arr[i++];
		}
	}
	
	for(int x = low; x <= high; x++){
		arr[x]  = b[x];
	}
}



void mergeSort(int arr[],int low,int high){
	
	if(low<high){
		int mid = low+(high-low)/2;
		
		mergeSort(arr,low,mid);
		mergeSort(arr,mid+1,high);
		
		merge(arr,low,mid,high);
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
	
	mergeSort(arr,0,n-1);
	printArray(arr,n);
	
	return 0;
}


// Output:

// 4 7 8 9 12 16 65 