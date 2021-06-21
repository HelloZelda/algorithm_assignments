// 洛谷 P1923 [深基9.例4] 求第 k 小的数
// 请提交完整代码
// commit格式：姓名-本地测试结果-洛谷得分
// 例如：Sam-本题测试ok-洛谷得分100
#include<bits/stdc++.h>
using namespace std;
int arr[5000005],k;
void quickSort(int l,int r)
{
	int i=l,j=r,mid=arr[(l+r)/2];
	do
	{
		while(arr[j]>mid)
			j--;
		while(arr[i]<mid)
			i++;
		if(i<=j)
		{
			swap(arr[i],arr[j]);
			i++;
			j--;
		}
	}
	while(i<=j);
	if(k<=j) quickSort(l,j);
	else if(i<=k) quickSort(i,r);
	else
	{
		printf("%d",arr[j+1]);
	}
}
int main()
{
	int n;
	scanf("%d%d",&n,&k);
	for(int i=0;i<n;i++)
		scanf("%d",&arr[i]);
	quickSort(0,n-1);
}
