#include<bits/stdc++.h>
using namespace std;
struct Node{
	int data;
	Node *next;	
};

typedef struct Node* node;

node makeNode(int x){
	node tmp=new Node();
	tmp->data=x;
	tmp->next=NULL;
	return tmp;
}

bool empty(node a){
	return a==NULL;
}

int size(node a){
	int cnt=0;
	while(a!=NULL){
		++cnt;
		a=a->next;
	}	
	return cnt;
}

void insertFirst(node &a,int x){
	node tmp=makeNode(x);
	if(a==NULL){
		a=tmp;
	}
	else{
		tmp->next=a;
		a=tmp;
	}
}

void insertLast(node &a,int x){
	node tmp=makeNode(x);
	if(a==NULL){
		a=tmp;
	}
	else{
		node p=a;
		while(p->next!=NULL){
			p=p->next;
		}
		p->next=tmp;
	}
}
void in(node a){
	cout<<"---------------------"<<endl;
	while(a!=NULL){
		cout<<a->data<<" ";
		a=a->next;
	}
	cout<<endl;
	cout<<"---------------------"<<endl;
}
int main(){
	node head=NULL;
	while(1){
		int lc;cin>>lc;
		if(lc==1){
			int x;cin>>x;
			insertFirst(head,x);
		}
		if(lc==2){
			int x;cin>>x;
			insertLast(head,x);
		}
		if(lc==3) in(head);
	}
}