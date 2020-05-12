using namespace std;
#include<iostream>

void piyush_park(char c[100][100],int n,int m,int k,int s)
{
    
    bool success=true;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            char ch=c[i][j];
            if(s<k)
            {
                success=false;
                break;
            }

            if(ch=='.')
            {   
                s=s-2;
                
            }
            else if(ch=='*')
            {   
                s=s+5;
                
            }
            else
            {   
                break ;
            }

            if(j!= m-1)
            {
                s=s-1;
            }
            
        }
        
    }
    if(success)
        {
            cout<<"Yes"<<endl;
            cout<<s;
        }
     else 
     {
         cout<<"No"; 
     }
       
}

int main()
{
    char c[100][100]={0};
    int n;
    int m;
    int k,s;
    cin>>n;
    cin>>m;
    cin>>k;
    cin>>s;
    
    for(int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            cin>>c[i][j];

        }
    }
    
    piyush_park(c,n,m,k,s);

}