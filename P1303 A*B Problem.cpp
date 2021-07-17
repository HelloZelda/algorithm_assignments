#include<bits/stdc++.h>
using namespace std;
int a[100005],b[100005],c[100005];
int main()
{https://github.com/HelloZelda/algorithm_assignments
    string s1,s2;
    cin>>s1>>s2;
    if(s1[0]=='0' || s2[0]=='0')
    {
        cout<<0;
        return 0;
    }
    int l1=s1.size(),l2=s2.size();
    memset(a,0,sizeof(a));
    memset(b,0,sizeof(b));
    memset(c,0,sizeof(c));
    for(int i=0;i<=l1-1;i++)
        a[l1-i]=s1[i]-'0';
    for(int i=0;i<=l2-1;i++)
        b[l2-i]=s2[i]-'0';
        int i,k=0,d,e,j;
    for(i=1;i<=l2;i++)
    {
        k=0;
        for(j=1;j<=l1;j++)
        {
            c[i+j-1]=a[j]*b[i]+c[i+j-1];
            k=c[i+j-1]/10;
            c[i+j-1]%=10;
            c[i+j]+=k;
        }
    }
    k=l1+l2;
    for(int j=l1+l2;j>=2;j--)
    if(c[j]!=0)
    break;
    else k--;
        for(int j=k;j>=1;j--)
    cout<<c[j];
    return 0;
}
