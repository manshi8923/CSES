#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t=1;
    while(t--){
        ll n;
        cin>>n;
        vector<ll>v(n-1);
        vector<ll>ans(n);
        ans[0]=0;
        for(int i=0;i<n-1;i++)cin>>v[i];
        for(int i=1;i<n;i++){
            ans[i]=ans[i-1]^v[i-1];
        }
        int m=log2(n);
        cout<<m<<endl;
        // bool flag=false;
        // for(int i=0;i<n;i++){
        //    if(ans[i]<0||ans[i]>n-1){
        //     flag=true;
        //     break;
        //    }
        // }
        // for(int i=0;i<n;i++){
        //     cout<<ans[i]<<" ";
        // }
        cout<<endl;
    }
    return 0;
}