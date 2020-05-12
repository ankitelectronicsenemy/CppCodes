#include<iostream>
using namespace std;
#include<string>

int subsequences(char *in ,char *out,int i,int j)
{
    if(in[i]=='\0')
    {   
        out[j]='\0';
        cout<<out<<" ";
        return 1;
    }
        
    int s1 = 0,s2 = 0;  
    s1 = subsequences(in,out,i+1,j);

     out[j]=in[i];
    // include current character
    s2 = subsequences(in,out,i+1,j+1);

    return s1 + s2;
}


int main()
{

    char in[100];
    cin>>in;
    
    char out[100];
    int ans = subsequences(in,out,0,0);

    cout<<endl;
    cout<<ans;

}