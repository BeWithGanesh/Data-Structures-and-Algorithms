// Coded by Ganesh Prasad

#include<bits/stdc++.h>
using namespace std;

struct Node{
	int data;
	Node *left,*right;
	
};

int maxval = INT_MIN;

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

int maxSum(Node *root){
	
	// base
	if(root == NULL)
		return 0;
	
	int l = max(maxSum(root->left),0); // to avoid -ve
	int r = max(maxSum(root->right),0);
	
	maxval = max(maxval, l+r+root->data);
	
	
	return max(l,r)+root->data; // for single branch
}

int MaxPathSum(Node *root){
	
	maxSum(root);
	
	return maxval;
	
}

int main(){
	
	Node *root = newNode(1);
	insertNode(root,2);
	insertNode(root,3);
	insertNode(root,4);
	insertNode(root,5);
	
	cout<<MaxPathSum(root);
	
	return 0;
}



// Output:

// 11 
