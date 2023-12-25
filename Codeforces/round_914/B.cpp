
#include <bits/stdc++.h>
using namespace std;
#define ll long long



int main(){
    ll t;
    cin>>t;
    while(t--){
         ll n, i;
    cin>>n;
    vector<ll>a(n);
    vector<pair<int,int> > v;
    for(int i=0;i<n;i++){
        cin>>a[i];
        v.push_back({a[i],i});
    }
    sort(v.begin(),v.end());
    vector<ll>ans(n);
    vector<ll>pref(n);
    sort(a.begin(),a.end());
    pref[0] = a[0];
    for(i=1;i<n;i++){
        pref[i] = pref[i-1]+a[i];
    }
    ans[v[n-1].second] = n-1;
    for(i=n-2;i>=0;i--){
        if(pref[i] >= v[i+1].first){
            ans[v[i].second] = ans[v[i+1].second];
        }
        else{
            ans[v[i].second] = i;
        }
    }
    for(auto it:ans){
        cout<<it<<" ";
    }
    cout<<endl;
    }
    return 0;
}

