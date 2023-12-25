//Bit++
#include<bits/stdc++.h>
using namespace std;
int main(){
    int count=0;
    int n;
    cin>>n;
    while(n--){
        string s;
        cin>>s;
        if(s=="++X"||s=="X++"){
            count++;
        }
        else{
            count--;
        }
    }
    cout<<count<<endl;
    return 0;
}