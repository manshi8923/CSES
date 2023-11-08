#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll sum(ll x){
    ll ans=0;
    ll num=x;
    while(num>0){
        ans+=num%10;
        num=num/10;
    }
    return ans;
}
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        if(n%2==0){
            cout<<n/2<<" "<<n/2<<endl;
        }
        else{
            ll x=n/2;
            ll y=n/2+1;
            ll temp=1;
            ll flag=1;
            ll s1=sum(x);
            ll s2=sum(y);
             if(abs(s1-s2)<=1){
                    cout<<x<<" "<<y<<endl;
            }
            else{
            while(temp<=n){
                for(int i=1;i<=9;i++){
                s1=sum(x);
                s2=sum(y);
                if(abs(s1-s2)<=1){
                    cout<<x<<" "<<y<<endl;
                    flag=0;
                    break;
                }
                x+=temp;
                y-=temp;
                }
                 if(flag==0){
                    break;
                }
                temp*=10;
            }
        }}
    }
    return 0;
}