//stebin_ben  ... takes time
#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
using namespace std;
#define pb push_back
#define ff first
#define ss second
typedef unsigned long long ll;

int main()
{
 boost;

   ll n,q,ans,arr[n+1];
   cin>>n>>q;
   string s;
   ll a;
   for(ll i=1;i<=n;i++) 
   {
	  cin>>s;   	
	  arr[i]=bitset<64>(s).to_ulong(); 
   }
  
    for(int j=1;j<=q;j++)
   {
   ll flag=0,k,index,temp,l,r;
   ll x_new;
   string x;
 	cin>>l>>r>>x;
 	x_new=bitset<64>(x).to_ulong();
 	for( k=l;k<=r;k++)
 	{
 	    a=(arr[k]^x_new);
 	    if(flag==0)
 	    {
 	    index=k;
 	    flag=1;
 	    temp=a;
 	    }
 	    if((flag==1)&&(temp<a))
 	    {
 	        index=k;
 	        temp=a;
 	    }
 	}
 	cout<<index<<endl;
 	
	}
}
