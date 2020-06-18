#include<bits/stdc++.h>
using namespace std;

#define MAX 5
int top = -1;
int s[MAX];

void push(int x){ 		// function to insert a element into stack

	if(top >= MAX-1){
		cout<<"overflow.."<<endl;
		return;	
	}
	s[++top] = x;
}

void pop(){ 		// function to remove a element from stack
	
	if(top <= -1){
		cout<<"underflow.."<<endl;
		return;
	}
	--top;
}

bool isEmpty(){ 		// function to check the stack is EMPTY or not
	
	if(top == -1)
		return true;
	return false;
}

bool isFull(){ 		// function to check the stack is FULL or not
	
	if(top == MAX-1)
		return true;
	return false;
}

void peek(){ 		// fuction to display the top most element in stack		
	
	if(top == -1){
		cout<<" empty stack..";
		return;
	}
	cout<<s[top]<<endl;
	
}

void display(){ 		// function to display the elements in the stack
	
	int i;
	for(i=0;i<=top;i++){
		cout<<s[i]<<" ";
	}
	cout<<endl;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	isEmpty() ? cout<< "True \n" : cout<<"false \n";
	push(1);
	push(2);
	push(3);
	push(4);
	push(5);
	
	display();

	pop();
	display();
	cout<<"Now the top of the stack is:";peek();
	push(5);
	
	display();
	
	isFull() ? cout<< "True \n" : cout<<"false \n"; 		

	return 0;
}

/*
Output:

True
1 2 3 4 5
1 2 3 4
Now the top of the stack is:4
1 2 3 4 5
True
*/

