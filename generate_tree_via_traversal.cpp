#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
using namespace std;
#define pb push_back
#define endl "\n"
typedef long long ll;
 
struct Node{
	int data;
	Node *left ,*right;
 };

Node *newnode(int data)              //creation of new node
	{
		Node *temp=new Node;
		temp->data=data;
		temp->left=NULL;
		temp->right=NULL;
		return temp;
	}
	
 int search(int arr[],int str, int end,int value)
 {
 	for(int i=str;i<end;i++)
 	{
 		if(arr[i]==value)
 	     return i;
	 }
 }
 
Node *buildtree(int in[],int pre[],int str,int end)
 {
	static int preindex=0;
	Node *node=newnode(pre[preindex++]);
	
	cout<<"---"<<preindex<<endl;
	if(str>end)
	return NULL;
	
	if(str==end)
	return node;
	
	int index =  search   ( in,  str ,  end , node->data);
	node->left = buildtree( in,  pre , str , index-1);   //created left subtree
	node->right =buildtree( in ,  pre , index+1 , end); // created right subtree
	
	return node;	
}

 void print(Node *node)
 {
 	if(!node)
 	return ;
 	
 	print(node->left);
 	cout<<node->data<<" ";
 	print(node->right);
 
 }
 int main()
 {
    int in[] = {4, 2, 5, 1, 3}; 
    int pre[] = {1, 2, 4, 5, 3}; 
    Node *root=buildtree(in,pre,0,4);
    print(root);
}

