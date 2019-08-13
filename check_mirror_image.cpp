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

struct Node *newNode(int data)
{
	Node *temp=new Node;
	temp->data=data;
	temp->left=NULL;
	temp->right=NULL;
	return temp;
}


int aresame( Node* root1 , Node *root2 ){
   if(root1==NULL && root2==NULL)
   return true ;
   if(root1==NULL || root2==NULL)
   return false;
   
   return (root1->data==root2->data && aresame(root1->left,root2->right) && aresame(root1->right, root2->left));
}
 
 int main()
 {
    Node *a = newNode(1); 
    a->left = newNode(2); 
    a->right = newNode(3); 
    a->left->left  = newNode(4); 
    a->left->right = newNode(5); 
  
    Node *b = newNode(1); 
    b->left = newNode(3); 
    b->right = newNode(2); 
    b->right->left = newNode(5); 
    b->right->right = newNode(4); 
    if(aresame(a,b))
    cout<<1;
    else
    cout<<0;
 }

