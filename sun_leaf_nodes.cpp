#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
using namespace std;
#define pb push_back
#define endl "\n"
typedef long long ll;

struct Node{
	int data;
	Node *left,*right;
};

Node *newnode(int data)
{
	Node *temp=new Node;
	temp->data=data;
	temp->left=NULL;
	temp->right=NULL;
}

int print(Node *root,int *sum)
{
	if(!root)
	return 0;
	
	//cout<<root->data<<" -- ";
	if( (!root->left && !root->right ))
	{
	*sum+=root->data;
    }
    
   print(root->left,sum);
   print(root->right,sum);	  
}

int main()
{
	int sum=0;
   Node *root=newnode(1);	
   root->left = newnode(2);
   root->right = newnode(3);
   root->left->left = newnode(4);
   root->left->right = newnode(5);
   root->right->left=newnode(6);
   root->right->right = newnode(7);
   root->left->left->left = newnode(8);
   root->right->left->right=newnode(11);
   print(root , &sum);
   cout<<sum;
}
 

