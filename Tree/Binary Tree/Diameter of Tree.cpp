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


int Height(Node *temp){
	
	// base
	if(temp == NULL){
		return 0;
	}
	
	return max(Height(temp->left),Height(temp->right))+1;
}

int Diameter(Node *root){
	
	// base
	if(root == NULL)
		return 0;
	
	int lh = Height(root->left);
	int rh = Height(root->right);
	int d = lh+rh+1;
	
	int ld = Diameter(root->left);
	int rd = Diameter(root->right);
	
	return max(d,max(ld,rd));
}


int main(){
	
	Node *root = newNode(1);
	insertNode(root,2);
	insertNode(root,3);
	insertNode(root,4);
	insertNode(root,10);
	
	
	cout<<Diameter(root);
	
	return 0;
}



// Output:

// 4
