#include<iostream>
using namespace std;

void sumitup(int *a,int n,int i,int target,int sum)
{
   if(sum == target)
   {
     cout<<" success"<<" ";
     //sum = sum -a[i];
     return;
   }

   // base case
   if(i==n)
   {
       cout<<" fail";
       return ;
   }

   if(sum > target) {
     return;
   }
   
     //int sum = 0;
   
   
  //  int arr[n]={0};

    // include in the sum
    if(sum < target)
    {
         
         sumitup(a,n,i+1,target, sum + a[i]);
    }

    //exclude in the sum
     sumitup(a,n,i+1,target,sum);
    
 

    return ;
}

int main()
{
        int n;
        cin>>n;
        int a[1000];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int target;
        cin>>target;
        sumitup(a,n,0,target,0);
}