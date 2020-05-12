#include<iostream>
using namespace std;


void insertionsort(int a[],int n)
{

    for(int i=1;i<=n-1;i++)
    {
        int e=a[i];
        int j=i-1;
        while((j>=0) and (a[j]>e))
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=e;
    }
}


int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<=n-1;i++)
    {
        cin>>a[i];
    }
    insertionsort(a,n);
    for(int i=0;i<=n-1;i++)
    {
        cout<<a[i]<<" ";
    }

}