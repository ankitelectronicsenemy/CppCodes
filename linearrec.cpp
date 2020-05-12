#include<iostream>
using namespace std;

int linearsearch(int *a, int i,int n,int key)
{
    if(n==1)
    return -1;
    
    if(a[i]==key)
    return 1;

    return linearsearch(a,i+1,n,key);

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
    cout<<linearsearch(a,0,n,key);

}