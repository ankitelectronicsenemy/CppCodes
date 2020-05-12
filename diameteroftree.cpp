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

  int count(node *root)
  {
      if(root==NULL)
      {
          return 0;
      }
      return root->data +count( root->left) + count(root->right);

  }

  int diameter(node *root)
  {
      if(root == NULL)
      {
          return 0;
      }
      int h1 = height(root->left);
      int h2 = height(root->right);
      int op1 = h1+h2;
      int op2= diameter(root->left);
      int op3 = diameter(root->right);

      return max(op1,max(op2,op3));

  }
  class pairs{
    public:
    int height;
    int diameter;
  };

  pairs fastdia(node *root)
{
  pairs p;
  if(root == NULL)
  {
    p.height=p.diameter =0;
    return p;
  }
pairs left= fastdia(root->left);
pairs right =fastdia(root->right);

p.height= max(left.height,right.height)+1;
p.diameter = max(left.height+right.height,max(left.diameter,right.diameter));
return p;
} 
 

 int main()
 {
   node *root = builttree();
   
   //printpostorder(root);
   cout<<endl;
   //int x= diameter(root);
   //cout<< x ;
   cout<<endl;
   int y = count(root);
   cout<<y;
  cout<<endl;
   pairs p = fastdia(root);
   cout<<p.diameter;
 }