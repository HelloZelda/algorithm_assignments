// P1908 逆序对
#include<bits/stdc++.h>
using namespace std;
int arr[10000000],sum;
void mergeSort(int arr[],int left,int right)
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
