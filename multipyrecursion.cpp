#include<iostream>
using namespace std;

int multiply(int a,int b)
{
if(b==0)
return 0;
else
{
    return(a+multiply( a, b-1));
}



}
int main()
{
int a;
int b;
cin>>a;
cin>>b;

cout<<multiply(a,b);

}