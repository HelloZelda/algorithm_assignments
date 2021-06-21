// 洛谷 P1923 [深基9.例4] 求第 k 小的数
// 请提交完整代码
// commit格式：姓名-本地测试结果-洛谷得分
// 例如：Sam-本题测试ok-洛谷得分100
#include<bis/stdc++.h>
using namespace std;	
int n,arr[10000],k; 
void quickSort(int left,int right)
{
	if(left>=right)
	{
		return;
	 } 
	int pi=arr[(left+right)/2],i=left,j=right;
	if(pi==k)
	{
		return arr[pi];
	}
	while(i<=j)
	{
		while(arr[i]<pi)
		{
			i++;
		}
		while(arr[j]>pi)
		{
			j--; 
		}
		if(i<=j)
		{
			swap(arr[i++],arr[j--]);
		}
	}
	quickSort(left,j);
	quickSort(i,right)
}
int main()
{	
	scanf("%d",&n,&k);
	for(int i=0;i<=n;i++)
	{
		scanf("%d",&arr[i]);
	}
	return 0;
}
