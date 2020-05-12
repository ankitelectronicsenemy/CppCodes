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
 node *builtiterativetree(node *root)
 {
        queue<node *>q;
        q.push(root);
        node *f=q.front();
        if()
        {

        }
        else
        {
            
        }
        

    
 }
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

 
 

    class solution{
             
         public:
             vector<int>v;
             int max_level = -1;
             void helper(node *root,int level){
                 if(root==NULL)
                 {
                     return ;
                 }
                 
                 if(level>max_level){
                     max_level = level ;
                     v.push_back(root->data);
                     cout<<max_level<< " true"<<endl;;
                 }

                 helper(root->right,level+1);
                 helper(root->left,level+1);
             }
             vector <int> rightsideview(node *root)
             {
                 helper(root,0);
                 return v;
             }
             

            
    };
    
            


 

 int main()
 {
     int d ;
     cin>>d;
    node *root= new node(d);

   builtiterativetree(root);
  solution s;
  vector<int> x= s.rightsideview(root);
   
   for(int m :x)
   {
       cout<<m<<" ";
   }
   
 }