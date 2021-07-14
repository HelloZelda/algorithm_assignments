#include<bits/stdc++.h>
using namespace std;
int num[9][9];              
bool flag;                 
bool jsd(int n,int k)
{        
    int x=n/9;                  
    int y=n%9;                    
    for(int i=0;i<9;i++)
    {
        if(num[i][y]==k)
            return false;            
        else
        if(num[x][i]==k)
            return false;         
    }
    int fx=(x/3)*3;
    int fy=(y/3)*3;
    for(int i=fx;i<fx+3;i++)
    {                              
        for(int j=fy;j<fy+3;j++)
        {
            if(num[i][j]==k)
                return false;
        }
    }
    return true;                         
}
void dfs(int n){
    if(n>80)
        flag=false;
    if(num[n/9][n%9])
        dfs(n+1);         
    else if(flag)
    {
        int x=n/9;
        int y=n%9;
        for(int tem=1;tem<10;tem++)
        {
            if(jsd(n,tem))
            {               
                num[x][y]=tem;
                dfs(n+1);
            }
            if(flag)
                num[x][y]=0;     
                    
        }
    }
}
int main()
{                        
    int i,j,k,n;
    for(i=0;i<9;i++)
    {
        for(j=0;j<9;j++)
        {
            cin>>num[i][j];
        }
    }
    flag=true;
    dfs(0);
    cout<<"answer";
    for(i=0;i<9;i++)
    {
        for(j=0;j<9;j++)
        {
            cout<<num[i][j];
        }
        cout<<endl;
    }
    return 0;
}
