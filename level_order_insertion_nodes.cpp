#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
using namespace std;
#define pb push_back
#define endl "\n"
typedef long long ll;

 struct node{
 	int data;
 	node *left,*right;
};

 node *newnode(int data)
 {
 	node *temp=new node;
 	temp->data=data;
 	temp->left=NULL;
 	temp->right=NULL;
 }
 
 void print( node *root , int key )
 {
 	if(!root)
 	return ;
  
    queue< node* >q;
 	q.push(root);
 
   while(!q.empty())
   {
 	node *fr=q.front();
    q.pop();

    if(fr->left==NULL)
	{
	fr->left = newnode(key);  // if null then create new node having data=key
	break;
    }
    else
     q.push(fr->left);
     
     
    if(fr->right==NULL)	    // if null then create new node having data=key
	{
	fr->right = newnode(key);   
	break;}
	else
	 q.push(fr->right); 
   }
 }
 
 
 void prin(node *root)
 {
 	if(!root)
 	return ;
 	
 	prin(root->left);
 	cout<<root->data<<" ";
	prin(root->right);	
 }

 int main()
 {
   int key;
   cin>>key;
   node *root = newnode(1);	
   root->left = newnode(2);
   root->right = newnode(3);
   root->left->left = newnode(4);
  // root->left->right = newnode(5);
   root->right->left=newnode(6);
   root->right->right=newnode(7);
   print(root,key);
   prin(root);
   
 }

