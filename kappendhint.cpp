#include<iostream>
using namespace std;
class node
{
 public:
 int data;
 node *next;
 node(int d)
 {
     data =d;
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

node *kappendhint(node *head,int k,int n)
{
    node *prev=head;
    node *current=head->next;

    int count = 0;

    while(count < n-k-1 )
    {
        prev=prev->next;
        current=current->next;
        count++;
        //cout<<prev->data<<" "<<current->data<<" "<<count<<endl;
    }
    prev->next = NULL;

    node *temp = current;
    
    while(temp->next != NULL)
    {
        temp = temp->next;
    
    }
    temp->next=head;
    //cout<<current->data;
return current;
}



int main()
{

node *head = NULL;
int n;
cin>>n;
int a[n];

for(int i=0;i<n;i++)
{
    cin>>a[i];
    insertattail(head,a[i]);
}
//print(head);
int k;
cin>>k;

k=k%n;
if(k==0)
{
    print(head);
}
else{
    node *kappend= kappendhint(head,k,n);

    print(kappend);
}
}