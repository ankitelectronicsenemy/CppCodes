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
node *elementfromlast(node *head,int k)
{
    node *s=head;
    node *f=head;

    int count=0;
    while(count < k)
    {
        f=f->next;
        count++;
    }
    while(f->next != NULL)
    {
        f=f->next;
        s=s->next;
    }

  return s->next;
}

int main()
{
    int data;
    cin>>data;
    node *head=NULL;
    while(data != -1)
    {
        insertattail(head,data);
        cin>>data;
    }
    int m;
    cin>>m;

  node *key=  elementfromlast(head,m);

  cout<<key->data; 
}