//Middle of the contest
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll h1,h2,m1,m2;
    char ch;
    cin>>h1>>ch>>m1>>h2>>ch>>m2;
    ll diff=h2*60+m2-h1*60-m1;
    diff/=2;
    ll h=diff/60;
    ll min=diff%60;
    h=h1+h;
    min=min+m1;
    if(min>=60){
        h++;
        min=min%60;
    }
    if(h<10){
        cout<<0;
    }
    cout<<h<<":";
    if(min<10){
        cout<<0;
    }
    cout<<min<<endl;
    return 0;
}