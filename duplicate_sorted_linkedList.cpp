#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
using namespace std;
#define pb push_back
#define endl "\n"
typedef long long ll;


struct node{
	int data;
	node *next;
};

node  *delmid(node *root)
{
   node *p1=root;
   node *p2=root->next;
    
//    if(p2==NULL)
//    return p1;
    
    while(p2!=NULL)
    {
        if(p1->data==p2->data)
        {
            node *f=p2;
            p2=p2->next;
            p1->next=p2;
             delete(f);
        }
        else
        {
            p2=p2->next;
			p1=p1->next;   
        }
    } 
}

void print(node *root)
{
	while(root!=NULL)
	{
		cout<<root->data<<" ";
		root=root->next;
	}
}

node *newnode(int data)
{
	node *temp=new node;
	temp->data=data;
	temp->next=NULL;
	return temp;
}

int main()
{
 node *head = newnode(1);
 head->next=  newnode(2);
 head->next->next=newnode(2);
 head->next->next->next=newnode(4);
 head->next->next->next->next=newnode(4);
 head->next->next->next->next->next=newnode(6);
 delmid(head);
 print(head);
}

 

