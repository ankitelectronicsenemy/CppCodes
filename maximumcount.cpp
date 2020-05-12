#include<iostream>
using namespace std;
#include<cstring>

void maximumcount(char *ch)
{
    int freq[255]={0};
    int count=0;
    int i=0;
    while (ch[i]!='\0')
    {
        int x = (int) ch[i];
        freq[x]++;
        i++;
    }
    int largest = -1;
    int idx = -1;
    for(int i=0;i<255;i++)
    {   
        if(freq[i]> largest){
            largest = freq[i];
            idx = i;
        }
        
    }
    char ansc = (char)idx;
    cout<<ansc;
}


int main()
{
    char ch[100];
    cin>>ch;
    maximumcount(ch);
}