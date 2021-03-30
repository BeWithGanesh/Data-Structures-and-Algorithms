// Coded by Ganesh Prasad

#include<bits/stdc++.h>
using namespace std;


class Node{
	public:
	
	int data;
	Node* next;
	
};

void print(Node* x){
	while(x!=NULL){
		cout<<x->data<<"->";
		x=x->next;
	}
	cout<<"NULL";
}

int main(){
	
	Node* head = NULL;
	Node* second=NULL;
	Node* third = NULL;
	
	head = new Node();
	second = new Node();
	third = new Node();
	
	
	head->data = 1;
	head->next = second;
	
	second->data = 2;
	second->next = third;
	
	third->data = 3;
	third->next = NULL;
	
	print(head);
	
	return 0;
}


// 
// output:
// 
// 1->2->3->NULL