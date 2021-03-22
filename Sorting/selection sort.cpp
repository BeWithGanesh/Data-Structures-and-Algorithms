// Coded by Ganesh Prasad

#include<bits/stdc++.h>
using namespace std;

void swap(int *xp, int *yp)  
{  
    int temp = *xp;  
    *xp = *yp;  
    *yp = temp;  
}

void selectionSort(int arr[], int n){
	
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(arr[i]>arr[j]){
				swap(&arr[i],&arr[j]);
			}
		}
	}
}

void display(int arr[],int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}

int main(){
	
	int arr[] = {4,7,9,3,6};
	int size = sizeof(arr)/sizeof(arr[0]);
	
	selectionSort(arr,size);
	
	display(arr,size);
	
	return 0;
}