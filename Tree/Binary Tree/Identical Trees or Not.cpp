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


bool IdenticalTrees(Node *root1, Node *root2){
	
	// base
	if(root1 == NULL && root2 == NULL){
		return true;
	}
	
	if(root1 == NULL || root2 == NULL){
		return false;
	}
	
	return root1->data == root2->data && IdenticalTrees(root1->left,root2->left) && IdenticalTrees(root1->right,root2->right);

}


int main(){
	
	Node *root1 = newNode(1);
	insertNode(root1,2);
	insertNode(root1,3);
	insertNode(root1,4);
	insertNode(root1,10);
	
	Node *root2 = newNode(1);
	insertNode(root2,2);
	insertNode(root2,3);
	insertNode(root2,4);
	insertNode(root2,10);
	
	
	if(IdenticalTrees(root1,root2))
		
		cout<<"Identical";
	else
		cout<<"Not Identical";
	
	return 0;
}



// Output:

// Identical
