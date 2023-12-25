#include<bits/stdc++.h>
#define ll long long
using namespace std;
void f(set<pair<int,int> > st,int x,int y,int a,int b){
    st.insert({x+a,y-b});
    st.insert({x-a,y+b});
    st.insert({x+a,y+b});
    st.insert({x-a,y-b});
    st.insert({x+b,y+a});
    st.insert({x-b,y-a});
    st.insert({x+b,y-a});
    st.insert({x-b,y+a});
}

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll a,b,xk,yk,xq,yq;
        cin>>a>>b>>xk>>yk>>xq>>yq;
        set<pair<int,int> >st1;
        set<pair<int,int> >st2;
        f(st1,xk,yk,a,b);
        f(st2,xq,yq,a,b);
        int ans=0;
        for(auto it:st1){
            if(st2.find(it)!=st2.end()){
                ans++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}