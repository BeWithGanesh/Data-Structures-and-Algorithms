#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int info;
    Node *left = NULL;
    Node *right = NULL;
    int hd; 			// horizontal distance
};

Node *root = NULL;

Node *newNode(int data) {
    Node *temp = new Node;
    temp->info = data;
    temp->left = NULL;
    temp->right = NULL;
    
    return temp;
}


void topView(Node *node) {
	
	//base
    if (node == NULL)
        return;

    queue<Node *> q;
    map<int, int> m;
    q.push(node);
    
    while (!q.empty()) {
        Node *temp = q.front();
        q.pop();
        int hd = temp->hd;

        if (m.count(hd) == 0) 		// it returns 0 only if the hd not present in the container 
            m.insert({hd, temp->info});

        if (temp->left) {
            temp->left->hd = hd - 1;
            q.push(temp->left);
        }

        if (temp->right) {
            temp->right->hd = hd + 1;
            q.push(temp->right);
        }

    }
    
    map<int,int>::iterator itr;
    for (itr = m.begin(); itr != m.end(); itr++)
        cout << itr->second << " "; 
}

void bottomView(Node *node) {
	
	//base
    if (node == NULL)
        return;

    queue<Node *> q;
    map<int, int> m;
    q.push(node);
    
    while (!q.empty()) {
        Node *temp = q.front();
        q.pop();
        int hd = temp->hd;

        m[hd] = temp->info; 	// update the key value of map if found the same key again

        if (temp->left) {
            temp->left->hd = hd - 1;
            q.push(temp->left);
        }

        if (temp->right) {
            temp->right->hd = hd + 1;
            q.push(temp->right);
        }

    }
    
    map<int,int>::iterator itr;
    for (itr = m.begin(); itr != m.end(); itr++)
        cout << itr->second << " "; 
}

int main() {

    root = newNode(1);
	root->left = newNode(2);
	root->right = newNode(3);
	root->left->left = newNode(4);
	root->left->right = newNode(5);
	root->left->left->left = newNode(6);
	root->left->left->right = newNode(7);
   
    cout<<"Top View : ";
    topView(root);
	cout << endl;
	
	cout<<"Bottom View : ";
	bottomView(root);
	cout << endl;
	 
    return 0;
}

/* Output:

Top View : 6 4 2 1 3
Bottom View : 6 4 7 5 3

*/
