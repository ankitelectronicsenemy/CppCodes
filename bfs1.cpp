#include<iostream>
using namespace std;
#include<queue>
  
 class node{
   public :
   int data;
   node *left;
   node *right;
   node(int d){
     data = d;
     left = NULL;
     right = NULL;
   }
 };
 node *builttree()
 {
    int d;
    cin>>d;
    if(d==-1)
    {
      return NULL;
    }
    node *root=new node(d);
    root->left = builttree();
    root->right= builttree();
    return root ;

 }
 
 void bfs(node *root)
 {
     queue<node*>q;

     q.push(root);
     q.push(NULL);
     while(!q.empty())
     {
         node *f= q.front();
         if(f == NULL)
         {
             cout<<endl;
             q.pop();
             if(!q.empty())
             {
                 q.push(NULL);
             }
         }
         else
         {
            cout<<f->data<<" ";
            q.pop();
            if(f->left)
            {
                 q.push(f->left);
            }
            if(f->right)
            {
                 q.push(f->right);
            }
         }
     }
     return ;
 }
 

 int main()
 {
   node *root = builttree();
   bfs(root);
   
 }