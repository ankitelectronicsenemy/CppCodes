#include<iostream>
using namespace std;
#include<algorithm>


bool subsetzero(int *a,int n,int i,int target, bool flag)
{
    if (flag and target == 0){
        return true;
    }

    if(i < 0) {
        return false;
    }
    
    bool incl = false, excl = false;

    incl = subsetzero(a, n, i-1, target + a[i], true);

    if(incl){
        return true;
    }

    if(!flag) {

        excl = subsetzero(a, n, i-1, target, false);

    } else {

        excl = subsetzero(a, n, i-1, target, true);

    }

    return excl;
    
    
}

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        int a[1000];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        
     bool success =subsetzero(a,n,n-1,0, false);

     if(success){
         cout<<"Yes"<<endl;
     } else {
         cout<<"No"<<endl;
     }
    }
      
      

}