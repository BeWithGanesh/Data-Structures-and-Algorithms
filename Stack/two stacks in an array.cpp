// Coded by Ganesh Prasad

#include<bits/stdc++.h>
using namespace std;


class twoStacks{
	
	public:
		int *arr;
		int size;
		int top1,top2;
	
	twoStacks(int n){
		
		size = n;
		arr = new int[n];
		top1 = -1;
		top2 = size;
		
	}
	
	void push1(int x){
		if(top1<top2-1){
			top1++;
			arr[top1] = x;
		}
		else{
			cout<<"over";
			exit(1);
		}
		
	}
	void push2(int x){
		if(top1<top2-1){
			top2--;
			arr[top2] = x;

		}
		else{
			cout<<"over";
			exit(1);
		}
		
	}
	void pop1(){
		
		if(top1 >= 0){
			top1--;
		}
		else{
			cout<<"under";
			exit(1);
		}
	}
	void pop2(){
		
		if(top2<size){
			top2++;
		}
		else{
			cout<<"under";
			exit(1);
		}
		
	}
	
	void display(){
		for(int i=0;i<size;i++){
			cout<<arr[i]<<" ";
		}
		cout<<"\n";
	}
};




int main(){
	
	twoStacks ts(5);
	ts.push1(5);
    ts.push2(10);
    ts.push2(15);
    ts.push1(11);
    ts.push2(7);
  	ts.display();
  	
  	ts.pop2();
  	ts.push2(88);
  	ts.display();
    
    ts.push2(8);
    ts.display();
	return 0;
}

// output:
// 
// 5 11 7 15 10 
// 5 11 88 15 10 
// over
