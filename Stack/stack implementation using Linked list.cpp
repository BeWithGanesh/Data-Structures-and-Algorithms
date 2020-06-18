#include<bits/stdc++.h>
using namespace std;

class Node{
	public:
		int data;
		Node *next;
};

Node *top =NULL;

void push(int x){
	
	Node *temp = new Node;
	temp->data = x;
	temp->next = NULL;
	if(top == NULL){
		top = temp;
	}
	else{
		temp->next=top;
		top=temp;
	}
}

void pop(){
	
	if(top == NULL)
		return;
	Node *ptr = top;
	top=ptr->next;
	free(ptr);	 
}

int peek(){
	
	return top->data;
}

void display(){
	
	if(top == NULL)
		cout<<"Empty stack.."<<endl;
	Node *temp = top;
	while(temp != NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
}

bool isEmpty(){
	
	if(top == NULL)
		return true;
	return false;
}

int main() {
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
	cout<<"Now the top of the stack is:" << peek()<<endl;
	push(6);
	display();
	isEmpty() ? cout<< "True \n" : cout<<"false \n";
	
	return 0;
}

/*
Output:

True
5 4 3 2 1
4 3 2 1
Now the top of the stack is:4
6 4 3 2 1
false
*/

