#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        string p=s;
        stack<int>st1;
        stack<int>st2;
        for(int i=0;i<s.length();i++){
            if(s[i]=='B'){
                s[i]='1';
                if(st1.empty()){
                    continue;
                }
                else{
                    s[st1.top()]='1';
                    st1.pop();
                }
            }
            else if(s[i]=='b'){
                s[i]='1';
                if(st2.empty()){
                    continue;
                }
                else{
                    s[st2.top()]='1';
                    st2.pop();
                }
            }
            else if(s[i]>='a'&&s[i]<='z'){
                if(s[i]=='b'){
                    continue;
                }
                else{
                    st2.push(i);
                }
            }
            else if(s[i]>='A'&&s[i]<='Z'){
                if(s[i]=='B'){
                    continue;
                }
                else{
                    st1.push(i);
                }
            }
        }
        string ans="";
        for(int i=0;i<s.length();i++){
            if(s[i]!='1'){
                ans+=s[i];
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}