#include<bits/stdc++.h>
using namespace std;
int main()
{

	string s;
	vector<int> v;
	while(cin>>s){
		if(s=="push"){
			int x;cin>>x;
			v.push_back(x);
		}
		else if(s=="pop"){
			if(v.size()>0){
				v.pop_back();
			}
		}
		else if(v.size()!=0){
			for(int i=0;i<v.size();i++){
				cout<<v[i]<<" ";
			}
			cout<<endl;
		}
		else if(v.size()==0){
			cout<<"empty"<<endl;
		}
	}
}