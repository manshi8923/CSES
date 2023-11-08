#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll n,m;
    cin>>n>>m;
    multiset<int>t;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        t.insert(x);
    }
    for(int i=0;i<m;i++){
       int to;
       cin>>to;

        auto it=t.upper_bound(to);
        if(it==t.begin()){
            cout<<-1<<endl;

        }
        else{
            cout<<*(--it)<<endl;
            t.erase(it);
        }
    }
    return 0;
}