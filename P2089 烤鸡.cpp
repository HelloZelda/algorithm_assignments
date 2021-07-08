#include<iostream>
#include<cstring> 
using namespace std;
int n;
int ans=0,a[11],b[50000][11];
void init()
{
    cin>>n;
    memset(a,0,sizeof(a));
}
void DFS(int dep,int fsum)
{
    if(dep>10)
    {  
        int num=a[1]+a[2]+a[3]+a[4]+a[5]+a[6]+a[7]+a[8]+a[9]+a[10];
        if(num==n)
        {
            ans++;
            for(int i=1;i<=10;i++)
               b[ans][i]=a[i];
        }
        return;
    }
    for(int i=1;i<=3;i++)
    {
        if(fsum+i>n) break;
        a[dep]=i;
        DFS(dep+1,fsum+i);
        a[dep]=0;
    }    
}
int main()
{  
   init();
   DFS(1,0);
   cout<<ans<<"\n";
   for(int i=1;i<=ans;i++)
      {
            for(int j=1;j<=10;j++)
             cout<<b[i][j]<<" ";
             cout<<"\n";
      }
    return 0;
}
