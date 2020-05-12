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
        
    }
    
    return slow;
    
}


node *merge(node *head,node *head1)
{
    node *a=head;
    node *b=head1;
    node *c;
    if(head==NULL)
    {
        return b;
    }
    else if(head1==NULL)
    {
        return a;
    }
    if(a->data > b->data)
    {
        c=b;
        c->next=merge(a,b->next);
    }
    else if(a->data == b->data)
    {
        c=a;
        c->next=merge(a->next,b);
    }
    if(a->data == b->data)
    {
        c=a;
        c->next=merge(a->next,b);
    }
    
    return c;
    cout<<c->data;

}

node *mergesort(node *head)
{
    if( head== NULL or head->next==NULL)
    {
        return head;
    }
    node *mid = midpoint(head);
    cout<<mid->data<<endl;

    node *a = head;
    node *b = mid->next;
    cout<<a->data<<" ";
    cout<<b->data<<endl;


    mid->next = NULL;
    a=mergesort(a);
    b=mergesort(b);
    node *c = merge(a,b) ;
    cout<<c->data;
    return c;
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
    node *success= mergesort(head);
  print(success);
  
 
}