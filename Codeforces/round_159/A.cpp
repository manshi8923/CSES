//Binary Imbalance
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--){
       int n;
       cin>>n;
       string s;
       cin>>s;
       int flag=0;
       int count0=0;
       int count1=0;
       for(int i=0;i<n;i++){
        if(s[i]=='0'){
            count0++;
        }
        else{
            count1++;
        }
       }
       for(int i=0;i<n;i++){
        if((s[i]=='0'&&s[i+1]=='1')||(s[i]=='1'&&s[i+1]=='0')){
            flag=1;
            break;
        }
       }
       if(flag){
        cout<<"YES"<<endl;
       }
       else{
        if(count0>count1){
            cout<<"YES"<<endl;
        }
        else{
        cout<<"NO"<<endl;
        }
       }
    }
    return 0;
}