#include<iostream>
using namespace std;
#include<queue>
#include<sstream>
#include<string>
  
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
 node *builtiterativetree(string str)
 {
        if(str.length() == 0 or str[0] == -1)
        {
          return 0;
        }

    vector<string> ip;
    istringstream iss (str);

    for(string str ; iss>>str; )
    {
        ip.push_back(str);
    }

    node *root = new node(stoi(ip[0]));

    queue<node *> queue ;
    queue.push(root);


    int i=1;
    while(!queue.empty() and i<ip.size())
    {
      node *cnode = queue.front();
      queue.pop();

      string curval = ip[i];
      if(stoi(curval) != -1)
      {
        cnode->left = new node(stoi(ip[i]));
        queue.push(cnode->left);
      }
    

    i++ ;
    if(i > ip.size())
       break ;
    curval = ip[i] ;

    if(stoi(curval) != -1 )
    {
      cnode->right = new node (stoi (curval));
      queue.push(cnode->right);
    }

    i++ ;
       
    }
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
                 }

                 helper(root->left,level+1);
                 helper(root->right,level+1);
             }
             vector <int> rightsideview(node *root)
             {
                 helper(root,0);
                 return v;
             }
              

            
    };
    
            


 

 int main()
 {
     string s;  
     getline(cin,s);
  
     node *root = builtiterativetree(s);
    solution m;
  vector<int> x=  m.rightsideview(root);
    for (int a : x)
   {
     cout << a <<" ";
   }  
   
 }