using namespace std;
#include<iostream>

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(int i=0;i<n;i+=2)
    {
        if(a[i]<a[i-1] and i !=0)
        {
            swap(a[i],a[i-1]);
        }
        if(a[i]<a[i+1] and i !=n-1)
        {
            swap(a[i],a[i+1]);
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }

}