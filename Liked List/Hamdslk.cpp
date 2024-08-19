#include<bits/stdc++.h>
using namespace std;

struct Node{
	int data;
	Node *next;
};

typedef struct Node* node;
//Cap phat dong mot node moi la so nguyen x
node makeNode(int x){
	node tmp=new Node();
	tmp->data=x;
	tmp->next=NULL; //nullptr
	return tmp;
}
//Kiem tra rong
bool empty(node a){
	return a==NULL;
}

//Kiem tra kich thuoc
int Size(node a){
	int cnt=0;
	while(a!=NULL){
		++cnt;
		a=a->next;// gan node tiep theo cho node hien tai
		// cho node hien tai nhay sang node tiep theo
	}
	return cnt;
}

//Them 1 phan tu vao dau dslk

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

//Them phan tu vao cuoi

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

// Them phan tu vao giua
void insertMid(node &a,int x,int pos){
	int n=Size(a);
	if(pos<=0 || pos > n+1){
		cout<<"vi tri k hop le"<<endl;
	}
	if(pos==1){
		insertFirst(a,x); return;
	}
	else if(pos==n+1){
		insertLast(a,x);return;
	}
	node p=a;
	for(int i=1;i<pos-1;i++){
		p=p->next;
	}
	node tmp=makeNode(x);
	tmp -> next = p->next;
	p->next=tmp;
}
// xoa phan tu o dau
void deleteFirst(node &a){
	if(a==NULL) return;
	a=a->next;
}

// xoa phan tu o cuoi
void deleteLast(node &a){
	if(a==NULL) return;
	node truoc=NULL,sau=a;
	while(sau->next!=NULL){
		truoc=sau;
		sau=sau->next;
	}
	if(truoc==NULL){
		a=NULL;
	}
	else{
		truoc->next=NULL;
	}
}

// xoa o giua

void deleteMid(node &a,int pos){
	if(pos<=0 || pos > Size(a)) return;
	node truoc = NULL,sau=a;
	for(int i=1;i<pos;i++){
		truoc=sau;
		sau=sau->next;
	}
	if(truoc==NULL){
		a=a->next;
	}
	else{
		truoc->next=sau->next;
	}
}
void sapxep(node &a){
	for(node p=a;p->next!=NULL;p=p->next){
		node min=p;
		for(node q=p->next;q!=NULL;q=q->next){
			if(q->data < min->data){
				min=q;
			}
		}
		int tmp=min->data;
		min->data=p->data;
		p->data=tmp;
	}
}
void in(node a){
	cout<<"-----------------------"<<endl;
	while(a!=NULL){
		cout<<a->data<<" ";
		a=a->next;
	}
	cout<<endl;
	cout<<"-----------------------"<<endl;
}

int main(){
	node head=NULL;
	while(1){
		cout<<"0. ket thuc chuong trinh\n";
		cout<<"1. chen phan tu vao dau\n";
		cout<<"2. chen vao cuoi\n";
		cout<<"3. chen vao giua\n";
		cout<<"4. xoa o dau\n";
		cout<<"5. xoa o cuoi\n";
		cout<<"6. xoa phan tu o giua\n";
		cout<<"7. duyet danh sach lk\n";
		cout<<"8. sap dslk xep \n";
		cout<<" nhap lua chon :\n";
		int lc;cin>>lc;
		if(lc==1){
			int x;cin>>x;
			insertFirst(head,x);
		}
		else if(lc==2){
			int x;cin>>x;
			insertLast(head,x);
		}
		else if(lc==3){
			int x;
			cin>>x;
			int pos;cin>>pos;
			insertMid(head,x,pos);
		}
		else if(lc==4){
			deleteFirst(head);
		}
		else if(lc==5){
			deleteLast(head);
		}
		else if(lc==6){
			int pos;cin>>pos;
			deleteMid(head,pos);
		}
		else if(lc==7){
			in(head);
		}
		else if(lc==8){
			sapxep(head);
		}
		else if(lc==0){
			break;
		}
	}
	return 0;
}