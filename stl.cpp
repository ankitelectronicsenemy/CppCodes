#include<iostream>
using namespace std;
#include<algorithm>

int main()
{
    int a[6] ={1,10,11,12,13,14};
    
    int key=11;
   int  n = sizeof(a)/sizeof(int)-1;
    auto it = upper_bound(a,a+n,14);
    auto it1= find(a,a+n,11);
    cout<<it-a<<endl;
    cout<< it1<<endl;
    cout<< *it<<endl;

    pair<int,char>p;

    p.first =10;
    p.second='B';

    cout<<p.first<<endl;
    cout<<p.second<<endl;

    pair<int,char>p2(p);
    cout<<p2.first;
    cout<<p2.second;
    

}