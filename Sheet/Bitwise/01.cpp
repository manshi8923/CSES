//New Year's eve
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll n,k;
    cin>>n>>k;
    if(k==1){
        cout<<n<<endl;
    }
    else{
        ll ans=1;
        while(ans<n){
            ans=ans*2+1;
        }
        cout<<ans<<endl;
    }
    return 0;
}
