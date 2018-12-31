//stebin_ben  ... takes time
#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
using namespace std;
#define pb push_back
#define ff first
#define ss second
#define endl "\n"
typedef long long ll;

 vector<int>adj[10];   	// adjanceny list helps for finding nearby nodes
 bool vis[10];      	// checks for every visited node or not ?
 int level[10]; 	    // array which stores level of each node at end
 int bfs(int s)
 {
 queue<int>q;  	 		// for pointing nodes in tree
 q.push(s);
 vis[s]=true;
 level[s]=0;
 while(!q.empty())
 {
 int p=q.front();
 int c=0;
 q.pop();
 for(int i=0;i<adj[p].size();i++)
 {
 	if((vis[adj[p][i]]	==false)&&(i==x+1))
 	{
 	level[adj[p][i]]=level[p]+1;
	q.push(adj[p][i]);
	vis[adj[p][i]]==true;
	c++;
	}
 }	
}
 cout<<level[s]<<endl;
}
int main()
{
 boost;
 #ifndef ONLINE_JUDGE
 freopen("input.txt", "r", stdin);
 #endif
 
 int s;
 cin>>s;
 cout<<bfs(s)<<endl;
}
