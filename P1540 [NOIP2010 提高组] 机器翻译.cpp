#include<bits/stdc++.h>
using namespace std;
int t,ans = 0;
bool vim[666666];
int main(){
    queue <int> str; 
	int n,m;;
	cin >> m >> n;
	for(int i = 1;i <= n; i++){
		cin >> t;
		if(!vim[t]){
			str.push(t);
			ans++;
			vim[t] = 1;
		}
	
		if(str.size() > m)
        {
			vim[str.front()] = 0;
			str.pop();
		}
			
	}
	cout << ans;
	return 0;
}
