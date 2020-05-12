#include<iostream>
#include<algorithm>
using namespace std;
#include<vector>
bool compare(pair<int,int>p1,pair<int ,int>p2)
{
    int d1=p1.first*p1.first + p1.first*p1.first ;
    int d2=p2.first*p2.first + p2.first*p2.first ;

    if(d1==d2)
    {
        return p1.first<p2.first;
    }
    return d1<d2;
}

int main()
{
    int n;
    cin>>n;
    vector<pair<int,int>>v;
    for(int i=0;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        v.push_back(make_pair(x,y));
    }
    sort(v.begin(),v.end(),compare);
    for(auto p:v)
    {
        cout<<"car"<<" " <<p.first<<" "<<p.second<<endl;
    }
}