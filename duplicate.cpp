using namespace std;
#include<iostream>
#include<cstring>

void removeduplicates(char *ch)
{
    int len =strlen(ch);
    
    if(len==1 or len==0)
    {
        return ;
    }    
    int prev=0;
    int curr=1;
    while(curr <= len)
    {
        if(ch[prev]!=ch[curr])
        {
                prev++;
                ch[prev]=ch[curr];
                curr++;
                //prev++;
        }
        else
        {
            curr++;
            //prev++;
        }
        
    }
    return ;
}
int main()
{
    char ch[100];
    cin.getline(ch,100);
    removeduplicates(ch);

    cout<<ch;
}