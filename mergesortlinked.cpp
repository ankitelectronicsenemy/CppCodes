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
    else 
    {
        c=a;
        c->next=merge(a->next,b);
    }
    
    return c;

}



int main()
{
int t;
cin>>t;
for(int c=0;c<t;c++)
{
    int n;
    cin>>n;
    int a[n];

    node *head= NULL;
   for(int i=0;i<n;i++)
      {
          cin>>a[i];
          insertattail(head,a[i]);
      }
      print(head);
    int n1;
    cin>>n1;
    int a1[n1];

    node *head1= NULL;
            for(int m=0;m<n1;m++)
        {
                cin>>a1[m];
                insertattail(head1,a1[m]);
        }
//head =merge(head,head1);

print(head1);
}

}


