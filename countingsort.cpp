#include<iostream>
using namespace std;

void countingsort(int *a,int n)
{
	int largest=-1;
	for(int i=0;i<n;i++)
	{
		largest=max(largest,a[i]);
	}
int *freq=new int[largest+1]{0};

for(int i=0;i<n;i++)
{
	freq[a[i]]++;
}

int j=0;
for(int i=0;i<=largest;i++)
{
	while(freq[i]>0)
	{
		a[j]=i;
		freq[i]--;
		j++;
	}
}
}
int main() {

	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	countingsort(a,n);

	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}

	return 0;
}