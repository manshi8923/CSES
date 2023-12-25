//Amr And Music
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll n,k;
    cin>>n>>k;
    vector<pair<int,int> >v;
    vector<ll>ans;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back({x,i+1});
    }
    sort(v.begin(),v.end());
    int sum=0;
    int i=0;
    while(sum<k){
        sum+=v[i].first;
        ans.push_back(v[i].second);
        i++;
    }
    if(sum>k){
        if(ans.size()==1){
            cout<<0<<endl;
        }else{
        cout<<ans.size()-1<<endl;
        for(int i=0;i<ans.size()-1;i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
        }
    }
    else{
        cout<<ans.size()<<endl;
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
