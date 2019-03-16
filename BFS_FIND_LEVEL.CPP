//stebin_ben  ... takes time
#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
using namespace std;
#define pb push_back
#define ff first
#define ss second
#define endl "\n"
typedef long long ll;

// finding level of each node in the given graph 
 vector<int>adj[100005]; // used for 2D array
 int level[10];
 bool vis[100005];
 int bfs(int i)
 {
 	queue<int>qu;
 	int fr;
 	qu.push(i);
 	vis[i]=true;
 	level[i]=0;
 while(!qu.empty() )
 	{
	 fr=qu.front();
	 qu.pop();
	 for(int i=0;i<adj[fr].size();i++)
	 {
	 	if(vis[adj[fr][i]]==false)  
	 	{
	 		vis[adj[fr][i]]=true;
	 		qu.push(adj[fr][i]);
	 		level[adj[fr][i]]=level[fr]+1;
		 }
	 }
   }
}
int main()
{
	 boost;
	 #ifndef ONLINE_JUDGE
	 //freopen("input.txt", "r", stdin);
	 #endif 
  // bfs implementation
  
  int n,c=0,e;
  int x,y;
  cin>>n;
  cin>>e;
  for(int i=0;i<e;i++)
  {
  cin>>x>>y;
  adj[x].pb(y);
  adj[y].pb(x);
  }

  for(int i=0;i<n;i++)
  {
  	if(vis[i]==false)
  	{
	  bfs(i);
   }
     cout<<i<<" -------- "<<level[i]<<endl;
    }
  }


