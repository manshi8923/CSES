//friends and Candies
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin >> n;
        ll arr[n];
        ll sum = 0;
        for(ll i = 0;i<n;i++){
            cin >> arr[i];
            sum += arr[i];
        }
        if(sum%n){
            cout << -1 << endl;
            continue;
        }
        ll op = sum/n , ans = 0;
        for(ll i = 0;i<n;i++){
            if(arr[i] > op)
                ans++;
        }
        cout << ans << endl;
    }
    return  0;
}