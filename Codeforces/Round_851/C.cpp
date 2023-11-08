//moving numbers
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t;
    cin>>t;
    while (t--)
    {

    ll n;
    cin>>n;
    if(n%2==0){
        cout<<"NO"<<endl;
        continue;
    }
    cout<<"YES"<<endl;
    int large=2*n;
    int small=1;
    int first=n/2+1;
    while(first--){
        cout<<large<<" "<<small<<endl;
        large--;
        small+=2;
    }
    int sec=n/2;
    int inti=2;
    while(sec--){
        cout<<large<<" "<<inti<<endl;
        large--;
        inti+=2;
    }
    }
    return 0;
}