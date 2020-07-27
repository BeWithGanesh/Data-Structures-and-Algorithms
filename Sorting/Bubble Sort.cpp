#include<bits/stdc++.h>
using namespace std;

void bubblesort(int a[], int n){
	int i,j,temp;
	for(i=0;i<n;i++){
		for(j=0;j<n-i-1;j++){
			if(a[j]>a[j+1]){ 		// swap(a[j],a[j+1]);
				temp=a[j+1];
				a[j+1]=a[j];
				a[j]=temp;
			}
		}
	}
}
int main(){
	
	int a[]={5,3,4,1,2};
	int n=sizeof(a)/sizeof(a[0]);
	
	cout<<"Before Sorting..";
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	
	cout<<endl;
	bubblesort(a,n);
	
	cout<<"After Sorting..";
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	return 0;
}

/*
Output:

Before Sorting..5 3 4 1 2
After Sorting..1 2 3 4 5

*/
