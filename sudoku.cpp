#include<iostream>
using namespace std;
#include<cmath>
bool canweplace(int a[][100],int i,int j,int n,int num)
{

    //check and row along the cell
    for(int x=0;x<n;x++)
    {
        if(a[x][j]==num or a[i][x]==num)
        {
            return false;
        }
    }
    int rn=sqrt(n);
    int sx=(i/rn)*rn;
    int sy=(j/rn)*rn;

    for(int x=sx;x<(sx+rn);x++)
    {
        for(int y=sy;y<(sy+rn);y++)
        {
            if(a[x][y]==num)
            {
                return false;
            }
        }
    }
    

    return true;
}


bool solvesudoku(int a[][100],int n,int i,int j)
{
    if(i==n)
    {
        //print sudoku
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
        return true;
    }

    //check row
    if(j==n)
    {
      return  solvesudoku(a,n,i+1,0);
    }
    //if element already exists
    if(a[i][j]!=0)
    {
       return solvesudoku(a,n,i,j+1);
    }
    //if we can place the element
    for (int num=1;num<=n;num++)
    {
        if(canweplace(a,i,j,n,num))
        {
            a[i][j]=num;
            bool couldwesolve= solvesudoku(a,n,i,j+1);
            if(couldwesolve==true)
            {
                return true;
            }
        }
    }
//backtracking
    a[i][j]=0;
    return false;

}

int main()
{

    int n;
    cin>>n;
    //cin>>m;
    int a[100][100];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];

        }
    }

    solvesudoku(a,n,0,0);

}