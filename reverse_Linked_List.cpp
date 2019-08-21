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

node *rev(node *root)
{
	node *prev=NULL;
	node *cur=NULL;
	node *nxt=NULL;
	
	cur=root;
	while(cur!=NULL)
	{
		nxt=cur->next;
		cur->next=prev;
		prev=cur;
		cur=nxt;
	}
	return prev;
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
 head->next->next=newnode(3);
 head->next->next->next=newnode(4);
 head->next->next->next->next=newnode(5);
 head->next->next->next->next->next=newnode(6);
 node *val=rev(head);
 print(val);
}

 

