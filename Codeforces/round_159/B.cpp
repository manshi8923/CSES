#include<bits/stdc++.h>
#define ll long long
using namespace std;
bool f(ll tasks,ll p,ll l,ll t,ll mid){
    ll ans=min(tasks,2*mid)*t;
    ans+=l*mid;
    return ans>=p;
}
int main(){
    ll te;
    cin>>te;
    while(te--){
        ll n,p,l,t;
        cin>>n>>p>>l>>t;
        ll tasks=(n+6)/7;
        ll low=1;
        ll high=n;
        while(low<high){
            ll mid=(low+high)/2;
            if(f(tasks,p,l,t,mid)){
                high=mid;
            }
            else{
                low=mid+1;
            }
        }
        cout<<n-high<<endl;
    }
    return 0;
}