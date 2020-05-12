#include<iostream>
using namespace std;


bool ispalindrome(int *a,int i,int j,int n)
{
    
    while(i<j)
    {
        if(a[i]==a[j])
        {
            ispalindrome(a,i+1,j-1,n);
        }
        else 
        return false;

        return true;
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

    if(ispalindrome(a,0,n-1,n))
    {
        cout<<"True";
    }
    else
    {
        
            cout<<"false";
        
    }
    

}