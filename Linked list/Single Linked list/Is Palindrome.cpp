// Coded by Ganesh Prasad

#include<bits/stdc++.h>
using namespace std;

class Node{
	
	public:
		int data;
		Node* next;
	
};

void Insert(Node **head_ref, int new_data){
	
	Node *new_node = new Node();
	new_node->data = new_data;
	new_node->next = (*head_ref);
	
	(*head_ref) = new_node;
	
}


void Display(Node *node){
	
	while(node != NULL){
		cout<<node->data<<"->";
		node = node->next;
	}
	cout<<"NULL";
	

}

bool isPalindrome(Node *node){
	
	
	Node *temp = node;
	stack<int> st;
	
	
	while(node != NULL){
		
		st.push(node->data);
		
		node = node->next;
	}	
	
	while(temp != NULL){
		int i=st.top();
		st.pop();
		if(i != temp->data){
			return false;
		}
		
		temp = temp->next;
	}
	
	return true;

}



int main(){
	
	Node *head = NULL;
	
	Insert(&head,5);
	Insert(&head,4);
	Insert(&head,3);
	Insert(&head,4);
	Insert(&head,5);
	
	Display(head);
	
	cout<<endl;
	
	isPalindrome(head) ? cout<<"palindrome" : cout<<"not a palindrome";
	
	
	
	return 0;
}



// output:
// 
// 5->4->3->4->5->NULL
// palindrome