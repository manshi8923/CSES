//Stone Game
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int maxi=max_element(v.begin(),v.end())-v.begin();
        int mini=min_element(v.begin(),v.end())-v.begin();
        int ans=max(maxi,mini)+1;
        int p=n-1-max(maxi,mini);
        int q=1+min(maxi,mini);
        ans=min(ans,p+q+1);
        int r=n-min(maxi,mini);
        ans=min(ans,r);
        cout<<ans<<endl;
    }
    return 0;
}