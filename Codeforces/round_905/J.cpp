#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t;
    cin>>t;
    while (t--)
    {
       ll n;
       cin>>n;
       string s;
       cin>>s;
       int ans=0;
       map<int,int>mp;
       for(int i=0;i<26;i++){
        mp[i]=i+1;
       }
       for(int i=0;i<n;i++){
        mp[s[i]-'A']--;
        if(mp[s[i]-'A']==0){
            ans++;
        }
       }
       cout<<ans<<endl;
    }
    
    return 0;
}