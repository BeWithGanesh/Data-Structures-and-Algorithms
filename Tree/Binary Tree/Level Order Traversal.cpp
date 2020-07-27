#include<bits/stdc++.h>
using namespace std;

class Node{
	public:
		int data;
		Node *left, *right;
};

Node *root= NULL;

Node *insert(Node *root,int x){
	if(root == NULL){
		root=new Node;
		root->data=x;
		root->left=NULL;
		root->right=NULL;
	}
	
	else{
		if(x>(root->data)){
			root->right=insert(root->right,x);
		}
		if(x<(root->data)){
			root->left=insert(root->left,x);
		}
	}
	return root;
}

void levelOrder(Node *root){
	if(root == NULL) return;
	
	queue<Node*> q;
	q.push(root);
	
	while(!q.empty()){
		Node *curr=q.front();
		cout<<curr->data<<" ";
		q.pop();
		
		if(curr->left){
			q.push(curr->left);	
		}
		
		if(curr->right){
			q.push(curr->right);
		}
	}
}

int main(){
	root=insert(root,5);
	root=insert(root,2);
	root=insert(root,3);
	root=insert(root,1);
	root=insert(root,6);
	root=insert(root,4);
	
	levelOrder(root);
	
	return 0;
}

/*			
				  5
			    /  \
		       2    6
		      /\   /
		     1 3  4
		     
		     
Output:

5 2 6 1 3 4

*/
