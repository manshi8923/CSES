
//Beginner's Zelda
#include<bits/stdc++.h>
#define ll long long
using namespace std;
void mad(){
    ll n;
    cin>>n;
    vector<vector<ll> >vecto(n-1,vector<ll>(2,0));
    for(int i=0;i<n-1;i++){
        for(int j=0;j<2;j++){
            cin>>vecto[i][j];
        }
    }
    vector<vector<ll> >matrix(n+1);
    for(int i=0;i<vecto.size();i++){
        matrix[vecto[i][0]].push_back(vecto[i][1]);
        matrix[vecto[i][1]].push_back(vecto[i][0]);
    }
    ll ans=0;
    for(int i=0;i<=n;i++){
        if(matrix[i].size()==1){
            ans++;
        }
    }
    cout<<ans/2+ans%2<<endl;
}
int main(){
    ll t;
    cin>>t;
    while(t--){
        mad();
    }
    return 0;
}