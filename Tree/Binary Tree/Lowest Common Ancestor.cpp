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

Node *LCA(Node *temp,int n1,int n2){
	
	// base
	if(temp == NULL) return temp;
	
	if(temp->data == n1 || temp->data == n2) return temp;
	
	Node *left = LCA(temp->left,n1,n2);
	Node *right = LCA(temp->right,n1,n2);
	
	if(left != NULL && right != NULL) return temp;
	
	return left!=NULL ? left : right; 


}

int main(){
	
	Node *root = newNode(1);
	insertNode(root,2);
	insertNode(root,3);
	insertNode(root,4);
	insertNode(root,5);
	
	Node *x = LCA(root,4,5);
	cout<<x->data;
	
	return 0;
}



// Output:

// 2 
