#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int xz=-1;
    int y=-1;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            int x;
            cin>>x;
            if(x==1){
                xz=i;
                y=j;
            }
        }
    }
    cout<<abs(xz-2)+abs(y-2)<<endl;
    
    return 0;
}