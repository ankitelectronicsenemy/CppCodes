#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node *next;
    node(int d){
        data =d;
        next=NULL;
    }
};
void insertattail(node *&head,int data)
{
  
    if(head == NULL)
    {
        head = new node(data);
        return ;
    }
    else 
    {
        node *tail =head;
        while(tail->next != NULL)
        {
            tail =tail->next;
        }
        tail->next = new node(data);
    }
    return ;
}
void print(node *head)
{
  node *temp=head;
  while(temp!=NULL)
  {
    cout<<temp->data<<" ";
    temp=temp->next;
  }
}
node *midpoint(node *head)
{
    if(head==NULL or head->next == NULL)
    {
        return head;
    }
    node *slow=head;
    node *fast=head;
    while((fast->next != NULL) and (fast !=NULL))
    {
        fast=fast->next->next;
        slow=slow->next;
        cout<<slow->data<<" "<<fast->data<<" "<<endl;
    }
    return slow;
}

bool palindrome(node *head,node *&head1,int num,int n)
{
   if(num == n)
   {
       return true ;
   } 
   bool flag ;
   flag = palindrome(head->next,head1,num+1,n);
   if(flag)
   {    
       if(num < n/2) {
           return true;
       }
       if(head->data == head1->data)
       {
           head1=head1->next;
       }else {
           return false;
       }
       if(num = n/2)
       {
           return true;
       }
       
   } 
       
       return false;
   
 
}

int main()
{
    int n;
    cin>>n;
    node *head= NULL;
    int data;
    int x=0;
    while(x<n)
    {
        cin>>data;
        insertattail(head,data);
        x++;
    }
    node *head1=head;
  //node *mid= midpoint(head);
  //cout<<mid->data<<endl;
  bool success=palindrome(head,head1,0,n);
  if(success)
  {
      cout<<"true";
  }
  else 
  cout<<"false";
 
}