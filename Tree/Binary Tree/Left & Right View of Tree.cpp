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

void leftview(Node *node){
	//base
	if(node == NULL){
		return;
	}
	
	queue<Node *> q;
	q.push(node);
	
	while(!q.empty()){
		int n = q.size();
		for(int i=0;i<n;i++){
			
			Node *temp = q.front();
			q.pop();
			
			if( i == 0)
				cout<<temp->data;
			if(temp->left)
				q.push(temp->left);
			if(temp->right)
				q.push(temp->right);
		}
	}
}


void rightview(Node *node){
	//base 
	if(node == NULL)
		return;
		
	queue<Node *> q;
	q.push(node);
	
	while(!q.empty()){
		int n=q.size();
		for(int i=0;i<n;i++){
			
			Node *temp = q.front();
			q.pop();
			
			if(i == n-1){
				cout<<temp->data;
			}
			
			if(temp->left)
				q.push(temp->left);
			if(temp->right)
				q.push(temp->right);
		}
	}
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
