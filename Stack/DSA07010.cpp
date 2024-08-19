#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		stack<string> st;
		for(int i=s.size()-1;i>=0;i--){
			if(s[i]>='A' && s[i] <='Z'){
				st.push(string(1,s[i]));
			}
			else{
				string res="";
				string o1=st.top(); st.pop();
				string o2=st.top(); st.pop();
				res=o1+o2+s[i];
				st.push(res);
			}
		}
		cout<<st.top()<<endl;
	}
}