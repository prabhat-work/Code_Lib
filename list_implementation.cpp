

//LIST IMPLMENTATION NOV/DIVB/18

//stebin_ben  ... takes time
#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
using namespace std;
#define pb push_back
#define ff first
#define ss second
typedef long long ll;
long long lis(list<ll> l ,ll k) 
{
	list<ll>::iterator it;
  ll c=0,flag=0;
	long long maxi=INT_MIN;
  for(it=l.begin();it!=l.end();it++)
  {
  	    if((*it)==1)
  	    {
  	    	c++;
		}
		else if((*it)==0)
		{
		   maxi=max(maxi,c);	
			c=0;
		}
	}
	maxi=max(maxi,c);
  if(maxi>k)
    maxi=k;
  return maxi;
 }

int main()
{
   ll n,k,q;
   ll last;
   cin>>n>>q>>k;
   ll  arr[n];
   list<ll>l;
   list<ll>::iterator it;
   for(int i=0;i<n;i++)  
   {
	 cin>>arr[i];
	 l.pb(arr[i]);
}
    
    //for(ll i=0;i<n;i++)
    string s;
    cin>>s;

   for(int i=0;i<s.length();i++)
   {
   	if(s[i]=='!')
   	{
   	last=l.back();
    l.pop_back();
    l.push_front(last);       	  
	}
	else if(s[i]=='?')
	{	
	  cout<<lis(l,k)<<endl;
	}
  }
}

 
   
    

