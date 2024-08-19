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

set<int> se;
void duyetgiua(node* root,int cnt){
	if(root==NULL) return;
	if(root->left==NULL && root->right==NULL){
		se.insert(cnt);
	}
	duyetgiua(root->left,cnt+1);
	duyetgiua(root->right,cnt+1);

}
int main(){
	int t;cin>>t;
	while(t--){
		
		node *root=NULL;
		int n;cin>>n;
		for(int i=0;i<n;i++){
			int u,v;
			char c;
			cin>>u>>v>>c;
			if(root==NULL){
				root = makeNode(u);
				makeRoot(root,u,v,c);
			}
			else{
				insertNode(root,u,v,c);
			}
		}
		duyetgiua(root,0);
		if(se.size()==1) cout<<1;
		else cout<<0;
		cout<<endl;
		se.clear();
	}
}