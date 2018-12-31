//stebin_ben  ... takes time
#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
using namespace std;
#define pb push_back
#define ff first
#define ss second
#define endl "\n"
typedef long long ll;

	bool visit[10];      	        //  maintain to check visited node
	vector<int>adj[10];
	
 void initialize()
 {
 for(int i=0;i<10;i++)
 {
 visit[i]=false;
 }}                                       
	
void dfs(int s)
{
	visit[s]=true;
	for(int i=0;i<adj[s].size();i++)
	{
		if(visit[adj[s][i]]==false)   // check for other neighbours of source s
		dfs(adj[s][i]);
	}
}
int main()
{
 boost;
 #ifndef ONLINE_JUDGE
 //freopen("input.txt", "r", stdin);
 #endif
	int n,ede,count=0;
	cin>>n>>ede;
  
	while(ede--)
	{
		int a,b;
		cin>>a>>b;
       adj[a].pb(b);    // undirected graph therefore both a->b and b->a possible
       adj[b].pb(a);
}
		int x;                                 // head node if required
		cin>>x;
     initialize();
  for(int i=1;i<=n;i++)
  {
  	if(visit[i]==false)
  	{
  		visit[i]=true;
  		dfs(i);
  		count++;          // count connected nodes in graph
	  }
  
  }}

