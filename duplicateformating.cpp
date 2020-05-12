#include<iostream>
using namespace std;
//#include<cstring>

void duplicateremoval(char str[100],int i)
{
    //base case 
   if(str[i] == '\0' )
   {
       return ;
   }
    if(str[i] == str[i+1])
    {
        cout<<str[i];
        cout<<"*";
        duplicateremoval(str,i+1);
    }
    else
    {
        cout<<str[i];
        duplicateremoval(str,i+1);
    }
    

}

int main()
{

    char str[100];
    cin>>str;
    duplicateremoval(str,0);

}
