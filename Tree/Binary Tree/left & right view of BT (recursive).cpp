#include<bits/stdc++.h>
using namespace std;

class Node {
	
	public:
		int data;
		Node *left = NULL;
		Node *right = NULL;	
};

Node *root =NULL; // global declaration

Node *newNode(int x){
	Node *temp=new Node;
	temp->data = x;
	temp->left = NULL;
	temp->right = NULL;
	return temp;
}

void leftUtil(Node *root, int level, int *maxl){
	
	// base
	if(root == NULL){
		return;
	}
	
	if(*maxl<level){
		cout<<root->data<<" ";
		*maxl = level;
	}
	
	leftUtil(root->left,level+1,maxl);
	leftUtil(root->right,level+1,maxl);
	
}

void leftview(Node *node){
	
	int maxl = 0;
	leftUtil(node,1,&maxl);	
}

void rightUtil(Node *root, int level, int *maxl){
	
	// base
	if(root == NULL){
		return;
	}
	
	if(*maxl<level){
		cout<<root->data<<" ";
		*maxl = level;
	}
	
	rightUtil(root->right,level+1,maxl);
	rightUtil(root->left,level+1,maxl);
	
}

void rightview(Node *node){
	
	int maxl = 0;
	rightUtil(node,1,&maxl);
}

int main(){
	
	root = newNode(1);
	root->left = newNode(2);
	root->right = newNode(3);
	root->left->left = newNode(4);
	root->left->right = newNode(5);
	
	cout<<"Left View : ";
	leftview(root);
	cout<<endl;
	cout<<"Right View : ";
	rightview(root);
	
	return 0;	
}

/* Output:
Left View : 124
Right View : 135
*/