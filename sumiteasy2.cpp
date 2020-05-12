#include<iostream>
using namespace std;

bool sumitup(int *a,int n,int idx,int target,int sum, bool *sol)
{   
    if(sum == 0){
        for(int i=0 ; i<n ; i++) {
            if(sol[i]) {
                cout<<a[i]<<" ";
            }
        }
        cout<<endl;
        return true;
    }

    if(idx > n-1) {
        return false;
    }

    if(sum < 0){
        return false;
    }

    bool incl = false, excl = false;


    sol[idx] = 1;
    incl = sumitup(a, n, idx + 1, target, sum-a[idx], sol);
    /*
    if(idx == 1 || idx == 4){
        for(int i=0 ; i<5 ; i++) {
                cout<<sol[i]<<" ";
        }
        cout<<" | "<<idx<<" | "<<sum<<endl;
    }
    */
    sol[idx] = 0;
    

    excl = sumitup(a, n, idx + 1, target, sum, sol);

    return incl or excl;
   
}



int main()
{
        int n;
        cin>>n;
        int a[1000];
        bool sol[1000] = {0};
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int target;
        cin>>target;
        sumitup(a,n,0,target,target, sol);
}