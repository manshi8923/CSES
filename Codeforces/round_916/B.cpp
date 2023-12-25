#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t;cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll k;
        cin>>k;
        vector<ll>ans;
        for(ll i=n;i>n-k;i--){
            ans.push_back(i);
        }
        for(int i=1;i<=n-k;i++){
            ans.push_back(i);
        }
        reverse(ans.begin(),ans.end());
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}