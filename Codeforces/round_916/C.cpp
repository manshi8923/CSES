#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll mx=INT_MIN;
ll dfs(ll node,vector<ll>v[],vector<bool>&vis){
	if(vis[node]){
		return 0;
	}
	else{
		vis[node]=true;
		vector<ll>ans;
		for(auto it:v[node]){
			ll count=dfs(it,v,vis)+1;
			if(count){
				ans.push_back(count);
			}
		}
		sort(ans.begin(),ans.end());
		reverse(ans.begin(),ans.end());
		if(ans.size()>1){
			mx=max(ans[0]+ans[1]-1,mx);
		}
		return ans[0];
	}
}
int main(){
	ll n;
	cin>>n;
	if(n==1){
		cout<<0<<endl;
	}
	else{
		vector<ll>v[n+1];
		for(int i=0;i<n-1;i++){
			ll x,y;
			cin>>x>>y;
			v[x].push_back(y);
			v[y].push_back(x);
		}
		vector<bool>visit(n+1,false);
		visit[0]=true;
		mx=max(mx,dfs(1,v,visit));mx--;
		cout<<3*mx<<endl;
	}
	return 0;
}