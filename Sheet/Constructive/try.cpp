#include<bits/stdc++.h>
#define ll long long 
#define pb push_back
#define mp make_pair
#define S second
#define L length()
#define F first
#define newline cout<<"\n";
#define all(x) x.begin(),x.end()
#define mod int(1e9+7)   
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define rev(v) reverse(all(v))
using namespace std;
 
ll mx = INT_MIN;

void solve(){
    ll n,k;
    cin>>n>>k;
    ll q = log2l(k);
    ll ans = 1;
    vector<ll>v;
    v.pb(ans);
    for(int i=0;i<q;i++){
        ans= (((ans % mod)*n ) % mod);
        v.pb(ans);
    }
    ans=0;
    ll c=0;
    // for(auto &i : v) cout<<i<<" ";newline; 
    while(k!=0){
        if(k&1){
            ans+=v[c];
            // cout<<v[c]<<" ";
        }
        c++;
        k/=2;
    }
    cout<<ans<<endl;
}   

int main(){
   
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t=1;
    cin>>t; 
    while(t--) solve();
    return 0;
}