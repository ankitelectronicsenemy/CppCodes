#include<iostream>
using namespace std;
#include<vector>

int main()
{
    vector<int>a;
    vector<int>b(5,10);
    vector<int>c(b.begin(),b.end());
    vector<int>d{1,2,3,4,5};

    // 1 way of iteration
    for(int i=0;i<c.size();i++)
    {
        cout<<c[i]<<" , ";
    }
   cout<<endl;
    //2 way of iteration
    for(auto it=b.begin();it != b.end();it++)
    {
        cout<< *it<<" , ";
    }
    cout<<endl;
    //for each loop
    for(int x:d)
    {
        cout<<x<<" , ";
    }
    vector<int>v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int no;
        cin>>no;
        v.push_back(no);
    }
    for(int x:v)
    {
        cout<<x<<" , ";
    }
    
}
