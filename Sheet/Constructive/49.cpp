#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a=0;
    while(n--){
        int x;
        cin>>x;
        if(x%2!=0){
            x+=a;
            a=x%2;
        }
        cout<<x/2<<endl;
    }
    return 0;
}