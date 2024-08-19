#include<bits/stdc++.h>
using namespace std;

struct node{
	int data;
	node *left; //node con ben trai
	node *right;//node con ben phai	
};

node* makeNode(int x){
	node *newNode = new node;
	newNode->data=x;
	newNode->left=newNode->right=NULL;
	return newNode;
}

void makeRoot(node *root,int u,int v,char c){
	if(c=='L') root->left=makeNode(v);
	else root->right=makeNode(v);
}

void insertNode(node *root,int u,int v,char c){
	if(root==NULL) return;
	if(root->data==u){
		makeRoot(root,u,v,c);
	}
	else{
		insertNode(root->left,u,v,c);
		insertNode(root->right,u,v,c);
	}
}

void inorder(node *root){
	if(root==NULL){
		return;
	}
	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
}

int main(){
	
}
