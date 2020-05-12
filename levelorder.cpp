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

 int height(node *root)
 {
     if(root == NULL){
         return 0;
     }
     int ls=height(root->left);
     int rs=height(root->right);
     return ls+rs+1; 
 }

 void printklevel(node *root,int k)
 {
     if(root==NULL)
     {
         return ;
     }
     if(k==1)
     {
         cout<<root->data<<" ";
     }
     printklevel(root->left,k-1);
     printklevel(root->right,k-1);
     return ;
 }
 void printalllevel(node *root)
 {
     int h=height(root);
     for(int i=1;i<=h;i++)
     {
         printklevel(root,i);
         cout<<endl;
     }

 }

 int main()
 {
   node *root = builttree();
   printpreorder(root);
   cout<<endl;
   printinorder(root);
   cout<<endl;
   printpostorder(root);
   cout<<endl;
   printklevel(root,3);
   printalllevel(root);
 }