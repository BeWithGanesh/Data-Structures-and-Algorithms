// Coded by Ganesh Prasad

#include<bits/stdc++.h>
using namespace std;

struct Node{
	int data;
	Node *left,*right;
	
};

Node *newNode(int x){
	
	Node *temp = new Node();
	temp->data = x;
	temp->left = NULL;
	temp->right = NULL;
	
	return temp;
}

Node* insertNode(Node *root,int data){
	
	// base
	if(root == NULL){
		root = newNode(data);
		return root;
	}
	
	queue<Node*> q;
	q.push(root);
	
	while(!q.empty()){
		
		Node *temp = q.front();
		q.pop();
		
		if(temp->left != NULL){
			q.push(temp->left);
		}
		else{
			temp->left = newNode(data);
			return root;
		}
		
		if(temp->right != NULL){
			q.push(temp->right);
		}
		else{
			temp->right = newNode(data);
			return root;
		}
	}
	
	return root;
}

void postorder(Node *temp){
	
	stack<Node*>s1;
	stack<Node*>s2;
	
	s1.push(temp);
	
	while(!s1.empty()){
		
		Node *curr = s1.top();
		s2.push(curr);
		s1.pop();
		
		if(curr->left){
			s1.push(curr->left);
		}
		if(curr->right){
			s1.push(curr->right);
		}
		
	}
	
	while(!s2.empty()){
		
		Node *curr = s2.top();
		cout<<curr->data<<" ";
		s2.pop();
	}

}

int main(){
	
	Node *root = newNode(1);
	insertNode(root,2);
	insertNode(root,3);
	insertNode(root,4);
	insertNode(root,5);
	
	postorder(root);
	
	return 0;
}



// Output:

// 4 5 2 3 1 
