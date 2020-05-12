using namespace std;
#include<iostream>
#include<bits/stdc++.h>

void dec(int n)
{
 if(n==0)
 return;
 else
 {
     cout<<n<<" "<<endl;
     dec(n-1);
 }
}
void incrt(int n)
{
    if(n==0)
    return;
    else
    {
        incrt(n-1);
        cout<< n<<" ";
    }
}

int main()
{
    int n;
    cin>>n;
    cout<<"decreasing function";
    dec(n);
    cout<<"increasing function";
    incrt(n);

}