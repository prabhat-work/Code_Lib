#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
using namespace std;
#define pb push_back
#define endl "\n"
typedef long long ll;

struct Node{
	int data;
	Node *left , *right;
} ;

Node *newnode(int data)
{
    Node *temp = new Node;
	temp->data=data;
	temp->left=temp->right=NULL;
}

int height(Node *h)
{
	if(!h)
	return 0;
	
	return 1+ max( height(h->left),height(h->right) );
}

int dia(Node *root)
{
	if(!root)
	return 0;
	
	int lh=height(root->left);
	int rh=height(root->right);
	
	
	int ld=dia(root->left);
	int rd=dia(root->right);
	
	return max( (lh+rh+1) , (max(ld,rd)));
	
}

int main()
{
	Node *root=newnode(1);
	root->left=newnode(2);
	root->right=newnode(4);
	root->left->left=newnode(3);
	root->left->left->right=newnode(7);
	root->left->left->right->right=newnode(27);
	root->left->left->right->right->right=newnode(28);
	root->left->left->left=newnode(6);
	root->left->left->left->left=newnode(11);
	root->right->right=newnode(5);
	root->right->right->right=newnode(9);
	root->right->right->right->right=newnode(10);
	root->left->right=newnode(16);
	root->left->right->right=newnode(17);
	root->left->right->right->right=newnode(18);
	root->left->right->right->right->right=newnode(19);
	root->left->right->right->right->right->right=newnode(20);
	cout<<dia(root);
}

