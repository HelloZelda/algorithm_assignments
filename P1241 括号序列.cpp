#include<bits/stdc++.h>
using namespace std;
stack <int> str;
bool YES[105];
int main(){
	string s;
	cin >> s;
	int len = s.length();
	for(int i = 0,k;i < len;i ++)
	{
		if(s[i] == ']')
		{
			if(str.empty()) 
                continue;
			k = str.top();
			if(s[k] == '[') 
			{
				YES[k] = YES[i] = 1;
				str.pop();
			}
		}
		else if(s[i] == ')')
		{
			if(str.empty()) 
                continue;
			k = str.top();
			if(s[k] == '(') 
			{
				YES[k] = YES[i] = 1;
				str.pop();
			}
		}
		else
			str.push(i);
	}
	for(int i = 0;i < len;i ++)
	{
		if(YES[i]) 
            cout << s[i];
		else
		{
			if(s[i] == '(' || s[i] == ')') cout<<"()";
			else cout<<"[]";
		}
	}
	return 0;
}
