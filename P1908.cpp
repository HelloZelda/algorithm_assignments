// P1908 逆序对
// 请提交完整代码
// commit格式：姓名-本地测试情况-洛谷得分
// 例：Sam-本地测试通过-洛谷得分100
// Pull Request请提交到对应分支，请勿提交到main分支！
#include<bits/stdc++.h>
using namespace std;
long long arr[10000000],sum;
void mergeSort(long long arr[],int left,int right)
{
	if(left>=right)
	{
		return;
	}
	int mid=(left+right)/2;
	mergeSort(arr,left,mid);
	mergeSort(arr,mid+1,right);
	int i=left,j=mid+1,pos=0,temp[right+left-1];
	while(i<=mid&&j<=right)
	{
		if(arr[i]<=arr[j])
		{
			temp[pos++]=arr[i++];
		}
		else
		{
			temp[pos++]=arr[j++]; 
            		sum+=mid-i+1;                                                                                                                                                                               
		}
	}
	while(i<=mid)
	{
		temp[pos++]=arr[i++];
	}
	while(j<=right)
	{
		temp[pos++]=arr[j++];
	}
	copy(temp,temp+right-left+1,arr+left);
}
int main()
{
	int a,i;
	cin>>a;
	for(i=1;i<=a;i++)
	{
		cin>>arr[i];
	}
	mergeSort(arr,1,a);
		cout<<sum;
	return 0;
}
