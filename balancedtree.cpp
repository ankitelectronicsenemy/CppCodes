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
  class hbpairs{
    public:
    int height;
    bool balance;
  };


hbpairs isheightbalance(node *root)
{
    hbpairs p;
    if(root==NULL)
    {
        p.height=0;
        p.balance= true;
        return p;
    }

    hbpairs left=isheightbalance(root->left);
    hbpairs right=isheightbalance(root->right);

    p.height = max(left.height , right.height) +1;

    if(abs(left.height - right.height)<=1 and left.balance and right.balance)
    {
        p.balance = true ;
    }
    else 
    {
        p.balance = false;
    }
  return p;

}
int replacesum(node *root)
{
    if(root == NULL)
    {
        return 0 ;
    }
    if(root->left==NULL and root->right==NULL)
    {
        return root->data;
    }

    int leftsum=replacesum(root->left);
    int rightsum=replacesum(root->right);
    int temp= root->data;
    root->data = leftsum+rightsum;
    return temp + root->data;

}
 

 int main()
 {
   node *root = builttree();
   
   printpostorder(root);
   cout<<endl;
   //int x= diameter(root);
   //cout<< x ;
   //cout<<endl;
   //int y = count(root);
   //cout<<y;
   //cout<<endl;
   
    replacesum(root);
   printpostorder(root);
   cout<<endl;

  hbpairs h1 = isheightbalance(root);
    cout<<h1.height<<endl;
    cout<<h1.balance;
 }