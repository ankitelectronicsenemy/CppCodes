#include<iostream>
using namespace std;

char keypad[][10]={" ","abc","def","ghi","jkl","mno","pqrs","tuv","wx","yz"};


int phonekeypad(char *in,char *out,int i,int j)
{
    
// base case
    if(in[i] == '\0')
    {
            out[j]='\0';
            cout<<out<<" ";
            return 1;
            
    }
    int digit =  in[i]-'0';

    int k,ans = 0;
    
    for (k=0;keypad[digit][k] !='\0';k++)
    {
        out[j]= keypad[digit][k];
        ans += phonekeypad(in,out,i+1,j+1);
       
    }

    return ans;

}

int main()
{
    char in[100];
    char out[100];

    cin>>in;
    int ans = phonekeypad(in,out,0,0);
    cout<<endl;
    cout<<ans<<endl;
}