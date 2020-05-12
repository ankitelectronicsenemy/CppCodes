#include<iostream>
using namespace std;

void arraytostring(char str[])
{
   
    int arr[100];
    int i=0;
    int size = 0;
    while(str[i] != '\0')
    {
        arr[i]= (int)str[i] - '0';
        i++ ;
        size++;
    }
    int n =sizeof(arr)/sizeof(int);

    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{

    char str[100];
    cin>>str;
    arraytostring(str);

}