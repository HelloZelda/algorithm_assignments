#include<iostream>
#include<queue>
#include<cstring> 
#include<cstdio>
using namespace std;
int map[100001];
struct kfc{
	int time;
	int guji;
};
int n,k,t,x,cnt;
int main()
{
	kfc e;
	queue<kfc> q;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>t>>k;
		e.time=t;
		for(int j=1;j<=k;j++)
		{
			cin>>e.guji;
			q.push(e);
			if(map[e.guji]==0) cnt++;
			map[e.guji]++; 
		}
		while(t-q.front().time>=86400)
		{
			map[q.front().guji]--;
			if(map[q.front().guji]==0) cnt--;
			q.pop();
		}
		cout<<cnt<<endl;
	}
	return 0;
}  
