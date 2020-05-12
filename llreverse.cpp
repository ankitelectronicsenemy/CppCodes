#include<iostream>
using namespace std;


class node{
    public:
    int data;
    node *next;
    node (int d) {
        data = d;
        next =NULL;
    }
};

void insertattail(node *&head,int data)
{
  if(head==NULL)
  {
    head= new node(data);
    return;
  }
  else
  {
    node *tail =head;
    while(tail ->next != NULL)
    {
      tail = tail->next;
    }
    tail->next= new node(data);
    return ;
    
  }
  

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

node *reverselinkedlist(node *head,int key)
{
  node *c=head;
  node *next=NULL;
  node *p=NULL;
  int count=0;

  while(c !=NULL and count <key)
  {
    next=c->next;
    c->next=p;
    p=c;
    c=next;
    count++;
  }

  if(next!= NULL)
  {
    head->next= reverselinkedlist(next,key);
  }

return p;
}


int main()
{
int n;
cin>>n;
int a[n];
int key;
cin>>key;
node *head= NULL;
for(int i=0;i<n;i++)
{
  cin>>a[i];
  insertattail(head,a[i]);
}
print(head);
cout<<endl;
//head= reverselinkedlist(head,key);
//print(head);

}


