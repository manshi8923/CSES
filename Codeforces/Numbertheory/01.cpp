#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll n;
    cin>>n;
    int num=pow(5,n);
    int count=0;
    int rem1=0;
    int rem2=0;
    while(count!=2){
        if(count==0){
            rem1=num%10;
        }
        else{
            rem2=num%10;
        }
        num=num/10;
        count++;
    }
    cout<<rem2<<rem1<<endl;
    return 0;
}