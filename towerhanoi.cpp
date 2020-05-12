#include<iostream>
using namespace std;


void towerofhanoi(int n,char src,char dest,char helpr)
{
  if(n==0)
  return ;

  towerofhanoi(n-1,src,helpr,dest);
  cout<< "moving ring "<<n<<" from "<<src <<" to "<<dest<<endl;
  towerofhanoi(n-1,helpr,dest,src);

}
int main()
{
  int n;
  cin>>n;
  towerofhanoi(n,'A','B','C');

}