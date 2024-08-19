#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		stack<int> st;
		for(int i=0;i<s.size();i++){
			if(s[i]>='0' && s[i] <='9'){
				st.push(s[i]-'0');
			}
			else{
				int x;
				int o1=st.top(); st.pop();
				int o2=st.top(); st.pop();
				if(s[i]=='+') x=o1+o2;
				if(s[i]=='-') x=o2-o1;
				if(s[i]=='*') x=o1*o2;
				if(s[i]=='/') x=o2/o1;
				st.push(x);
			}
		}
		cout<<st.top()<<endl;
	}
}