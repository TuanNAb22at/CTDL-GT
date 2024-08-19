#include<bits/stdc++.h>
using namespace std;
struct Student{
	string name,id;
	double gpa;
};

struct SV{
	Student s;
	SV *next;
};

typedef struct SV* sv;
//Cap phat dong mot node moi la so nguyen x
sv makeNode(){
	Student s;
	cout<<"Nhap tt SV"<<endl;
	cout<<"Nhap ID :";cin>>s.id;
	cout<<"Nhap ten :";
	cin.ignore();
	getline(cin,s.name);
	cout<<"Nhap gpa :\n";
	cin>>s.gpa;
	sv tmp=new SV();
	tmp->s=s;
	tmp->next=NULL;
	return tmp;
}
//Kiem tra rong
bool empty(sv a){
	return a==NULL;
}

//Kiem tra kich thuoc
int Size(sv a){
	int cnt=0;
	while(a!=NULL){
		++cnt;
		a=a->next;// gan node tiep theo cho node hien tai
		// cho node hien tai nhay sang node tiep theo
	}
	return cnt;
}

//Them 1 phan tu vao dau dslk

void insertFirst(sv &a){
	sv tmp=makeNode();
	if(a==NULL){
		a=tmp;
	}
	else{
		tmp->next=a;
		a=tmp;
	}
		
}

//Them phan tu vao cuoi

void insertLast(sv &a){
	sv tmp=makeNode();
	if(a==NULL){
		a=tmp;
	}
	else{
		sv p=a;
		while(p->next!=NULL){
			p=p->next;
		}
		p->next=tmp;
	}
}

// Them phan tu vao giua
void insertMid(sv &a,int pos){
	int n=Size(a);
	if(pos<=0 || pos > pos+1){
		cout<<"vi tri k hop le"<<endl;
	}
	if(pos==1){
		insertFirst(a); return;
	}
	else if(pos==n+1){
		insertLast(a);return;
	}
	sv p=a;
	for(int i=1;i<pos-1;i++){
		p=p->next;
	}
	sv tmp=makeNode();
	tmp -> next = p->next;
	p->next=tmp;
}
// xoa phan tu o dau
void deleteFirst(sv &a){
	if(a==NULL) return;
	a=a->next;
}

// xoa phan tu o cuoi
void deleteLast(sv &a){
	if(a==NULL) return;
	sv truoc=NULL,sau=a;
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

void deleteMid(sv &a,int pos){
	if(pos<=0 || pos > Size(a)) return;
	sv truoc = NULL,sau=a;
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
void sapxep(sv &a){
	for(sv p=a;p->next!=NULL;p=p->next){
		sv min=p;
		for(sv q=p->next;q!=NULL;q=q->next){
			if(q->s.gpa<min->s.gpa){
				min=q;
			}
		}
		Student tmp=min->s;
		min->s=p->s;
		p->s=tmp;
		
	}
}
void in(Student s){
	cout<<"-------------------------------------\n";
	cout<<"ID :"<<s.id<<endl;
	cout<<"Name: "<<s.name<<endl;
	cout<<"Gpa: "<<fixed<<setprecision(2)<<s.gpa<<endl;
	cout<<"-------------------------------------\n";
}
void inds(sv a){
	cout<<"DSSV :\n";
	cout<<"-----------------------"<<endl;
	while(a!=NULL){
		in(a->s);
		a=a->next;
	}
	cout<<endl;
	cout<<"-----------------------"<<endl;
}
int main(){
	sv head=NULL;
	while(1){
		cout<<"0. ket thuc chuong trinh\n";
		cout<<"1. chen SV phan tu vao dau\n";
		cout<<"2. chen SV vao cuoi\n";
		cout<<"3. chen SV vao giua\n";
		cout<<"4. xoa SV o dau\n";
		cout<<"5. xoa SV o cuoi\n";
		cout<<"6. xoa SV o giua\n";
		cout<<"7. duyet danh sach SV\n";
		cout<<"8. sap xep dssv \n";
		cout<<" nhap lua chon :\n";
		int lc;cin>>lc;
		if(lc==1){
			insertFirst(head);
		}
		else if(lc==2){
			insertLast(head);
		}
		else if(lc==3){
			int pos;cin>>pos;
			insertMid(head,pos);
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
			inds(head);
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