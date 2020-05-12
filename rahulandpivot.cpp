#include<iostream>
using namespace std;

int find(int *a,int n ,int key)
{
    int s=0;
    int e=n-1;

    while(s<=e)
    {
        int mid=(s+e)/2;

        if(key==a[mid])
        {
            return mid;
        }
            else if(a[s]<=a[mid])
            {
                if((key>=a[s]) and (key<=a[mid]))
                {
                     e=mid-1;
                }
                else
                {
                    s=mid+1;
                }
            
        }
        else
        {
            if((key>=a[mid]) and (key<=a[s]))
            {
                s=mid+1;
            }
            else
            {
                e=mid-1;
            }
            
        }
        
    }
    return -1;
}

int main()
{
 int n;
 cin>>n;
int a[n];
for (int i=0;i<n;i++)
{
    cin>>a[i];
}
int key;
cin>>key;

cout<<find(a,n,key);


}