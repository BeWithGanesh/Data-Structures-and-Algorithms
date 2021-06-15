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

void preorder(Node *temp){
	
	stack<Node*>s;
	s.push(temp);
	
	while(!s.empty()){
		
		Node *curr = s.top();
		cout<<curr->data<<" ";
		s.pop();
		
		if(curr->right){
			s.push(curr->right);
		}
		
		if(curr->left){
			s.push(curr->left);
		}
		
	}

}

int main(){
	
	Node *root = newNode(1);
	insertNode(root,2);
	insertNode(root,3);
	insertNode(root,4);
	insertNode(root,5);
	
	preorder(root);
	
	return 0;
}



// Output:

// 1 2 4 5 3  
