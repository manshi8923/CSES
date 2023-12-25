#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll maxi=INT_MIN;
void f(vector<ll>v[],ll node,ll count,vector<bool>visit){
    visit[node]=true;
    count++;
    for(auto it:v[node]){
        if(visit[it]==false){
            maxi=max(maxi,count);
            f(v,it,count,visit);
        }
    }
}
int main(){
    ll n;
    cin>>n;
    if(n==1){
        cout<<0<<endl;
    }
    else{
    vector<ll>v[n+1];
    for(int i=0;i<n-1;i++){
        ll x,y;
        cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    vector<bool>visit(n+1,false);
    f(v,1,0,visit);
    cout<<3*maxi<<endl;
    }
    return 0;
}