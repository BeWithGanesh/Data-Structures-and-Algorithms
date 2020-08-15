#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node *left = NULL;
    Node *right = NULL;
    int hd; 			// horizontal distance
};

Node *root = NULL;

Node *newNode(int x) {
    Node *temp = new Node;
    temp->data = x;
    temp->left = NULL;
    temp->right = NULL;
    
    return temp;
}

void printLeaves(Node *root){
	
	//base
	if(root == NULL)
		return;
		
	printLeaves(root->left);
	
	if(!(root->left) and !(root->right))
		cout<<root->data;
	
	printLeaves(root->right);
}

void printLeftBoundary(Node *root){
	
	//base
	if(root == NULL)
		return;
		
	if(root->left){
		cout<<root->data;
		printLeftBoundary(root->left);
	}
	
	else if(root->right){
		cout<<root->data;
		printLeftBoundary(root->right);
	}
}

void printRightBoundary(Node *root){
	
	//base
	if(root == NULL)
		return;
		
	if(root->right){
		
		printRightBoundary(root->right);
		cout<<root->data;
		
	}
	
	else if(root->left){
		
		printRightBoundary(root->left);
		cout<<root->data;
	}
}

void printBoundary(Node *root){
	
	//base 
	if(root == NULL)
		return;
		
	cout<<root->data;
	
	//prints left boundary in top-down manner
	printLeftBoundary(root->left);
	
	//print the leaf nodes
	printLeaves(root->left);
	printLeaves(root->right);
	
	//print right boundary in bottom-up manner
	printRightBoundary(root->right);
	
}


int main() {

    root = newNode(1);
	root->left = newNode(2);
	root->right = newNode(3);
	root->left->left = newNode(4);
	root->left->right = newNode(5);
	root->left->left->left = newNode(6);
	root->left->left->right = newNode(7);
   
    cout<<"Boundary Traversal : ";
    printBoundary(root);
	cout << endl;
	 
    return 0;
}

/* Output:

Boundary Traversal : 1246753

*/
