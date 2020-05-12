#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

int main()
{
    vector<int>d{1,2,3,4,5};
    d.push_back(14);
    d.pop_back();

    
    //insert in middle 

    d.insert(d.begin()+3,100);
    d.insert(d.begin()+3,4,100);
    // erase the data 
    d.erase(d.begin()+2,d.begin()+5);
    //clear the data
    d.clear();
    for(int x:d)
    {
        cout<<x<<",";
    }
    if(d.empty())
    {
        cout<<"empty vector ";
    }
    cout<<endl;
    d.push_back(10);
    d.push_back(11);
    d.push_back(12);
    d.push_back(13);

    cout<<d.front()<<endl;

    cout<<d.back()<<endl;

    int n;
    cin>>n;
    vector<int>v;
    v.reserve(1000);
    for(int i=0;i<n;i++)
    {
        int no;
        cin>>no;
        v.push_back(no);
        cout<<v.capacity()<<endl;
    }

    for(int x:v)
    {
        cout<<x<<" ";
    }


}

