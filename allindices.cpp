#include<iostream>
using namespace std;
void allindices(int a[],int i,int n,int key)
{
    
    //base case
    if(i == n)
    {
        for(int m=0;m<n;m++)
        {
            if(a[m] == 1 )
            {
                cout<< m <<" ";
            }
        }
        return ;
    }

    
    if(a[i] == key )
    {
        a[i]=1;
        allindices(a,i+1,n,key);
    }
    else
    {
        a[i]=0;
        allindices(a,i+1,n,key);
    }
    
    
    
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int key;
    cin>>key;

    allindices(a,0,n,key);
}