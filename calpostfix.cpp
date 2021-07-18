#include<bits/stdc++.h>
using namespace std;


int calres(string s)
{
	stack<int> st;
	
	for(int i=0;i<s.length();i++)
	{
		int x,y;
		if(s[i]=='+')
		{
			x=st.top(); st.pop();
			y=st.top(); st.pop();
			
			st.push(y+x);
		}
		else if(s[i]=='-')
		{
			x=st.top(); st.pop();
			y=st.top(); st.pop();
			
			st.push(y-x);
		}
		else if(s[i]=='*')
		{
			x=st.top(); st.pop();
			y=st.top(); st.pop();
			
			st.push(y*x);
		}
		else if(s[i]=='/')
		{
			x=st.top(); st.pop();
			y=st.top(); st.pop();
			
			st.push(y/x);
		}
		else
		{
			st.push(s[i]-48);
		}
	}
	return st.top();
}
int main()
{
	string s; cin>>s;
	
	cout<<calres(s);
}
