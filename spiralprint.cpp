#include<iostream>
using namespace std;


void spiral_print(int a[100][100],int m , int n)
{
	int sr=0;
	int sc=0;
	int er=m-1;
	int ec=n-1;
	while(sr<=er and sc<=ec)
	{
		for(int i=sr;i<=er;i++)
		{
			cout<<a[i][sc]<<" , ";
		}
		sc++;
		for(int i=sc;i<=ec;i++)
		{
			cout<<a[er][i]<<" , ";
		}
		er--;
		if(sc<=ec)
		{
		
		for(int i=er;i>=sr;i--)
		{
			cout<<a[i][ec]<<" , ";
		}
	
		ec--;
	}
		if(sr<=er )
		{
		
		for(int i=ec;i>=sc;i--)
		{
			cout<<a[sr][i]<<" , ";
		}
	}
		sr++;
	}

    cout<< "  END ";
}



int main()
{	
	
	int a[100][100] = {0};
	int m,n;
	
	cin>>m>>n;
	for(int i=0;i<m;i++)
	{
		for(int r=0;r<n;r++)
		{
			cin>>a[i][r];
		}
	}
	spiral_print(a,m,n);
	
	return 0;
} 
