#include<iostream>
using namespace std;

char spellings[][10]={"zero","one","two","three","four","five","six","seven","eight","nine"};

int  print(int n)
{
    if(n==0)
      {
           return 0 ;
      }
    else
       print(n%10);
    
    cout<<spellings[n%10]<<" ";
    cout<<" hi";
}

int main()
{

    long int n;
    cin>>n;
    print(n);
}