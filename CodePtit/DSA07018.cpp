#include<bits/stdc++.h>
using namespace std;
int cmp(pair<int,int> p1,pair<int,int> p2){
	return p1.second>p2.second;
}
int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s1,s2;
		getline(cin,s1);
		getline(cin,s2);
		vector<pair<int,int>> p1,p2,p3;
		int dem=0;
		vector<int> v;
		int res=0;
		for(int i=0;i<s1.size();i++){
			if(isdigit(s1[i])){
				res=res*10+(s1[i]-'0');
			}
			else{
				if(res!=0){
					v.push_back(res);
				}
				res=0;
			}
		}
		v.push_back(res);
		for(int i=0;i<v.size()-1;i+=2){
			int x=v[i],y=v[i+1];
			p1.push_back({x,y});
		}
		v.clear();
		res=0;
		for(int i=0;i<s2.size();i++){
			if(isdigit(s2[i])){
				res=res*10+(s2[i]-'0');
			}
			else{
				if(res!=0){
					v.push_back(res);
				}
				res=0;
			}
		}
		v.push_back(res);
		for(int i=0;i<v.size()-1;i+=2){
			int x=v[i],y=v[i+1];
			p2.push_back({x,y});
		}
		for(auto it:p1){
			p3.push_back(it);
		}
		for(auto it:p2){
			p3.push_back(it);
		}
		sort(begin(p3),end(p3),cmp);
		int cnt[1001]={0};
		for(int i=0;i<p3.size();i++){
			if(cnt[i]==0){
				int d=p3[i].first;
				for(int j=i+1;j<p3.size();j++){
					if(p3[i].second==p3[j].second){
						cnt[j]=1;
						d+=p3[j].first;
					}
				}
				cout<<d<<"*x^"<<p3[i].second;
				if(i!=p3.size()-2) cout<<" + ";
			}
		}
		cout<<endl;	
	}
}