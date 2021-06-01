// Coded by Ganesh Prasad

#include<bits/stdc++.h>
using namespace std;

struct Node{
	int data;
	Node *left,*right;
	
};

Node *newNode(int x){
	
	Node *temp = new Node;
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

void inorder(Node *temp){
	
	if(temp == NULL){
		return;
	}
	
	inorder(temp->left);
	cout<<temp->data<<' ';
	inorder(temp->right);
	
}

void deleteDeepNode(Node *root,Node *d_node){
	
	queue<Node*> q;
	q.push(root);
	
	while(!q.empty()){
		Node *temp = q.front();
		q.pop();
		
		if(temp == d_node){
			temp = NULL;
			delete(d_node);
			return;
		}
		
		if(temp->right){
			if(temp->right == d_node){
				temp->right = NULL;
				delete(d_node);
				return;
			}
			else{
				q.push(temp->right);
			}
		}
		
		if(temp->left){
			if(temp->left == d_node){
				temp->left = NULL;
				delete(d_node);
				return;
			}
			else{
				q.push(temp->left);
			}
		}
		
	}
	
}

Node *deleteNode(Node *root,int key){
	
	// base
	if(root == NULL){
		return NULL;
	}
	
	if(root->left == NULL && root->right == NULL){
		if(root->data == key){
			return NULL;
		}
		return root;
	}
	
	queue<Node*> q;
	q.push(root);
	
	Node *temp;
	Node *key_node = NULL;
	
	while(!q.empty()){
		
		temp = q.front();
		q.pop();
		
		if(temp->data == key){
			key_node = temp;
		}
		if(temp->left){
			q.push(temp->left);
		}
		if(temp->right){
			q.push(temp->right);
		}
	}
	
	if(key_node != NULL){
		
		int x = temp->data;
		deleteDeepNode(root,temp);
		key_node->data = x;
	}
	
	
	return root;
}

int main(){
	
	Node *root = newNode(1);
	insertNode(root,2);
	insertNode(root,3);
	insertNode(root,4);
	
	inorder(root);
	cout<<endl;
	
	deleteNode(root,1);
	inorder(root);
	
	return 0;
}



// Output:

// 4 2 1 3 
// 2 4 3 
