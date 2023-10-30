#include<bits/stdc++.h>
#define ll long long 
#define pb push_back
#define S second
#define L length()
#define F first
#define newline cout<<"\n";
#define all(x) x.begin(),x.end()
#define mod int(1e9+7)
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
using namespace std;
 
bool cmp(pair<ll,ll>a,pair<ll,ll>b){
    return a.S<b.S;
}
 
 
void solve(){
    ll a,b;
    cin>>a>>b;
    a--,--b;
    ll k=max(a,b);
    ll s=1,d=2;
    s =1 + (k*(k+1));
    if(a==b) cout<<s<<endl;
    else if(a>b){
        if(a%2) cout<< s+ abs(a-b)<<endl;
        else cout<<s-abs(a-b)<<endl;
    } 
    else{
        if(b%2) cout<< s-(a-b)<<endl;
        else cout<<s+abs(a-b)<<endl;
    }
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