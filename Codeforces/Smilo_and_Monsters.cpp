#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,q;
        cin>>n>>q;
        vector<ll>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        vector<ll>b(q);
        for(int i=0;i<q;i++){
            int m;
            cin>>m;
            b[i]=pow(2,m);
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<q;j++){
                if(v[i]%b[j]==0){
                    v[i]=v[i]+(b[j]/2);
                }
            }
        }
        for(int i=0;i<n;i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}