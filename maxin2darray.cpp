
#include<iostream>
using namespace std;

void maxi(int **arr,int n,int m)
{
int i=0;
int j=m-1;
int key;
cout<<"enter the element to search in 2d array : ";

if(arr[i][j]>key)
{
    i++;
}else if(arr[i][j]<key)
{
    j--;
}
else if(arr[i][j]==key)
{
    cout<<"element found";
}
else 
cout<<" element is not present :";
return ;

}
int main()
{   
    cout<<"enter the no of rows and columns ";
	int n,m;
	cin>>n>>m;
	int **arr=new int*[n];
	for(int i=0;i<n;i++)
	{
		arr[i]=new int [m];
	}
	for(int i=0;i<n;i++)
	{
		for (int j=0;j<m;j++)
		{
			cin>>arr[i][j];
		}
	}
	
	maxi(arr,n,m);
}