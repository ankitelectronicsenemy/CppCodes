using namespace std;
#include<iostream>
#include<bitset>

bitset<30> col,dl,dr;

void solve(int r,int n,int &ans)
{
    if(r==n)
    {
        ans++ ;
        return  ;
    }
     
    for(int c=0;c<n;c++)
    {
        if((!col[c]) and (!dl[r-c+n-1]) and (!dr[r+c]))
        {
            col[c] = dl[r-c+n-1] = dr[r+c] = 1;
            solve(r+1,n,ans);
            col[c] = dl[r-c+n-1] = dr[r+c] = 0 ;
        }
    } 
}

int main()
{
    int n;
    cin>>n;

    int ans=0;
     solve(0,n,ans);
    cout<<ans<<endl;
}