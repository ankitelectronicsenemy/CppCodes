#include<bits/stdc++.h>

    
#include<iostream>
using namespace std;

bool issort(int *arr,int n)
{
 if(n==1)
 return true;
 else if(arr[0]<arr[1] and issort(arr+1,n-1))
 return true;
 else
 return false;

}

int main() {

    
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    
    
    if(issort(arr,n))
    {
    	cout<<"true";
	}
	else
	{
	cout<<"false";
}
   

    return 0;
}