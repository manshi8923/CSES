//Circumference of a tree
#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll ans=INT_MIN;
void f(vector<ll>v[],vector<bool>&check,int node,int &count){
    check[node]=true;
    count++;
    for(auto it:v[node]){
        if(check[it]!=true){
            ans=max(ans,count);
        }
        f(v,check,it,count);
    }
}
int main(){
    int n;
    cin>>n;
    if(n==1){
        cout<<0<<endl;
    }
    else{
        vector<ll>v[n+1];
        for(int i=0;i<n-1;i++){
            int x,y;
            cin>>x>>y;
            v[x].push_back(y);
            v[y].push_back(x);
        }
        vector<bool>check(n+1,false);
        
        cout<<6*ans<<endl;
    }
    return 0;
}