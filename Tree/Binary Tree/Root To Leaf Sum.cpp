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


bool rootToLeafSum(Node *temp,int S){
	
	// base
	if(temp == NULL){
		return 0;
	}
	
	if(temp->data == S && temp->left == NULL && temp->right == NULL)
		return true;
		
	return (rootToLeafSum(temp->left,S-temp->data) || rootToLeafSum(temp->right,S-temp->data));
}


int main(){
	
	Node *root = newNode(1);
	insertNode(root,2);
	insertNode(root,3);
	insertNode(root,4);
	insertNode(root,10);
	
	
	if(rootToLeafSum(root,7)){
		cout<<"True";
	}
	else{
		cout<<"False";
	}
	
	return 0;
}



// Output:

// True
