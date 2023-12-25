#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--){
       ll n,i,cnt=0,j,ans=0,cnt1=0;
    cin>>n;
 
    vector<ll> v(n);
    for(int i=0;i<n;i++)     cin>>v[i];
    
    for(i=1;i<n;i++)
    {
       ll cur=v[i];
       cnt=0;
       while(v[i-1]>cur)cur*=2,cnt++;
 
       while((v[i-1]*2<=cur)&&ans)v[i-1]*=2,ans--;
 
       ans=ans+cnt;
       cnt1+=ans;
    } 
 
    cout<<cnt1<<endl;
    }
    return 0;
}