//Rook 
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        for(char ch='a';ch<='h';ch++){
            if(ch==s[0]){
                continue;
            }
            else{
                cout<<ch<<s[1]<<endl;
            }
        }
        for(char ch='1';ch<='8';ch++){
            if(ch==s[1]){
                continue;
            }
            cout<<s[0]<<ch<<endl;
        }
    }
    return 0;
}