#include<bits/stdc++.h>
using namespace std;

class Node{
	public:
		int data;
		Node *next;
};

Node *newNode(int data){
	Node *temp= new Node;
	temp->next=temp;
	temp->data=data;
}

void getJosephusPosition(int m ,int n){
	
	// to create circular linked list of n Nodes
	Node *head=newNode(1);
	Node *prev=head;
	
	for(int i=2; i<=n; i++){
		prev->next=newNode(i);
		prev=prev->next;
	}
	prev->next=head; // connect the last node with head
	
	Node *ptr1=head;
	Node *ptr2=head;
	
	while (ptr1->next != ptr1){
		int count=1;
		
		while(count != m){
			count++;
			ptr2=ptr1;
			ptr1=ptr1->next;
			
		}
		ptr2->next=ptr1->next;
		free(ptr1);
		ptr1=ptr2->next;
	}
	
	cout<<"survivor : "<< ptr1->data;
	
	
}



int main(){
 	int m=2,n;
 	cout<<"Enter the total no of soilders : ";
 	cin>>n;
    getJosephusPosition(m, n); 
    return 0; 
}


/*
Output:

Enter the total no of soilders : 40
survivor : 17

*/
