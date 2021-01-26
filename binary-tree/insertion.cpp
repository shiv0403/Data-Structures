#include<iostream>
#include<queue>
using namespace std;

class node {
public: 
	int data;
	node*left;
	node*right;

	node(int data) {
		this->data=data;
		this->left=NULL;
		this->right=NULL;
	}
};

node* build() {
	int data;
	scanf("%d",&data);
	if(data==-1) {
		return NULL;
	}

	node*root = new node(data);
	root->left = build();
	root->right = build();

	return root;
}

void print(node*root) {
	if(root==NULL) {
		return;
	}

	//inorder traversal
	print(root->left);
	printf("%d ",root->data);
	print(root->right);
	return;
}

int main() {

	node*root = build();
	print(root);
	printf("\n");

	return 0;
}