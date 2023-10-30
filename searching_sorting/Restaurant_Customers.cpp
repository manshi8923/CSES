//Restaurant Customers
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t;
    cin>>t;
map<int,int>mp;
    while(t--){
        ll m,n;
        cin>>m>>n;
        mp[m]++;
        mp[n]--;
    }
    ll ans=0;
    ll maxi=0;
    for(auto it:mp){
        ans+=it.second;
        maxi=max(maxi,ans);
    }
    cout<<maxi<<endl;
    return 0;
}
    
