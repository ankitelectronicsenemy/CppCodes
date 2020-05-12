#include<iostream>
using namespace std;

void asciidifference(char *in )
{
int i=0;

for(i=0;in[i+1]!='\0';i++)
{
    int x= ((int) in[i+1]) - ((int) in[i]);
   
    cout<<in[i];
    cout<<x;
    
}
cout<<in[i];
cout<<endl;


}

int main()
{
    char in[1001];
    //int n;
    cin>>in;
    //int n= sizeof(in)/sizeof(char);
    asciidifference(in);

}