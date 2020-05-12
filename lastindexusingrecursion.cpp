#include<iostream>
using namespace std;

int  last(int *a,int n,int key,int i)
{
    if(i==n)
    return -1;
    
    int r=last(a,n,key,i+1);
    if((a[i]==key) and (r== -1) )
    {
        return i;
    }
    return r;

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

    cout<<last(a,n,key,0);
}