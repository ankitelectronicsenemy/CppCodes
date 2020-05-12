#include<iostream>
using namespace std;

  
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
 void printpreorder(node *root)
 {
   if(root==NULL)
   {
     return ;
   }
   cout<<root->data<<" ";
   printpreorder(root->left);
   printpreorder(root->right);
 }
 void printinorder(node *root)
 {
   if(root==NULL)
   {
     return ;
   }
   printinorder(root->left);
   cout<<root->data<<" ";
   printinorder(root->right);
 }

 void printpostorder(node *root)
 {
   if(root == NULL)
   {
     return ;
   }
   printpostorder(root->left);
   printpostorder(root->right);
   cout<<root->data<<" ";
 }

 int main()
 {
   node *root = builttree();
   printpreorder(root);
   cout<<endl;
   printinorder(root);
   cout<<endl;
   printpostorder(root);
 }