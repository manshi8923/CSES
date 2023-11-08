//Restaurants Customers
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    unordered_map<int,int>mp;
    while(n--){
        int a,b;
        cin>>a>>b;
        mp[a]++;
        mp[b]--;
    }
    int ans=0;
    int maxi=0;
    for(auto it:mp){
        maxi+=it.second;
        ans=max(ans,maxi);
    }
    cout<<ans<<endl;
    return 0;
} 
