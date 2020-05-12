#include<iostream>
using namespace std;

 bool  ratinmaze(char ch[1001][1001],int n,int m,int i,int j,int sol[1001][1001])
 {
     if(i==n-1 and j==m-1 and ch[i][j]!='X')
     {
         sol[n-1][m-1]=1;
         for(int i=0;i<=n-1;i++)
        {
            for(int j=0;j<=m-1;j++)
            {
                cout<<sol[i][j]<<" ";
            }
            cout<<endl;
        }
        sol[n-1][m-1] = 0;
         return  true;
     }
        

    if(i>n-1 || j>m-1)
    {
        return false;
    }

    if(ch[i][j]=='X')
    {
        return false;
    }

    sol[i][j]=1;

   bool right= ratinmaze(ch,n,m,i,j+1,sol);
   if(right) {
       return true;
   }

   bool down= ratinmaze(ch,n,m,i+1,j,sol);
  
   sol[i][j]=0;

   if(right || down )
   {
       return true;
   }
    
   return false;


 
}

int main()
{
    int n,m;
    cin>>n;
    cin>>m;
    char ch[1001][1001];
    int sol[1001][1001]={0};
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>ch[i][j];
        }
    }

   bool ans =ratinmaze(ch,n,m,0,0,sol);
   if(!ans)
    cout<<-1;
    
}