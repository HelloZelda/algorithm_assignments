#include<iostream>
#include<algorithm>
using namespace std;
int a[10000];
int main()
{
    int n,m;
    cin>>n>>m;
    for (int i=0;i<n;i++)
        {
            cin>>a[i];
        }
    int cnt=0;
    while (cnt<m)
    {
        next_permutation(a,a+n);
        cnt++;
    }
    for (int i=0;i<n;i++) 
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
