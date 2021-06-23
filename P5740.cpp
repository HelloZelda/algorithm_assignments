#include<cstring>
using namespace std;
struct students
{
	string name;
	int C,M,E,sum;
};
students a[1001];
int main()
{
	int n,Max=-1,fl;
	cin>>n;
	for(int i=0;i<n;i++)
  {
		cin>>a[i].name>>a[i].C>>a[i].M>>a[i].E;
		a[i].sum=a[i].C+a[i].M+a[i].E;
	}
	for(int i=0;i<n;i++)
  {
		if(a[i].sum>Max)
		{
			Max=a[i].sum;
			fl=i;
		}
	}
	cout<<a[fl].name<<" "<<a[fl].C<<" "<<a[fl].M<<" "<<a[fl].E;
	return 0;
}
